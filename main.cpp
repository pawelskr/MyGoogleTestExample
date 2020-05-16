#include <iostream>
#include "Example.hpp"

Example temp;

int main(int argc, const char** argv) {
    temp.SetX(5);    
    std::cout << "X = " << temp.GetX() << " X^2 = " << temp.square();
    return 0;
}