#pragma once

#include "Platform/System.h"

#if HELIUM_SHARED
# ifdef HELIUM_FOUNDATION_EXPORTS
#  define HELIUM_FOUNDATION_API HELIUM_API_EXPORT
# else
#  define HELIUM_FOUNDATION_API HELIUM_API_IMPORT
# endif
#else
# define HELIUM_FOUNDATION_API
#endif

#define HELIUM_FOUNDATION_PROFILE 0

#if HELIUM_PROFILE_INSTRUMENT_ALL || HELIUM_FOUNDATION_PROFILE
# define HELIUM_FOUNDATION_FUNCTION_TIMER() HELIUM_PROFILE_FUNCTION_TIMER()
#else
# define HELIUM_FOUNDATION_FUNCTION_TIMER()
#endif

#if HELIUM_PROFILE_INSTRUMENT_ALL || HELIUM_FOUNDATION_PROFILE
# define HELIUM_FOUNDATION_SCOPE_TIMER(__Str) HELIUM_PROFILE_SCOPE_TIMER(__Str)
#else
# define HELIUM_FOUNDATION_SCOPE_TIMER(__Str)
#endif
