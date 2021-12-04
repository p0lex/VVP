#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	cout <<"Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B (коэффициент A не равен 0)." << "\n" << "Коэффициент А (А<>0):";
	cin >> a;
	cout << "Коэффициент В:";
	cin >> b;
	cout << "Решение уравнения:" << -b / a;
}