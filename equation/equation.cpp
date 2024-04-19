#include <iostream>
#include <cmath>
using namespace std;

//Чтение коэффициентов
void readcoeff(double&a,double&b,double&c)
{
	cout<<"\nВведите коэффициент a: "; cin>>a;
	if(a==0.0)
	{
		cout<<"Коэффициент а не может быть равным 0. Уравнение не является квадратным";
		return 1;
	}
	 cout<<"\nВведите коэффициент b: "; cin>>b;
	cout<<"\nВведите коэффициент c: "; cin>>c;
	
}
//дискриминант
double disc(double a, double b, double c)
{
	return b*b-4.0*a*c;
}

//печать
void printsol(double a,double b, double d)
{
         if(d<0.0)
	{
		cout<<"\nДействительных корней нет";
	}
	else 
		if (d==0)
		{
			double x=-b/(2*a);
			cout<<"\nУравнение имеет единственный корень\n"<<" x = "<<x;
		}
	        else 
		{
			double x1=(-b-sqrt(d))/(2*a);
			double x2=(-b+sqrt(d))/(2*a);
			cout<<"\nУравнение имеет два корня:\n"<<"x1 = " <<x1<<"\nx2 = "<<x2;

		}	
}

int main()
{
	double a, b, c;
	setlocale(LC_ALL, "Russian");
	cout << "Решение уравнения ax^2 + bx + c = 0\n";
	readcoeff(a,b,c);
	double d= disc(a,b,c);
        printsol(a,b,d);
	return 0;
}
