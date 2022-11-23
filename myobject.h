
#pragma once



#ifdef _WIN32
  #define MYOBJECT_EXPORT __declspec(dllexport)
#else
  #define MYOBJECT_EXPORT
#endif
MYOBJECT_EXPORT int myobject();