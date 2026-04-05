#include <iostream>
#include <cmath>
using namespace std;

int main()
{	//4 задание
	/*
	setlocale(LC_ALL, "Russian");
	double A, B, C, D, x;
	cout << "ВВедите точку";
	cin >> x;
	cout << "Введите первый отрезок";
	cin >> A >> B;
	cout << "ВВедите второй отрезок";
	cin >> C >> D;
	if (A <= x && x <= D)
	{
	printf("x принадлежит");
	}
	else
	{
	printf("x  не принадлежит");
	}
	

	//5 задание
	setlocale(LC_ALL, "Russian");
	double a1, a2, b1, b2;
	cout << ("Введите первый отрезок");
	cin >>  a1 >> a2;
	cout << ("Введите второй отрезок");
	cin >> b1 >> b2;
	if (a1 == b1 && a2 == b2)
	{
		printf("A равно B");
	}
	if ((a1 >= b1 && a2 < b1) || (a1 > b1 && a2 <= b2))
	{
		printf("A внутри B");
	}
	if ((b1 >= a1 && b2 < a1) || (b1 > a1 && b2 <= a2))
	{
		printf("B внутри A");
	}
	if ((a1 < b1 && a2 >= b1 && b2 > a2) || (b1 < a1 && b2 >= a1 && a2 > b2))
	{
		printf("Другое пересечение");
	}
	if ((a1 < b1 && a2 < b1) || (b1 < a1 && b2 < a1))
	{
		printf("Нет пересечений");
	}
	*/
	//6 задание
	int a, b, c;
	double x1,x2,d;
	setlocale(LC_ALL, "Russian");
	cout << "Введите переменную a ";
	cin >> a;
	cout << "Введите переменную b ";
	cin >> b;
	cout << "Введите переменную c ";
	cin >> c;
	d = (pow(b, 2) - 4 * a * c);
	if (d >= 0)
	{
		x1 = ((- b + sqrt(d)) / 2 * a);
		x2 = (( - b - sqrt(d)) / 2 * a);
		cout << x1 << ' ' << x2;
	}
	else
	{
		printf("Нет корней");
	}




}




