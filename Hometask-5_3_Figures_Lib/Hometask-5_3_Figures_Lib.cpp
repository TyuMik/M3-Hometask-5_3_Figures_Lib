#include <iostream>
#include <string>

#include "Figure.h"

#include "Triangle.h"
#include "Triangle_p.h"
#include "Triangle_rb.h"
#include "Triangle_rs.h"

#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Parallel_p.h"
#include "Romb.h"
#include "Square.h"


void printInfo(Figure* f) {
    f->print_info();
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Triangle t(10, 20, 30, 50, 60, 70);
    Triangle_p tp(10, 20, 30, 50, 60);
    Triangle_rb trb(10, 20, 50, 60);
    Triangle_rs trs(30);

    printInfo(&t);
    printInfo(&tp);
    printInfo(&trb);
    printInfo(&trs);

    Quadrangle q(10, 20, 30, 40, 50, 60, 70, 80);
    Parallelogram p(20, 30, 80, 100);
    Parallel_p pp(10, 20);
    Romb r(30, 30, 80);
    Square s(20);

    printInfo(&q);
    printInfo(&pp);
    printInfo(&s);
    printInfo(&p);
    printInfo(&r);

    return 0;
}