//source.cpp
/////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "Pay.h"

using namespace std;

int main()
{
	Pay first(15, 3);
	
	cout << "f(15, 3)++" << endl << first++ << endl;
	cout << "res = " << endl << first << endl;
	cout << "++f(15, 3)" << endl << ++first << endl;

	cout << "f(15, 3)--" << endl << first-- << endl;
	cout << "res = " << endl << first << endl;
	cout << "--f(15, 3)" << endl << --first << endl;
	cin.get();
	system("cls");


	Pay t;
	cout << "Enter arguments:" << endl;
	cin >> t;
	int n;
	cout << "n = "; cin >> n;
	cout << "summa = " << t.summa(n) << endl;

	cin.get();
}