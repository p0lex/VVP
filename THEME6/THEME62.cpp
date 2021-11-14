#include <iostream>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c, obm;
	cout << "Значение переменных A, B и С:";
	cin >> a >> b >> c;

	obm = a;
	a = c;
	c = obm;

	obm = b;
	b = c;
	c = obm;

	cout << "Теперь A=" << a << "\n" << "Теперь B=" << b<<"\n" << "Теперь C=" << c;
}