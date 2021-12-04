#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Дано значение угла а в радианах (0 < а < 2 пи). Определить значение этого же угла в градусах, учитывая, что 180 град = пи радианов" << "\n" << "Значение угла в радианах:";
	int a;
	cin >> a;
	cout << "Значение угла в градусах:" << a*180;
}