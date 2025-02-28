#include "Segment.h"
#define _USE_MATH_DEFINES
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#include <cmath>

// Конструктор за замовчуванням
Segment::Segment() : x1(0), y1(0), x2(1), y2(1) {}

// Конструктор з параметрами
Segment::Segment(double _x1, double _y1, double _x2, double _y2)
    : x1(_x1), y1(_y1), x2(_x2), y2(_y2) {}

// Деструктор
Segment::~Segment() {}

// Метод обчислення довжини відрізка
double Segment::getLength() const {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Метод обчислення кута між віссю OX
double Segment::getAngleOX() const {
    return atan2(y2 - y1, x2 - x1) * 180 / M_PI;
}

// Метод виводу даних
void Segment::display() const {
    std::cout << "Відрізок: (" << x1 << ", " << y1 << ") -> (" << x2 << ", " << y2 << ")\n";
    std::cout << "Довжина: " << getLength() << "\n";
    std::cout << "Кут з віссю OX: " << getAngleOX() << " градусів\n";
}
