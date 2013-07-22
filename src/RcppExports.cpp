// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cgrowth_rootf
double cgrowth_rootf(double x, double K, double Linf, double locperiodC, double TW, double age);
RcppExport SEXP ELEFAN_cgrowth_rootf(SEXP xSEXP, SEXP KSEXP, SEXP LinfSEXP, SEXP locperiodCSEXP, SEXP TWSEXP, SEXP ageSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        double x = Rcpp::as<double >(xSEXP);
        double K = Rcpp::as<double >(KSEXP);
        double Linf = Rcpp::as<double >(LinfSEXP);
        double locperiodC = Rcpp::as<double >(locperiodCSEXP);
        double TW = Rcpp::as<double >(TWSEXP);
        double age = Rcpp::as<double >(ageSEXP);
        double __result = cgrowth_rootf(x, K, Linf, locperiodC, TW, age);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// curves_cpp
List curves_cpp(double Linf, double locperiodC, double tw, double K, NumericVector ML, double modday, double sdate, double sML, double birthdaycurve);
RcppExport SEXP ELEFAN_curves_cpp(SEXP LinfSEXP, SEXP locperiodCSEXP, SEXP twSEXP, SEXP KSEXP, SEXP MLSEXP, SEXP moddaySEXP, SEXP sdateSEXP, SEXP sMLSEXP, SEXP birthdaycurveSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        double Linf = Rcpp::as<double >(LinfSEXP);
        double locperiodC = Rcpp::as<double >(locperiodCSEXP);
        double tw = Rcpp::as<double >(twSEXP);
        double K = Rcpp::as<double >(KSEXP);
        NumericVector ML = Rcpp::as<NumericVector >(MLSEXP);
        double modday = Rcpp::as<double >(moddaySEXP);
        double sdate = Rcpp::as<double >(sdateSEXP);
        double sML = Rcpp::as<double >(sMLSEXP);
        double birthdaycurve = Rcpp::as<double >(birthdaycurveSEXP);
        List __result = curves_cpp(Linf, locperiodC, tw, K, ML, modday, sdate, sML, birthdaycurve);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
