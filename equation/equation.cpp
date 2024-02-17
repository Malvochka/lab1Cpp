#include <iostream>
#include <cmath>
using namespace std;

double disc(double a, double b, double c)
{
	return b*b-4.0*a*c;
}

int main()
{
	double a, b, c;
	setlocale(LC_ALL, "Russian");
	cout << "Решение уравнения ax^2 + bx + c = 0\n";
        cout<<" Введите коэффициент a: \n"; cin>>a;
        cout<<" Введите коэффициент b: \n"; cin>>b;
	cout<<" Введите коэффициент c: \n"; cin>>c;
	double d= disc(a,b,c);


}﻿
