#include <iostream>
#include "point.h"
using namespace std;

int main() {
    Point* p1 = new Point;
    p1->x = 3;
    p1->y = 4;

    Point* p2 = new Point;
    p2->x = 5;
    p2->y = 6;

    Point* mid = p1->midpoint(p2);
    mid->print();

    // if you want to see object size
    // use sizeof() function
    // ex. sizeof(x) where x is a declared variable

    // if you want to see alignment size
    // use alignof() function
    // ex. alignof(int) where int is a data type
    return 0;
}