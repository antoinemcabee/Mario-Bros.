/* Author: Stephanie Andrew
 * Assignment Title: Line Class
 * Assignment Description: implement a class called line that uses fields and methods
 * Date Created: 10/28/2018
 * Date modified: 10/28/2018
 * Due Date: 10/31/2018
 */

 // cmake-build-debug/Line.h cmake-build-debug/CMakeFiles/Line.cpp

#ifndef PROGRAM20_LINE_H
#define PROGRAM20_LINE_H

#include <ostream>
#include <iostream>
using namespace std;


struct Point{
    double x;
    double y;

    Point(double a = 0, double b = 0){
        x = a;
        y = b;
    }

    void display(ostream& out){
        out << "(" << x << "," << y << ")";
    }
};


class Line{
private:
    Point p1, p2;

public:
    Line();
    Line(Point, Point);

    void setFirstPoint(Point);
    void setSecondPoint(Point);

    Point getFirstPoint() const;
    Point getSecondPoint() const;

    bool slope(double& m) const;
    bool yIntercept(double& b) const;

    bool isParallel(Line) const;
    bool isCollinear(Line) const;
    bool isPerpendicular(Line) const;

    Point intersect(Line) const;

    void display(ostream&) const;
};

#endif //PROGRAM20_LINE_H
