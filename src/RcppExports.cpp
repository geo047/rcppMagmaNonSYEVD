// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// StopServer
void StopServer();
RcppExport SEXP MagmaGPU_StopServer() {
BEGIN_RCPP
    StopServer();
    return R_NilValue;
END_RCPP
}
// CleanupSharedMemory
int CleanupSharedMemory();
RcppExport SEXP MagmaGPU_CleanupSharedMemory() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(CleanupSharedMemory());
    return rcpp_result_gen;
END_RCPP
}
// GetServerArgs
std::string GetServerArgs(int matrixDimension, bool withVectors, int numGPUsWanted, std::string memName, std::string semName, int printDetails);
RcppExport SEXP MagmaGPU_GetServerArgs(SEXP matrixDimensionSEXP, SEXP withVectorsSEXP, SEXP numGPUsWantedSEXP, SEXP memNameSEXP, SEXP semNameSEXP, SEXP printDetailsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type matrixDimension(matrixDimensionSEXP);
    Rcpp::traits::input_parameter< bool >::type withVectors(withVectorsSEXP);
    Rcpp::traits::input_parameter< int >::type numGPUsWanted(numGPUsWantedSEXP);
    Rcpp::traits::input_parameter< std::string >::type memName(memNameSEXP);
    Rcpp::traits::input_parameter< std::string >::type semName(semNameSEXP);
    Rcpp::traits::input_parameter< int >::type printDetails(printDetailsSEXP);
    rcpp_result_gen = Rcpp::wrap(GetServerArgs(matrixDimension, withVectors, numGPUsWanted, memName, semName, printDetails));
    return rcpp_result_gen;
END_RCPP
}
// eigen_nonsym_mgpu
Rcpp::List eigen_nonsym_mgpu(Rcpp::NumericMatrix matrix, bool symmetric, bool only_values, bool overwrite, bool printInfo);
RcppExport SEXP MagmaGPU_eigen_nonsym_mgpu(SEXP matrixSEXP, SEXP symmetricSEXP, SEXP only_valuesSEXP, SEXP overwriteSEXP, SEXP printInfoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< bool >::type symmetric(symmetricSEXP);
    Rcpp::traits::input_parameter< bool >::type only_values(only_valuesSEXP);
    Rcpp::traits::input_parameter< bool >::type overwrite(overwriteSEXP);
    Rcpp::traits::input_parameter< bool >::type printInfo(printInfoSEXP);
    rcpp_result_gen = Rcpp::wrap(eigen_nonsym_mgpu(matrix, symmetric, only_values, overwrite, printInfo));
    return rcpp_result_gen;
END_RCPP
}
// eigen_mgpu
Rcpp::List eigen_mgpu(Rcpp::NumericMatrix matrix, bool symmetric, bool only_values, bool overwrite, bool printInfo);
RcppExport SEXP MagmaGPU_eigen_mgpu(SEXP matrixSEXP, SEXP symmetricSEXP, SEXP only_valuesSEXP, SEXP overwriteSEXP, SEXP printInfoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< bool >::type symmetric(symmetricSEXP);
    Rcpp::traits::input_parameter< bool >::type only_values(only_valuesSEXP);
    Rcpp::traits::input_parameter< bool >::type overwrite(overwriteSEXP);
    Rcpp::traits::input_parameter< bool >::type printInfo(printInfoSEXP);
    rcpp_result_gen = Rcpp::wrap(eigen_mgpu(matrix, symmetric, only_values, overwrite, printInfo));
    return rcpp_result_gen;
END_RCPP
}

