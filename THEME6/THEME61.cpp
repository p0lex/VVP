#include <iostream>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, obm;
	cout << "Значение переменных A и B:";
	cin >> a >> b;

	obm = a;
	a = b;
	b = obm;

	cout << "Теперь A=" << a <<"\n" << "Теперь B=" << b;
}