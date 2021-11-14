#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Функция y = 3x^6-6x^2-7 " << "\n" << "Значение х=";
	float x;
	cin >> x;
	cout << "Значение y=" << 3 * pow(x, 6) - 6 * (pow(x, 2)) - 7;
}
