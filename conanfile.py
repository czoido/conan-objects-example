from conans import ConanFile
from conan.tools.cmake import CMake
class HelloConan(ConanFile):
    name = 'myobject'
    version = '1.0'
    exports_sources = "*"
    generators = "CMakeDeps", "CMakeToolchain"
    settings = "os", "compiler", "arch", "build_type"
    
    def package(self):
        cmake = CMake(self)
        cmake.install()
    
    
    def package_info(self):
        self.cpp_info.objects = ['lib/myobject.o']
        
    
    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()
    