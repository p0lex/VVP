#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x1, x2, y1, y2, a, b, s, p;
	cout << "Координаты x1, y1, x2, y2:";
	cin >> x1>> y1>> x2>> y2;
	a = sqrt(pow((y1 - y2), 2));
	b = sqrt(pow((x1 - x2), 2));
	s = a * b;
	p = 2 * (a + b);
	cout << "Периметр:" << p << "Площадь:" << s;
}