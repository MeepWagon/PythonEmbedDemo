# Overview
Simple program I made using C++, CMake, and Python. Uses the python C library to embed python which I run a script in the "scripts" folder called "test.py".

Future plans would probably be to turn this into a bigger project, maybe a game engine or something, and then use this project as boilerplate code.

# Building
Just type this in to build and run on linux! If you're using windows then I dont know.

```bash
cmake .
make && ./PythonEmbedDemo
```

Note: Python version is 3.10. Also, the python.h header included is placed in my includes, its not actually in the code.
