#pragma once

#include <string>
#include <iostream>

enum SHAPE
{
    TRI = 3,
    REC,
    PARA,
    POLY,
    CIR,
    ELPS
};

class Shape
{
protected:
    std::string mName;
    SHAPE mType;
public:
    Shape(const std::string& Name, SHAPE type);
    std::string getName();
    SHAPE getType();
    virtual int periCal() = 0;
    virtual int areaCal() = 0;
    ~Shape();
};

class Tri : public Shape
{
    Tri();
    int periCal();
    int areaCal();
};

class Rec : public Shape
{
    Rec();
    int periCal();
    int areaCal();
};

class Para : public Shape
{
    Para();
    int periCal();
    int areaCAl();
};

class Poly : public Shape
{
    Poly();
    int periCal();
    int areaCal();
};

class Cir : public Shape
{
    Cir();
    int periCal();
    int areaCal();
};

class Elps : public Shape
{
    Elps();
    int periCal();
    int areaCal();
};

void defShape(std::ostream os, std::istream is);