// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// distwRKH
double distwRKH(const NumericVector x, const NumericVector y, const NumericVector w, const NumericVector p);
RcppExport SEXP RKHSENS_distwRKH(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP pSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type w(wSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type p(pSEXP );
        double __result = distwRKH(x, y, w, p);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// distRKH
double distRKH(const NumericVector x, const NumericVector y);
RcppExport SEXP RKHSENS_distRKH(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP );
        double __result = distRKH(x, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// klinRKH
double klinRKH(const double& h, const double& alpha = 1.0);
RcppExport SEXP RKHSENS_klinRKH(SEXP hSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const double& >::type h(hSEXP );
        Rcpp::traits::input_parameter< const double& >::type alpha(alphaSEXP );
        double __result = klinRKH(h, alpha);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ksqrRKH
double ksqrRKH(const double& h, const double& alpha = 1.0);
RcppExport SEXP RKHSENS_ksqrRKH(SEXP hSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const double& >::type h(hSEXP );
        Rcpp::traits::input_parameter< const double& >::type alpha(alphaSEXP );
        double __result = ksqrRKH(h, alpha);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ktriRKH
double ktriRKH(const double& h, const double& c = 1.0, const double& alpha = 1.0);
RcppExport SEXP RKHSENS_ktriRKH(SEXP hSEXP, SEXP cSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const double& >::type h(hSEXP );
        Rcpp::traits::input_parameter< const double& >::type c(cSEXP );
        Rcpp::traits::input_parameter< const double& >::type alpha(alphaSEXP );
        double __result = ktriRKH(h, c, alpha);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// kexpRKH
double kexpRKH(const double& h, const double& sigma = 1.0, const double& theta = 1.0);
RcppExport SEXP RKHSENS_kexpRKH(SEXP hSEXP, SEXP sigmaSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const double& >::type h(hSEXP );
        Rcpp::traits::input_parameter< const double& >::type sigma(sigmaSEXP );
        Rcpp::traits::input_parameter< const double& >::type theta(thetaSEXP );
        double __result = kexpRKH(h, sigma, theta);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ksqexpRKH
double ksqexpRKH(const double& h, const double& sigma = 1.0, const double& theta = 1.0);
RcppExport SEXP RKHSENS_ksqexpRKH(SEXP hSEXP, SEXP sigmaSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const double& >::type h(hSEXP );
        Rcpp::traits::input_parameter< const double& >::type sigma(sigmaSEXP );
        Rcpp::traits::input_parameter< const double& >::type theta(thetaSEXP );
        double __result = ksqexpRKH(h, sigma, theta);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// kmaternRKH
double kmaternRKH(const double& h, const double& v = 2.0, const double& sigma = 1.0, const double& theta = 1.0);
RcppExport SEXP RKHSENS_kmaternRKH(SEXP hSEXP, SEXP vSEXP, SEXP sigmaSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const double& >::type h(hSEXP );
        Rcpp::traits::input_parameter< const double& >::type v(vSEXP );
        Rcpp::traits::input_parameter< const double& >::type sigma(sigmaSEXP );
        Rcpp::traits::input_parameter< const double& >::type theta(thetaSEXP );
        double __result = kmaternRKH(h, v, sigma, theta);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// kmultilogRKH
double kmultilogRKH(const double& h, const double& R = 1.0);
RcppExport SEXP RKHSENS_kmultilogRKH(SEXP hSEXP, SEXP RSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const double& >::type h(hSEXP );
        Rcpp::traits::input_parameter< const double& >::type R(RSEXP );
        double __result = kmultilogRKH(h, R);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// kcubsplineRKH
double kcubsplineRKH(const double& h, const double& R = 1.0);
RcppExport SEXP RKHSENS_kcubsplineRKH(SEXP hSEXP, SEXP RSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const double& >::type h(hSEXP );
        Rcpp::traits::input_parameter< const double& >::type R(RSEXP );
        double __result = kcubsplineRKH(h, R);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ktpsplineRKH
double ktpsplineRKH(const double& h, const double& R = 1.0);
RcppExport SEXP RKHSENS_ktpsplineRKH(SEXP hSEXP, SEXP RSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const double& >::type h(hSEXP );
        Rcpp::traits::input_parameter< const double& >::type R(RSEXP );
        double __result = ktpsplineRKH(h, R);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// kmixRKH
double kmixRKH(const double& h, const double& sigma = 1.0, const double& theta = 1.0);
RcppExport SEXP RKHSENS_kmixRKH(SEXP hSEXP, SEXP sigmaSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const double& >::type h(hSEXP );
        Rcpp::traits::input_parameter< const double& >::type sigma(sigmaSEXP );
        Rcpp::traits::input_parameter< const double& >::type theta(thetaSEXP );
        double __result = kmixRKH(h, sigma, theta);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// krigingSimpleRKH
List krigingSimpleRKH(NumericMatrix Z, NumericMatrix X, NumericMatrix x0, Function k);
RcppExport SEXP RKHSENS_krigingSimpleRKH(SEXP ZSEXP, SEXP XSEXP, SEXP x0SEXP, SEXP kSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type Z(ZSEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type x0(x0SEXP );
        Rcpp::traits::input_parameter< Function >::type k(kSEXP );
        List __result = krigingSimpleRKH(Z, X, x0, k);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}