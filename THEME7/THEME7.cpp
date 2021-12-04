#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Дано значение угла a в градусах (0 < a < 360). Определить значение этого же угла в радианах, учитывая, что 180 град = пи радианов."<<"\n"<< "Значение угла в градусах:";
	int a;
	cin >> a;
	cout << "Значение угла в радианах:" << a / 180;
}