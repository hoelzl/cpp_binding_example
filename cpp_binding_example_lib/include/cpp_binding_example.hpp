#pragma once
#ifndef CPP_BINDING_EXAMPLE_HPP
#define CPP_BINDING_EXAMPLE_HPP

extern "C" {
int add1_with_c_interface(int arg);
}

namespace bex {

void print_cpp_binding_example_info();

} // namespace bex


#endif // CPP_BINDING_EXAMPLE_HPP
