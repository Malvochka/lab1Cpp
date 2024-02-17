#include <iostream>
#include <cmath>
using namespace std;

double disc(double a, double b, double c)
{
	return b*b-4.0*a*c;
}

void answ(double a, double b, double d)
{
	double x1,x2;
	if(d<0.0)
	{
		cout<<"Действительных корней нет";
	}
	else 
		if (d==0)
		{
			x1=x2=-b/(2*a);
			cout<<"Уравнение имеет единственный корень\n"<<" x = "<<x1;
		}
	        else 
		{
			x1=(-b-sqrt(d))/(2*a);
			x2=(-b+sqrt(d))/(2*a);
			cout<<"Уравнение имеет два корня:\n"<<"x1 = " <<x1<<"\n x2 ="<<x2;

		}
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
        answ(a,b,d);
	return 0;

}﻿
