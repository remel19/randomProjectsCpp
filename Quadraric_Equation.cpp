//============================================================================
// Name        : Quadraric_Equation.cpp
// Author      : Remel Kabir
// Copyright   : Email:remelkabir@gmail.com for Permission to use it
// Description : Quadraric_Equation solver
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c, root1, root2, num, underroot, imaginary;
	cout << "Enter the coefficient, Type a: ";
	cin >> a;
	cout << "Type b: ";
	cin >> b;
	cout << "Type c: ";
	cin>> c;
	if (a == 0)
	{
		cout << "a value can not be 0. \n";
		cout << "Restart now and try again." << endl;
		cin.get();
		return 0;
	}
	underroot = pow(b, 2) - (4 * a * c);
	root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	num = -b / (2 * a);
	imaginary = sqrt(underroot * -1) / (2 * a);
	if (underroot < 0)
	{
		if (num == 0) {
			cout << "X1 = " << imaginary << "i" << endl;
			cout << "X2 = " << imaginary << "i" << endl;
		}
		else{
		cout << "X1 = " << num << "+" << imaginary << "i" << endl;
		cout << "X2 = " << num << "-" << imaginary << "i" << endl;
		}
	}
	if (underroot >= 0)
	{
		if (root1 == root2){
			cout << "X = " << root1 << endl;
		}
		else{
			cout << "X1 = " << root1 << endl;
			cout << "X2 = " << root2 << endl;
		}
	}
	cin.get();
	return 0;
}
