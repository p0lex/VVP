#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout <<"Дано трехзначное число. В нем зачеркнули первую слева цифру и приписали ее справа. Вывести полученное число." << "\n" << "Трехзначное число:";
	cin >> a;
	cout << "Новое число:"<<a%100<<a/100;
}