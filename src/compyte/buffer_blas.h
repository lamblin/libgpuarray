#ifndef COMPYTE_BUFFER_BLAS_H
#define COMPYTE_BUFFER_BLAS_H

#include <compyte/buffer.h>
#include <compyte/config.h>

typedef enum _cb_order {
  cb_row,
  cb_column
} cb_order;

#define cb_c cb_row
#define cb_fortran cb_column

typedef enum _cb_side {
  cb_left,
  cb_right
} cb_side;

typedef enum _cb_transpose {
  cb_no_trans,
  cb_trans,
  cb_conj_trans
} cb_transpose;

typedef enum _cb_uplo {
  cb_upper,
  cb_lower
} cb_uplo;

typedef struct _compyte_blas_ops {
  int (*setup)(void *ctx);
  void (*teardown)(void *ctx);
  int (*sgemv)(const cb_order order,
               const cb_transpose transA,
               const size_t M,
               const size_t N,
               const float alpha,
               gpudata *A,
               const size_t offA, 
               const size_t lda,
               gpudata *X,
               const size_t offX,
               const int incX,
               const float beta,
               gpudata *Y,
               const size_t offY,
               const int incY);
} compyte_blas_ops;

#endif
