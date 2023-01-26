# Overview
Simple program I made using C++, CMake, and Python. Uses the python C library to embed python which I run a script in the "scripts" folder called "test.py".

# Building
Just type this in to build and run on linux! If you're using windows then I dont know.

```bash
cmake .
make && ./PythonEmbedDemo
```

I would like to include that im including "python3.10/Python.h" in my main.cpp. This is probably specific to the version of python you're using, so you probably need to change that line of code if you're using a different version of python (Yes I understand using docker could get around this).
