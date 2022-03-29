#include "pybind11/pybind11.h"
#include "cpp_lib.hpp"

namespace py = pybind11;

// ReSharper disable once CppParameterMayBeConstPtrOrRef
PYBIND11_MODULE(_core, m)
{
    m.doc() = "C++ binding example using pybind11.";
    m.def("add1", &add1_with_c_interface, "Add 1 using a C interface.");
}