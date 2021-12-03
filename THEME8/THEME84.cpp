#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout <<"Дано двузначное число. Вывести число, полученное при перестановке цифр исходного числа." << "\n" << "Двузначное число:";
	cin >> a;
	cout << "Новое число:" <<a%10<<a/10;
}