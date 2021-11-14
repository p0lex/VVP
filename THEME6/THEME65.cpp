#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Функция y = 4*(x-3)^6-7*(x-3)^3+2  " << "\n" << "Значение х=";
	float x;
	cin >> x;
	cout << "Значение y=" << 4 * pow(x-3, 6) - 7 * (pow(x-3, 3))+2;
}
