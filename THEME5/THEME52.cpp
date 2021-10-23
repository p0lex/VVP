#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c, lac, lbc, s;
	cout << "Координаты точек А, В, С:";
	cin >> a >> b >> c;
	lac = sqrtf(pow((a - c), 2));
	lbc= sqrtf(pow((b - c), 2));
	s = lac + lbc;
	cout << "Длина АC:" << lac <<"\n" << "Длина BC:" << lbc <<"\n" << "Сумма длин:" << s;
}