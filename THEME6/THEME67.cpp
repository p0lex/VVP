#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, p, k;
	cout << "Значение а=";
	cin >> a;

	p = a * a*a;
	k = p;
	p = p * p;
	k = k * p;
	p = p * k;

	cout << "Число " << a << " в степени 15 равно " << p;
}