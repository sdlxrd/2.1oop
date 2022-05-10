//Pay.cpp
////////////////////////////////////////////////////////////////
#include "Pay.h"
#include <iostream>
#include <sstream>

using namespace std;

Pay::Pay()
{
    first = 0;
    second = 0;
}
Pay::Pay(double f = 0,int unsigned s = 0)
{
    this->first = f;
    this->second = s;
}
Pay::Pay(const Pay& f)
{
    first = f.first;
    second = f.second;
}
Pay::~Pay()
{}

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
    cout << "First = "; in >> f.first;
    cout << "Second = "; in >> f.second;
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
int Pay::summa(int n)
{
    return first / second * n;
};