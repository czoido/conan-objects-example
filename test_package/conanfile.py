from conans import ConanFile
from conan.tools.cmake import CMake
import os
class HelloConan(ConanFile):
    generators = "CMakeDeps", "CMakeToolchain"
    settings = "os", "compiler", "arch", "build_type"
    
    def test(self):
        path = "{}".format(self.settings.build_type) if self.settings.os == "Windows" else "."
        self.run("{}{}example".format(path, os.sep))
    
    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()
    