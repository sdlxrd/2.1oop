//source.cpp
/////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "Pay.h"

using namespace std;

Pay makePay(int x, int y)
{
    Pay p;
    if (!p.Init(x, y))
        cout << "wrong argument Init!" << endl;
    return p;
}

int main()
{

    Pay Read();
	Pay first(15, 3);
//	Pay second(15, 3);
	Pay in;
	Pay f;
	int n;
	in.Read(f);


	cout << first++ << endl;
	cout << first-- << endl;
	cout << ++first << endl;
	cout << --first << endl;
	
	in.summa();

	cin.get();
}