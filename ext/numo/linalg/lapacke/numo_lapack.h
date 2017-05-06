#define lapack_complex_float scomplex
#define lapack_complex_double dcomplex
#include "lapacke.h"
#include "lapacke_t.h"
#include "../numo_linalg.h"

typedef int blasint;

#define option_order numo_lapacke_option_order
extern char numo_lapacke_option_order(VALUE trans);

#define option_trans numo_lapacke_option_trans
extern char numo_lapacke_option_trans(VALUE trans);

#define option_uplo numo_lapacke_option_uplo
extern char numo_lapacke_option_uplo(VALUE uplo);

#define option_diag numo_lapacke_option_diag
extern char numo_lapacke_option_diag(VALUE diag);

#define option_side numo_lapacke_option_side
extern char numo_lapacke_option_side(VALUE side);

#define check_func numo_lapacke_check_func
extern void numo_lapacke_check_func(void **func, const char *name);

#define CHECK_ERROR(info)                                           \
    { if (*(info)<0) {                                              \
            rb_raise(eLapackError,"LAPACK error, info=%d",*(info)); \
        }}
