#include <ffi_util.h>
#include "ffi_util_config.h"

FFI_UTIL_EXPORT void *
deref_ptr_get(void **ptr)
{
  return *ptr;
}

FFI_UTIL_EXPORT void
deref_ptr_set(void **ptr, void *value)
{
  *ptr = value;
}

FFI_UTIL_EXPORT const char *
deref_str_get(const char **ptr)
{
  return *ptr;
}

FFI_UTIL_EXPORT void
deref_str_set(const char **ptr, const char *value)
{
  *ptr = value;
}

FFI_UTIL_EXPORT int
deref_int_get(int *ptr)
{
  return *ptr;
}

FFI_UTIL_EXPORT void
deref_int_set(int *ptr, int value)
{
  *ptr = value;
}

FFI_UTIL_EXPORT unsigned int
deref_uint_get(unsigned int *ptr)
{
  return *ptr;
}

FFI_UTIL_EXPORT void
deref_uint_set(unsigned int *ptr, unsigned int value)
{
  *ptr = value;
}

FFI_UTIL_EXPORT short
deref_short_get(short *ptr)
{
  return *ptr;
}

FFI_UTIL_EXPORT void
deref_short_set(short *ptr, short value)
{
  *ptr = value;
}

FFI_UTIL_EXPORT unsigned short
deref_ushort_get(unsigned short *ptr)
{
  return *ptr;
}

FFI_UTIL_EXPORT void
deref_ushort_set(unsigned short *ptr, unsigned short value)
{
  *ptr = value;
}

FFI_UTIL_EXPORT long
deref_long_get(long *ptr)
{
  return *ptr;
}

FFI_UTIL_EXPORT void
deref_long_set(long *ptr, long value)
{
  *ptr = value;
}

FFI_UTIL_EXPORT unsigned long
deref_ulong_get(unsigned long *ptr)
{
  return *ptr;
}

FFI_UTIL_EXPORT void
deref_ulong_set(unsigned long *ptr, unsigned long value)
{
  *ptr = value;
}

FFI_UTIL_EXPORT char
deref_char_get(char *ptr)
{
  return *ptr;
}

FFI_UTIL_EXPORT void
deref_char_set(char *ptr, char value)
{
  *ptr = value;
}

FFI_UTIL_EXPORT unsigned char
deref_uchar_get(unsigned char *ptr)
{
  return *ptr;
}

FFI_UTIL_EXPORT void
deref_uchar_set(unsigned char *ptr, unsigned char value)
{
  *ptr = value;
}

FFI_UTIL_EXPORT float
deref_float_get(float *ptr)
{
  return *ptr;
}

FFI_UTIL_EXPORT void
deref_float_set(float *ptr, float value)
{
  *ptr = value;
}

FFI_UTIL_EXPORT double
deref_double_get(double *ptr)
{
  return *ptr;
}

FFI_UTIL_EXPORT void
deref_double_set(float *ptr, double value)
{
  *ptr = value;
}

FFI_UTIL_EXPORT int64_t
deref_int64_get(int64_t *ptr)
{
  return *ptr;
}

FFI_UTIL_EXPORT void
deref_int64_set(int64_t *ptr, int64_t value)
{
  *ptr = value;
}

FFI_UTIL_EXPORT uint64_t
deref_uint64_get(uint64_t *ptr)
{
  return *ptr;
}

FFI_UTIL_EXPORT void
deref_uint64_set(uint64_t *ptr, uint64_t value)
{
  *ptr = value;
}

