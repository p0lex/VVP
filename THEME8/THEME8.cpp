#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a;
	cout <<"Дан размер файла в байтах. Найти количество полных килобайтов, которые занимает данный файл" << "\n" << "Размер файла в байтах:";
	cin >> a;
	if (a <= 1024)
	{
		cout<< "Размер файла в килобайтах:" << 1;
	}
	else
	{
		cout << "Размер файла в килобайтах:" << ceil(a / 1024);
	}
}