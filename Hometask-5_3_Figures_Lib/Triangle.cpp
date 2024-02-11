#include "Triangle.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
    name = "Треугольник";
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
}

int Triangle::get_a() { return a; }
int Triangle::get_b() { return b; }
int Triangle::get_c() { return c; }
int Triangle::get_A() { return A; }
int Triangle::get_B() { return B; }
int Triangle::get_C() { return C; }

void Triangle::print_info() {
    Figure::print_info();
    std::cout << "Стороны: " << std::endl;
    std::cout << "a=" << get_a() << "; " << "b=" << get_b() << "; " << "c=" << get_c() << std::endl;
    std::cout << "Углы: " << std::endl;
    std::cout << "A=" << get_A() << "; " << "B=" << get_B() << "; " << "C=" << get_C() << std::endl;
    std::cout << std::endl;
}