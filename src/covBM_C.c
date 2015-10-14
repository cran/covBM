#include <R.h>
#include <Rdefines.h>

void covBM_C(double *variate, double *rhoIN, int *lengthIN, double *result)
{
  double rho = *rhoIN;
  int length = *lengthIN;
  
  for (int i=0; i<length; ++i){
    for (int j=0; j<length; ++j) {
      result[i*length+j]=rho*(((variate[i]) < (variate[j])) ? (variate[i]) : (variate[j]));
    }
  ;
  }
  for (int k=0; k<length; ++k)
    result[k*length+k]=result[k*length+k]+1;
}
