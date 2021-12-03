#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	cout <<"Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Найти длину незанятой части отрезка A." << "\n" << "Длина отрезка А:";
	cin >> a;
	cout << "Длина отрезка В:";
	cin >> b;
	cout << "Длина незанятой части отрезка А:" << a - floor(a / b) * b;
}