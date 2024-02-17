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
		cout<<"\nДействительных корней нет";
	}
	else 
		if (d==0)
		{
			x1=x2=-b/(2*a);
			cout<<"\nУравнение имеет единственный корень\n"<<" x = "<<x1;
		}
	        else 
		{
			x1=(-b-sqrt(d))/(2*a);
			x2=(-b+sqrt(d))/(2*a);
			cout<<"\nУравнение имеет два корня:\n"<<"x1 = " <<x1<<"\nx2 = "<<x2;

		}
}

int main()
{
	double a, b, c;
	setlocale(LC_ALL, "Russian");
	cout << "Решение уравнения ax^2 + bx + c = 0\n";
        cout<<"\nВведите коэффициент a: "; cin>>a;
	if(a==0.0)
	{
		cout<<"Коэффициент а не может быть равным 0. Уравнение не является квадратным";
		return 1;
	}
        cout<<"\nВведите коэффициент b: "; cin>>b;
	cout<<"\nВведите коэффициент c: "; cin>>c;
	double d= disc(a,b,c);
        answ(a,b,d);
	return 0;
}
