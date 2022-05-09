//Pay.h
////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
#pragma once

using namespace std;

class Pay
{
private:
    double first;
    int unsigned second;
public:
    Pay();
    Pay(double, int unsigned);
    Pay(const Pay&);
    ~Pay();

    double getfirst() const { return first; };
    int unsigned getsecond() const { return second; };
    void setfirst(double value);
    void setsecond(unsigned int value);

    bool Init(int x, int y);
    void Display(Pay f) const;
  
    int summa();

    Pay& operator = (const Pay&);
    operator string() const;

    friend ostream& operator << (ostream&, const Pay&);
    friend istream& operator >> (istream&, Pay&);

    Pay& operator ++();
    Pay& operator --();
    Pay operator ++(int);
    Pay operator --(int);

};