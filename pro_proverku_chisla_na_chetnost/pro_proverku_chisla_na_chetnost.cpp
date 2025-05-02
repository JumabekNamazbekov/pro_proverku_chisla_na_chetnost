#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");


	int san;
	cout << "Введите число для проверки на чётность" << endl;
	cin >> san;

	if (san%2==0)
	{
		cout << "Число " << san << " чётное " << endl;
	}
	else
	{
		cout << "Число " << san << " не чётное " << endl;
	}
}