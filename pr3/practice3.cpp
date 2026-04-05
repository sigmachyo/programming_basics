#include<iostream>
#include<math.h>
using namespace std;
int main()
{

double a, b, c;
double x1, x2, d;
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
	x1 = ((-b + sqrt(d)) / 2 * a);
	x2 = ((-b - sqrt(d)) / 2 * a);
	cout << x1 << ' ' << x2;
}
else
{
	printf("Нет корней");
}


}