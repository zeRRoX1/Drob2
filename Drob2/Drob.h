#pragma once
#include <iostream>

using namespace std;
class Drob
{
	int num1, num2;
public:
	Drob(int n1, int n2) {
		num1 = n1;
		num2 = n2;
	}
	Drob operator*(Drob d) {
		return Drob(num1 * d.num1, num2 * d.num2);
	}
	Drob operator+(Drob d) {
		if (num2 != d.num2)
			cout << "Error" << endl;
		else
			return Drob(num1 + d.num1, num2);
	}
	Drob operator-(Drob d){
		if (num2 != d.num2)
			cout << "Error" << endl;
		else
			return Drob(num1 - d.num1, num2);
	}
	Drob operator/(Drob d) {
		return Drob(num1 * d.num2, num2 * d.num1);
	}
};

