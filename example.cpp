#include <pybind11/embed.h>

int multiply(int i, int j) {
    return i * j;
}
int addition(int i , int j ) { 
   return i + j  ; 
   }

PYBIND11_MODULE(example, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring
    m.def("multiply", &multiply, "A function which multiplies two numbers");
    m.def("addition", &addition , "A fonction which addition two numers" );
}