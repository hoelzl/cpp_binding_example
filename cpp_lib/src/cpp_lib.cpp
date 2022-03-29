#include "cpp_lib.hpp"

#include <iostream>

int add1_with_c_interface(int arg) { return arg + 1; }

namespace bex {

void print_cpp_binding_example_info()
{
    std::cout << "Project Info\n\n";
    std::cout << "  name:      cpp_binding_example\n";
    std::cout << "  namespace: bex\n";
}


} // namespace bex