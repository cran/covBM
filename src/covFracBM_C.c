#include <R.h>
#include <Rdefines.h>
#include <math.h>

void covFracBM_C(double *variate, double *rhoIN, double *HurstIN, int *lengthIN, double *result)
{
  double rho = *rhoIN;
  int length = *lengthIN;
  double H2 = 2**HurstIN;

  for (int i=0; i<length; ++i){
    for (int j=0; j<length; ++j) {
      result[i*length+j]=0.5*rho*(pow(fabs(variate[i]),H2) + pow(fabs(variate[j]),H2) - pow(fabs(variate[i]-variate[j]),H2));
    }
  ;
  }
  for (int k=0; k<length; ++k)
    result[k*length+k]=result[k*length+k]+1;
}
