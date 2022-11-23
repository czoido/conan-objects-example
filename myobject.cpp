

#include "myobject.h"


#include <iostream>



int myobject(){
    #ifdef NDEBUG
    std::cout << "myobject: Release!\n";
    #else
    std::cout << "myobject: Debug!\n";
    #endif

    // ARCHITECTURES
    #ifdef _M_X64
    std::cout << "  myobject _M_X64 defined\n";
    #endif

    #ifdef _M_IX86
    std::cout << "  myobject _M_IX86 defined\n";
    #endif

    #ifdef _M_ARM64
    std::cout << "   myobject _M_ARM64 defined\n";
    #endif

    #if __i386__
    std::cout << "  myobject __i386__ defined\n";
    #endif

    #if __x86_64__
    std::cout << "  myobject __x86_64__ defined\n";
    #endif

    #if __aarch64__
    std::cout << "  myobject __aarch64__ defined\n";
    #endif

    // Libstdc++
    #if defined _GLIBCXX_USE_CXX11_ABI
    std::cout << "  myobject _GLIBCXX_USE_CXX11_ABI "<< _GLIBCXX_USE_CXX11_ABI << "\n";
    #endif

    // COMPILER VERSIONS
    #if _MSC_VER
    std::cout << "  myobject _MSC_VER" << _MSC_VER<< "\n";
    #endif

    #if _MSVC_LANG
    std::cout << "  myobject _MSVC_LANG" << _MSVC_LANG<< "\n";
    #endif

    #if __cplusplus
    std::cout << "  myobject __cplusplus" << __cplusplus<< "\n";
    #endif

    #if __INTEL_COMPILER
    std::cout << "  myobject __INTEL_COMPILER" << __INTEL_COMPILER<< "\n";
    #endif

    #if __GNUC__
    std::cout << "  myobject __GNUC__" << __GNUC__<< "\n";
    #endif

    #if __GNUC_MINOR__
    std::cout << "  myobject __GNUC_MINOR__" << __GNUC_MINOR__<< "\n";
    #endif

    #if __clang_major__
    std::cout << "  myobject __clang_major__" << __clang_major__<< "\n";
    #endif

    #if __clang_minor__
    std::cout << "  myobject __clang_minor__" << __clang_minor__<< "\n";
    #endif

    #if __apple_build_version__
    std::cout << "  myobject __apple_build_version__" << __apple_build_version__<< "\n";
    #endif

    // SUBSYSTEMS

    #if __MSYS__
    std::cout << "  myobject __MSYS__" << __MSYS__<< "\n";
    #endif

    #if __MINGW32__
    std::cout << "  myobject __MINGW32__" << __MINGW32__<< "\n";
    #endif

    #if __MINGW64__
    std::cout << "  myobject __MINGW64__" << __MINGW64__<< "\n";
    #endif

    #if __CYGWIN__
    std::cout << "  myobject __CYGWIN__" << __CYGWIN__<< "\n";
    #endif

    

    
    return 0;
}