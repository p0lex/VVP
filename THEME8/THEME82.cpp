#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a,b;
	cout <<"Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Найти количество отрезков B, размещенных на отрезке A." << "\n" << "Длина отрезка А:";
	cin >> a;
	cout << "Длина отрезка В:";
	cin >> b;
	cout << "Количество отрезков В:" << floor(a / b);
}