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
    return 0;
}