#pragma once

#include <vector>

enum SHAPE
{
    TRI = 3,
    SQR,
    PEN,
    HEX,
    HEP,
    OCT,
    POLY
};

class Shape
{
protected:
    std::string shapeName;
    SHAPE shapeType;
public:
    Shape(const std::string& Name, SHAPE type);
    std::string getName();
    SHAPE getShape();
    virtual int periCal(SHAPE type) = 0;
    virtual int areaCal(SHAPE type) = 0;
};

class Tri : public Shape
{
    Tri();
    int periCal(SHAPE type);
    int areaCal(SHAPE type);
};

class Sqr : public Shape
{
    Sqr();
    int periCal(SHAPE type);
    int areaCal(SHAPE type);
};

class Pen : public Shape
{
    Pen();
    int periCal(SHAPE type);
    int areaCal(SHAPE type);
};

class Hex : public Shape
{
    Hex();
    int periCal(SHAPE type);
    int areaCal(SHAPE type);
};

class Hep : public Shape
{
    Hep();
    int periCal(SHAPE type);
    int areaCal(SHAPE type);
};

class Oct : public Shape
{
    Oct();
    int periCal(SHAPE type);
    int areaCal(SHAPE type);
};

class Poly : public Shape
{
    Poly();
    int periCal(SHAPE type);
    int areaCal(SHAPE type);
};