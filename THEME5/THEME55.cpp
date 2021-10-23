#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x1, x2, x3, y1, y2, y3, a, b, c, s, p;
	cout << "Координаты x1, y1, x2, y2, x3, y3:";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	a = sqrtf(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	b = sqrtf(pow((x1 - x3), 2) + pow((y1 - y3), 2));
	c = sqrtf(pow((x2 - x3), 2) + pow((y2 - y3), 2));
	p = a + b + c;
	s = sqrtf(p / 2 * (p / 2 - a) * (p / 2 - b) * (p / 2 - c));
	
	cout << "Площадь:" << s << "\n" << "Периметр:" << p;

}
