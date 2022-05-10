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
    int unsigned getsecond() const { return second; }
    void setfirst(double first) { this->first = first; }
    void setsecond(unsigned int second) { this->second = second; }

    Pay& operator = (const Pay&);
    operator string() const;

    friend ostream& operator << (ostream&, const Pay&);
    friend istream& operator >> (istream&, Pay&);

    Pay& operator ++();
    Pay& operator --();
    Pay operator ++(int);
    Pay operator --(int);

    double summa(int n);

};