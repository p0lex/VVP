#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x1, x2, y1, y2, r;
	cout << "Координаты x1, y1 и x2, y2:";
	cin >> x1 >> y1 >> x2 >> y2;
	r = sqrtf(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	cout << "Расстояние:"<<r;
}