#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, p;
	cout << "Значение а=";
	cin >> a;

	p = a * a;
	p = p * p;
	p = p * p;

	cout << "Число " << a << " в степени 8 равно " << p;
}