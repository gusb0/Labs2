#ifndef SEGMENT_H
#define SEGMENT_H

#include <iostream>
#include <cmath>

class Segment {
private:
    double x1, y1, x2, y2;

public:
    // Конструктори
    Segment();
    Segment(double _x1, double _y1, double _x2, double _y2);
    
    // Деструктор
    ~Segment();

    // Методи
    double getLength() const;
    double getAngleOX() const;
    void display() const;
};

#endif
