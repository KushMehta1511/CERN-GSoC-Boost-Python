# CERN-GSoC-Boost-Python

About Boost::python:
Boost::Python is a library which binds C++ and Python code. Using BoostPython you can directly implement python functions into your C++ program without the need to import Python.h header file. Heance, Boost is a wrapper for the Python/C API. Boost also allows you to write operations on Python objects in C++.


Usage of Boost in the project:
Boost::Python was used at several locations in CMSSW for its interactivity. CMSSW is mostly written in C++ with specific implementations done through python modules using boost.


Task Assigned:
The task assigned was to find a replacement for boost with some other module which could implement python with C++. The use of Boost in CMSSW is to be replaced by the alternative method found.


Solution:
Instead of a module of a particular programming language we could use a specific type of C/C++ compiler. Just like a normal compiler it should be able to annotate the C++ header files but with the additional feature that creates wrapper code in order to make the C/C++ libraries available to the scripting languages. 
One such compiler which cn perform such operation for various scripting languages including python is Simplified Wrapper and Interface Generator(SWIG). It is a compiler which integrates C/C++ code with languages like Python, Ruby, Java, etc. 