// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// rcpp_xy_from_matrix2
IntegerMatrix rcpp_xy_from_matrix2(arma::imat x, Rcpp::Nullable<Rcpp::IntegerVector> cell);
RcppExport SEXP _landscapemetrics_rcpp_xy_from_matrix2(SEXP xSEXP, SEXP cellSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type cell(cellSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_xy_from_matrix2(x, cell));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_cell_from_xy2
IntegerVector rcpp_cell_from_xy2(arma::imat x, IntegerMatrix y);
RcppExport SEXP _landscapemetrics_rcpp_cell_from_xy2(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_cell_from_xy2(x, y));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_create_neighborhood2
IntegerMatrix rcpp_create_neighborhood2(arma::imat directions);
RcppExport SEXP _landscapemetrics_rcpp_create_neighborhood2(SEXP directionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat >::type directions(directionsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_create_neighborhood2(directions));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_adjacency
IntegerMatrix rcpp_get_adjacency(arma::imat x, arma::imat directions);
RcppExport SEXP _landscapemetrics_rcpp_get_adjacency(SEXP xSEXP, SEXP directionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::imat >::type directions(directionsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_adjacency(x, directions));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_pairs
IntegerMatrix rcpp_get_pairs(arma::imat x, arma::imat directions);
RcppExport SEXP _landscapemetrics_rcpp_get_pairs(SEXP xSEXP, SEXP directionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::imat >::type directions(directionsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_pairs(x, directions));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_coocurrence_matrix_old
IntegerMatrix rcpp_get_coocurrence_matrix_old(arma::imat x, arma::imat directions);
RcppExport SEXP _landscapemetrics_rcpp_get_coocurrence_matrix_old(SEXP xSEXP, SEXP directionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::imat >::type directions(directionsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_coocurrence_matrix_old(x, directions));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_entropy
double rcpp_get_entropy(NumericVector x, std::string base);
RcppExport SEXP _landscapemetrics_rcpp_get_entropy(SEXP xSEXP, SEXP baseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type base(baseSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_entropy(x, base));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_xy_from_matrix
IntegerMatrix rcpp_xy_from_matrix(arma::imat x, Rcpp::Nullable<Rcpp::IntegerVector> cell);
RcppExport SEXP _landscapemetrics_rcpp_xy_from_matrix(SEXP xSEXP, SEXP cellSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type cell(cellSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_xy_from_matrix(x, cell));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_cell_from_xy
IntegerVector rcpp_cell_from_xy(arma::imat x, IntegerMatrix y);
RcppExport SEXP _landscapemetrics_rcpp_cell_from_xy(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_cell_from_xy(x, y));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_create_neighborhood
IntegerMatrix rcpp_create_neighborhood(arma::imat directions);
RcppExport SEXP _landscapemetrics_rcpp_create_neighborhood(SEXP directionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat >::type directions(directionsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_create_neighborhood(directions));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_boundaries
IntegerMatrix rcpp_get_boundaries(const IntegerMatrix x, const arma::imat directions);
RcppExport SEXP _landscapemetrics_rcpp_get_boundaries(SEXP xSEXP, SEXP directionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::imat >::type directions(directionsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_boundaries(x, directions));
    return rcpp_result_gen;
END_RCPP
}
// max_dist_fun
double max_dist_fun(arma::mat& points);
RcppExport SEXP _landscapemetrics_max_dist_fun(SEXP pointsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type points(pointsSEXP);
    rcpp_result_gen = Rcpp::wrap(max_dist_fun(points));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_circle
arma::mat rcpp_get_circle(arma::mat points, double resolution_x, double resolution_y);
RcppExport SEXP _landscapemetrics_rcpp_get_circle(SEXP pointsSEXP, SEXP resolution_xSEXP, SEXP resolution_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type points(pointsSEXP);
    Rcpp::traits::input_parameter< double >::type resolution_x(resolution_xSEXP);
    Rcpp::traits::input_parameter< double >::type resolution_y(resolution_ySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_circle(points, resolution_x, resolution_y));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_composition_vector
IntegerVector rcpp_get_composition_vector(const Rcpp::NumericVector& x);
RcppExport SEXP _landscapemetrics_rcpp_get_composition_vector(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_composition_vector(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_coocurrence_matrix
IntegerMatrix rcpp_get_coocurrence_matrix(const IntegerMatrix x, const arma::imat directions);
RcppExport SEXP _landscapemetrics_rcpp_get_coocurrence_matrix(SEXP xSEXP, SEXP directionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::imat >::type directions(directionsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_coocurrence_matrix(x, directions));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_coocurrence_matrix_diag
IntegerVector rcpp_get_coocurrence_matrix_diag(const IntegerMatrix x, const arma::imat directions);
RcppExport SEXP _landscapemetrics_rcpp_get_coocurrence_matrix_diag(SEXP xSEXP, SEXP directionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::imat >::type directions(directionsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_coocurrence_matrix_diag(x, directions));
    return rcpp_result_gen;
END_RCPP
}
// triangular_index
int triangular_index(int r, int c);
RcppExport SEXP _landscapemetrics_triangular_index(SEXP rSEXP, SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(triangular_index(r, c));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_coocurrence_vector
NumericVector rcpp_get_coocurrence_vector(IntegerMatrix x, arma::imat directions, bool ordered);
RcppExport SEXP _landscapemetrics_rcpp_get_coocurrence_vector(SEXP xSEXP, SEXP directionsSEXP, SEXP orderedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::imat >::type directions(directionsSEXP);
    Rcpp::traits::input_parameter< bool >::type ordered(orderedSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_coocurrence_vector(x, directions, ordered));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_offdiagonal_vector
NumericVector rcpp_get_offdiagonal_vector(IntegerMatrix x, arma::imat directions);
RcppExport SEXP _landscapemetrics_rcpp_get_offdiagonal_vector(SEXP xSEXP, SEXP directionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::imat >::type directions(directionsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_offdiagonal_vector(x, directions));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_nearest_neighbor
NumericVector rcpp_get_nearest_neighbor(const NumericMatrix& points);
RcppExport SEXP _landscapemetrics_rcpp_get_nearest_neighbor(SEXP pointsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type points(pointsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_nearest_neighbor(points));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_unique_values
std::vector<int> rcpp_get_unique_values(const Rcpp::IntegerVector& x, bool na_omit);
RcppExport SEXP _landscapemetrics_rcpp_get_unique_values(SEXP xSEXP, SEXP na_omitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type na_omit(na_omitSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_unique_values(x, na_omit));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP ccl_4(SEXP);
RcppExport SEXP ccl_8(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_landscapemetrics_rcpp_xy_from_matrix2", (DL_FUNC) &_landscapemetrics_rcpp_xy_from_matrix2, 2},
    {"_landscapemetrics_rcpp_cell_from_xy2", (DL_FUNC) &_landscapemetrics_rcpp_cell_from_xy2, 2},
    {"_landscapemetrics_rcpp_create_neighborhood2", (DL_FUNC) &_landscapemetrics_rcpp_create_neighborhood2, 1},
    {"_landscapemetrics_rcpp_get_adjacency", (DL_FUNC) &_landscapemetrics_rcpp_get_adjacency, 2},
    {"_landscapemetrics_rcpp_get_pairs", (DL_FUNC) &_landscapemetrics_rcpp_get_pairs, 2},
    {"_landscapemetrics_rcpp_get_coocurrence_matrix_old", (DL_FUNC) &_landscapemetrics_rcpp_get_coocurrence_matrix_old, 2},
    {"_landscapemetrics_rcpp_get_entropy", (DL_FUNC) &_landscapemetrics_rcpp_get_entropy, 2},
    {"_landscapemetrics_rcpp_xy_from_matrix", (DL_FUNC) &_landscapemetrics_rcpp_xy_from_matrix, 2},
    {"_landscapemetrics_rcpp_cell_from_xy", (DL_FUNC) &_landscapemetrics_rcpp_cell_from_xy, 2},
    {"_landscapemetrics_rcpp_create_neighborhood", (DL_FUNC) &_landscapemetrics_rcpp_create_neighborhood, 1},
    {"_landscapemetrics_rcpp_get_boundaries", (DL_FUNC) &_landscapemetrics_rcpp_get_boundaries, 2},
    {"_landscapemetrics_max_dist_fun", (DL_FUNC) &_landscapemetrics_max_dist_fun, 1},
    {"_landscapemetrics_rcpp_get_circle", (DL_FUNC) &_landscapemetrics_rcpp_get_circle, 3},
    {"_landscapemetrics_rcpp_get_composition_vector", (DL_FUNC) &_landscapemetrics_rcpp_get_composition_vector, 1},
    {"_landscapemetrics_rcpp_get_coocurrence_matrix", (DL_FUNC) &_landscapemetrics_rcpp_get_coocurrence_matrix, 2},
    {"_landscapemetrics_rcpp_get_coocurrence_matrix_diag", (DL_FUNC) &_landscapemetrics_rcpp_get_coocurrence_matrix_diag, 2},
    {"_landscapemetrics_triangular_index", (DL_FUNC) &_landscapemetrics_triangular_index, 2},
    {"_landscapemetrics_rcpp_get_coocurrence_vector", (DL_FUNC) &_landscapemetrics_rcpp_get_coocurrence_vector, 3},
    {"_landscapemetrics_rcpp_get_offdiagonal_vector", (DL_FUNC) &_landscapemetrics_rcpp_get_offdiagonal_vector, 2},
    {"_landscapemetrics_rcpp_get_nearest_neighbor", (DL_FUNC) &_landscapemetrics_rcpp_get_nearest_neighbor, 1},
    {"_landscapemetrics_rcpp_get_unique_values", (DL_FUNC) &_landscapemetrics_rcpp_get_unique_values, 2},
    {"ccl_4",                                              (DL_FUNC) &ccl_4,                                              1},
    {"ccl_8",                                              (DL_FUNC) &ccl_8,                                              1},
    {NULL, NULL, 0}
};

RcppExport void R_init_landscapemetrics(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
