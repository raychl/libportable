#ifndef _SAFE_EX_H_
#  define _SAFE_EX_H_

#ifdef SAFE_EXTERN
/* do nothing: it's been defined by safe_ex.c */
#else
#  define SAFE_EXTERN extern
#endif

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

SAFE_EXTERN uintptr_t __stdcall getid_parental(uint32_t m_pid);
SAFE_EXTERN unsigned  __stdcall init_safed(void * pParam);
SAFE_EXTERN void      __stdcall safe_end(void);

#ifdef __cplusplus
}
#endif 

#endif   /* end _SAFE_EX_H_ */