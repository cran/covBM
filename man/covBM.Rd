% Generated by roxygen2 (4.1.0): do not edit by hand
% Please edit documentation in R/CovBM.R, R/covBM-package.r
\docType{package}
\name{covBM}
\alias{covBM}
\alias{covBM-package}
\title{covBM}
\usage{
covBM(value = 1, form = ~1)
}
\arguments{
\item{value}{Numeric argument providing starting value for the scale parameter of
Brownian motion process relative to residual error variance for optimisation.}

\item{form}{A one-sided formula of the form ~t|g, where t represents a continuous
variable (usually time) and g represents a grouping factor, i.e. with a separate
Brownian motion process modelled at each level.}
}
\value{
An object of class "covBM" and inheriting from "corStruct".
}
\description{
This is a constructor function for the "covBM" class, representing a Brownian motion
component in terms of a continuous variable. The object created is a special type of
\code{\link[nlme]{corStruct}}.

covBM
}
\examples{
cov1<-covBM(form=~time|group)
}

