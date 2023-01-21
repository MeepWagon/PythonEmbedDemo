# Overview
Simple program I made using C++, CMake, and Python. Uses the python C library to embed python so I run a script in the "scripts" folder called "test.py".

# Building

Just type this in to build and run on linux! If you're using windows then I dont know.

```bash
cmake .
make && ./PythonEmbedDemo
```

I would like to include that im including "python3.10/Python.h" in my main.cpp. I dont know if that changes if you have a different version of python installed, but its something to keep in mind if you dont have python or have a different version installed
