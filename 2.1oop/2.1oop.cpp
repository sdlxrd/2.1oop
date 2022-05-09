//source.cpp
/////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "Pay.h"

using namespace std;

int main()
{
	Pay first(15, 3);
	Pay in;

	cout << endl;
	cout << first++ << endl;
	cout << first-- << endl;
	cout << ++first << endl;
	cout << --first << endl;
	
	in.summa();

	cin.get();
}