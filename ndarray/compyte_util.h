#ifndef COMPYTE_UTIL
#define COMPYTE_UTIL

#ifdef __cplusplus
extern "C" {
#endif
#ifdef CONFUSE_EMACS
}
#endif

#include <sys/types.h>

#include "compyte_types.h"

compyte_type *compyte_get_type(int typecode);
size_t compyte_get_elsize(int typecode);

int compyte_elem_perdim(char *strs[], unsigned int *count, unsigned int nd, 
			const size_t *dims, const ssize_t *str,
			const char *id);

#ifdef __cplusplus
}
#endif

#endif /* COMPYTE_UTIL */