#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a1, b1, a2, b2, c1, c2, d, x, y;
	cout << "Найти решение системы линейных уравнений вида A1·x + B1·y = C1; A2·x + B2·y = C2" << "\n" << "Коэффициент А1 : ";
	cin >> a1;
	cout << "Коэффициент B1:";
	cin >> b1;
	cout << "Коэффициент А2:";
	cin >> a2;
	cout << "Коэффициент B2:";
	cin >> b2;
	cout << "Коэффициент C1:";
	cin >> c1;
	cout << "Коэффициент C2:";
	cin >> c2;
	d = a1 * b2 - a2 * b1;
	x = (c1 * b2 - c2 * b1) / d;
	y = (a1 * c2 - a2 * c1) / d;
	if ((x == -0) and (y == -0))
	{
		cout << "Решение системы уравнений: x=" << -x << " y=" << -y;
	}
	else
	{
		if ((x == -0))
		{
			cout << "Решение системы уравнений: x=" << -x << " y=" << y;
		}
		else
		{
			if ((y == -0))
			{
				cout << "Решение системы уравнений: x=" << x << " y=" << -y;
			}
			else
			{
				cout << "Решение системы уравнений: x=" << x << " y=" << y;
			}
		}
	}
}