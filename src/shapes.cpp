#include "shapes.h"

#include <vector>
#include <iostream>
#include <fstream>
#include <cmath>
#include <sstream>

using namespace std;

Shape::Shape(const string& name, SHAPE type)
{
    mName = name;
    mType = type;
}

void defShape(ostream os, istream is)
{
    os << "What kind of geometric shapes do you want to calculate?\n";
    for (int i = 1; i <= 7; i++)
    {
        os << i << ": ";
        switch (i)
        {
            case 1:
                os << "Triangle";
                break;
            case 2:
                os << "Rectangular";
                break;
            case 3:
                os << "Parallelogram";
                break;
            case 4:
                os << "Polygon";
                break;
            case 5:
                os << "Circle";
                break;
            case 6:
                os << "Ellipse";
                break;
            case 7:
                os << "Sector";
                break;
        }
        os << '\n';
    }
}

/*--------------------- TRIANGLE -----------------------*/

Tri::Tri() : Shape("Triangle", TRI)
{
    // Nothing to write
}

int Tri::periCal()
{
    //waiting to write
    return 0;
}

int Tri::areaCal()
{
    //undone
    return 0;
}

/*--------------------- Rectangular -----------------------*/

Rec::Rec() : Shape("Rectangular", REC)
{
    // Nothing to write
}

int Rec::periCal()
{
    //waiting to write
    return 0;
}

int Rec::areaCal()
{
    //undone
    return 0;
}

/*--------------------- POLYGON -----------------------*/

Poly::Poly() : Shape("Polygon", POLY)
{
    // Nothing to write
}

int Poly::periCal()
{
    //waiting to write
    return 0;
}

int Poly::areaCal()
{
    //undone
    return 0;
}

/*--------------------- CIRCLE -----------------------*/

Cir::Cir() : Shape("Circle", CIR)
{
    // Nothing to write
}

int Cir::periCal()
{
    //waiting to write
    return 0;
}

int Cir::areaCal()
{
    //undone
    return 0;
}

/*--------------------- ELLIPSE -----------------------*/

Elps::Elps() : Shape("Ellipse", ELPS)
{
    // Nothing to write
}

int Elps::periCal()
{
    //waiting to write
    return 0;
}

int Elps::areaCal()
{
    //undone
    return 0;
}

std::string Shape::getName()
{
    return mName;
}

SHAPE Shape::getType()
{
    return mType;
}

