//Pay.cpp
////////////////////////////////////////////////////////////////
#include "Pay.h"
#include <iostream>
#include <sstream>

using namespace std;

Pay::Pay()
{
    first = 15;
    second = 3;
}
Pay::Pay(double f = 15, int unsigned s = 3)
{
    first = f;
    second = s;
}
Pay::Pay(const Pay& f)
{
    first = f.first;
    second = f.second;
}
Pay::~Pay()
{}

void Pay::setfirst(double value)
{
    first = value;
}

void Pay::setsecond(unsigned int value)
{
    second = value;
}

bool Pay::Init(int x, int y)
{
    if (x >= 0 && y >= 0)
    {
        first = x;
        second = y;
        return true;
    }
    else {
        return false;
    }
}

void Pay::Display(Pay f) const
{
    cout << string(f) << endl;
}

Pay Pay::Read(Pay f)
{
    int x, y;
    cout << "first =  ";
    cin >> x;

        cout << "second = ";
        cin >> y;
 f.Init(x, y);
 return f;
}

Pay& Pay::operator = (const Pay& f)
{
    first = f.first;
    second = f.second;

    return *this;
}
Pay::operator string () const
{
    stringstream s;
    s << "first = " << first << endl;
    s << "second = " << second << endl;

    return s.str();
}

ostream& operator << (ostream& out, const Pay& f)
{
    out << string(f);
    return out;
}

istream& operator >> (istream& in, Pay& f)
{
    cout << " First = "; in >> f.first;
    cout << "Second = "; in >> f.second;
    cout << endl;
    return in;
}

Pay& Pay::operator ++()
{
    first++;
    return *this;
}

Pay& Pay::operator --()
{
    first--;
    return *this;
}

Pay Pay::operator ++(int)
{
    Pay t(*this);
    second++;
    return t;
}

Pay Pay::operator --(int)
{
    Pay t(*this);
    second--;
    return t;
}
int Pay::summa()
{
    int n;
    cout << "n = ";cin >> n;
    double summa = first / second * n;
    cout << endl << "result = " << summa << endl;
    return summa;
};