#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, a, y;
	cout <<"Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет." << "\n" << "Вес конфет:";
	cin >> x;
	cout << "Стоимость:";
	cin >> a;
	cout << "Новый вес конфет:";
	cin >> y;
	cout << "Стоимость 1 кг:" << a / x << "\n" << "Стоимость " << y << " кг конфет:"<<a/x*y;
}