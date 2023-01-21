#include <cstdio>
#include <iostream>
#include <python3.10/Python.h>

int main(int argc, char** argv) {
    setenv("PYTHONPATH","./scripts",1);
    Py_Initialize();

    PyObject *name = PyUnicode_FromString((char*)"test");
    PyObject *pmodule = PyImport_Import(name);

    if (!pmodule)
    {
        PyErr_Print();
        printf("ERROR in pModule\n");
        exit(1);
    }

    PyObject *pDict = PyModule_GetDict(pmodule);
    PyObject *func = PyDict_GetItemString(pDict, (char*)"example");

    if (!PyCallable_Check(func)) {
        PyErr_Print();
        printf("Error in function\n");
        exit(1);
    }

    PyObject *args = PyTuple_New(0);
    PyObject *resultfunc = PyObject_CallObject(func, args);
    
    std::cout << PyUnicode_AsUTF8(resultfunc) << std::endl;

    // Clean up
    Py_DECREF(pmodule);
    Py_DECREF(name);

    Py_Finalize();
    
    return 0;
}