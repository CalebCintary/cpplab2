# Programming lab 1
***
### Requirements
For compiling that project you have to have that compilers and software:
* [CMake](https://cmake.org/download/) (minimum 3.17), required, also require one of code generators:
    * Visual Studio
    * MinGW
    * Cygwin
    * etc

### Building the project
All scripts defined here must be executed in Windows Command Prompt, PowerShell, bash.

Default build (using CMake and GCC, linux approved method)
```shell
cmake  -S ./ -B ./build && cd build
make
./cpplab2
```
If you wanna use Windows compiler and Visual Studio, than first of all you need to select correct version of
your Visual Studio. CMake can work with that versions:
* Visual Studio 6
* Visual Studio 7
* Visual Studio 7 .NET 2003
* Visual Studio 8 2005
* Visual Studio 9 2008
* Visual Studio 10 2010
* Visual Studio 11 2012
* Visual Studio 12 2013
* Visual Studio 14 2015
* Visual Studio 15 2017
* Visual Studio 16 2019

With that generators, build will be next
```shell
cmake -S ./ -B ./build 
```
Also if you have installed different versions of C++ compilers, CMake can incorrectly select proper generator.
If that happens - remove created *build* directory and use that code (Visual Studio 2019 example):
```shell
cmake -G "Visual Studio 16 2019" -S ./ -B ./build
```

After that you can open *build* directory, where you can find Visual Studio autogenerated solution and csproject files.
All csproj files are already connected to solution. Open it in Visual Studio and compile.

Also you can use different Makefile generators, but that isn't checked:
* Borland Makefiles
* MSYS Makefiles
* MinGW Makefiles
* NMake Makefiles
* NMake Makefiles JOM
* Unix Makefiles
* Watcom WMake