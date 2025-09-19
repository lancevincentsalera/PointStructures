#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;

    void move_x(int units) {
        x += units;
    }

    void move_y(int units) {
        y += units;
    }

    Point* midpoint(Point* other) {
        Point* mid = new Point;
        mid->x = (this->x + other->x) / 2;
        mid->y = (this->y + other->y) / 2;
        return mid;
    }

    void pass(Point* p) {
        p->x = 100;
    }

    double distance(Point other) {
        int dx = other.x - this->x;
        int dy = other.y - this->y;
        return sqrt(dx * dx + dy * dy);
    }

    void print() {
        cout << "(" << this->x << ", " << this->y << ")" << endl;
    }
};