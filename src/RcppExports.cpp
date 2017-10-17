// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// RKHWeightPowDist
double RKHWeightPowDist(const arma::colvec& x, const arma::colvec& y, const arma::colvec& w, const arma::colvec& p);
RcppExport SEXP RKHSENS_RKHWeightPowDist(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(RKHWeightPowDist(x, y, w, p));
    return rcpp_result_gen;
END_RCPP
}
// RKHCov
arma::mat& RKHCov(arma::mat& X, arma::mat Y, Function k, bool symmetric);
RcppExport SEXP RKHSENS_RKHCov(SEXP XSEXP, SEXP YSEXP, SEXP kSEXP, SEXP symmetricSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Function >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type symmetric(symmetricSEXP);
    rcpp_result_gen = Rcpp::wrap(RKHCov(X, Y, k, symmetric));
    return rcpp_result_gen;
END_RCPP
}
// RKHGaussProcess
List RKHGaussProcess(arma::mat& Z, arma::mat& X, arma::mat& Y, Function Kern);
RcppExport SEXP RKHSENS_RKHGaussProcess(SEXP ZSEXP, SEXP XSEXP, SEXP YSEXP, SEXP KernSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Function >::type Kern(KernSEXP);
    rcpp_result_gen = Rcpp::wrap(RKHGaussProcess(Z, X, Y, Kern));
    return rcpp_result_gen;
END_RCPP
}
// RKHKerLinear
double RKHKerLinear(const double& h, const double& alpha);
RcppExport SEXP RKHSENS_RKHKerLinear(SEXP hSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double& >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(RKHKerLinear(h, alpha));
    return rcpp_result_gen;
END_RCPP
}
// RKHKerSqr
double RKHKerSqr(const double& h, const double& alpha);
RcppExport SEXP RKHSENS_RKHKerSqr(SEXP hSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double& >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(RKHKerSqr(h, alpha));
    return rcpp_result_gen;
END_RCPP
}
// RKHKerTri
double RKHKerTri(const double& h, const double& c, const double& alpha);
RcppExport SEXP RKHSENS_RKHKerTri(SEXP hSEXP, SEXP cSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double& >::type c(cSEXP);
    Rcpp::traits::input_parameter< const double& >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(RKHKerTri(h, c, alpha));
    return rcpp_result_gen;
END_RCPP
}
// RKHKerExp
double RKHKerExp(const double& h, const double& sigma, const double& theta);
RcppExport SEXP RKHSENS_RKHKerExp(SEXP hSEXP, SEXP sigmaSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const double& >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(RKHKerExp(h, sigma, theta));
    return rcpp_result_gen;
END_RCPP
}
// RKHKerSqrExp
double RKHKerSqrExp(const double& h, const double& sigma, const double& theta);
RcppExport SEXP RKHSENS_RKHKerSqrExp(SEXP hSEXP, SEXP sigmaSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const double& >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(RKHKerSqrExp(h, sigma, theta));
    return rcpp_result_gen;
END_RCPP
}
// RKHKerMatern
double RKHKerMatern(const double& h, const double& v, const double& sigma, const double& theta);
RcppExport SEXP RKHSENS_RKHKerMatern(SEXP hSEXP, SEXP vSEXP, SEXP sigmaSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double& >::type v(vSEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const double& >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(RKHKerMatern(h, v, sigma, theta));
    return rcpp_result_gen;
END_RCPP
}
// RKHKerMultilog
double RKHKerMultilog(const double& h, const double& R);
RcppExport SEXP RKHSENS_RKHKerMultilog(SEXP hSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double& >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(RKHKerMultilog(h, R));
    return rcpp_result_gen;
END_RCPP
}
// RKHKerNatCubSpl
double RKHKerNatCubSpl(const double& h, const double& R);
RcppExport SEXP RKHSENS_RKHKerNatCubSpl(SEXP hSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double& >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(RKHKerNatCubSpl(h, R));
    return rcpp_result_gen;
END_RCPP
}
// RKHKerPlateSpl
double RKHKerPlateSpl(const double& h, const double& R);
RcppExport SEXP RKHSENS_RKHKerPlateSpl(SEXP hSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double& >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(RKHKerPlateSpl(h, R));
    return rcpp_result_gen;
END_RCPP
}
// RKHKerMix
double RKHKerMix(const double& h, const double& sigma, const double& theta);
RcppExport SEXP RKHSENS_RKHKerMix(SEXP hSEXP, SEXP sigmaSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const double& >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(RKHKerMix(h, sigma, theta));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"RKHSENS_RKHWeightPowDist", (DL_FUNC) &RKHSENS_RKHWeightPowDist, 4},
    {"RKHSENS_RKHCov", (DL_FUNC) &RKHSENS_RKHCov, 4},
    {"RKHSENS_RKHGaussProcess", (DL_FUNC) &RKHSENS_RKHGaussProcess, 4},
    {"RKHSENS_RKHKerLinear", (DL_FUNC) &RKHSENS_RKHKerLinear, 2},
    {"RKHSENS_RKHKerSqr", (DL_FUNC) &RKHSENS_RKHKerSqr, 2},
    {"RKHSENS_RKHKerTri", (DL_FUNC) &RKHSENS_RKHKerTri, 3},
    {"RKHSENS_RKHKerExp", (DL_FUNC) &RKHSENS_RKHKerExp, 3},
    {"RKHSENS_RKHKerSqrExp", (DL_FUNC) &RKHSENS_RKHKerSqrExp, 3},
    {"RKHSENS_RKHKerMatern", (DL_FUNC) &RKHSENS_RKHKerMatern, 4},
    {"RKHSENS_RKHKerMultilog", (DL_FUNC) &RKHSENS_RKHKerMultilog, 2},
    {"RKHSENS_RKHKerNatCubSpl", (DL_FUNC) &RKHSENS_RKHKerNatCubSpl, 2},
    {"RKHSENS_RKHKerPlateSpl", (DL_FUNC) &RKHSENS_RKHKerPlateSpl, 2},
    {"RKHSENS_RKHKerMix", (DL_FUNC) &RKHSENS_RKHKerMix, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_RKHSENS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
