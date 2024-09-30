#include<string>
#include <iostream>
#include<windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a1, b1, c1, d1;
	int x1;
	string t1;
	/*
	cout << "Введите а1\n";
	cin >> a1;
	cout << "Введите b1\n";
	cin >> b1;
	cout << "Введите c1\n";
	cin >> c1;
	*/
	//cout << "Введите x1\n";
	//cin >> x1;
	//d1 = a1 > b1 ? a1 : b1;
	//d1 = d1 > c1 ? d1 : c1;
	//cout << "max = " << d1 << endl;
	//t1 = x1 >= 18 ? " совершенношлетие" : "несовершеннолетие";
	//cout<< t1 << endl;
	cout << "Введите 1 для квадрата\n 2 - для треугольника\n 3 - для ромба \n";
	cin >> x1;


	switch (x1)
	{
	case 1:
		cout << "Введите длину квадрата а1\n";
		cin >> a1;
		cout << "Введите ширину квадрата b1\n";
		cin >> b1;
		if (a1 == b1)
		{
			cout << "rdflhfn hfdyh =" << a1 * b1 << endl;
		}
		else
		{
			"у вас не квадрат\n";
		}
		break;
	case 2:
		cout << "введите длину основания треугольника\n";
		cin >> a1;
		cout << "введите длину высоты треугольника\n";
		cin >> b1;
		cout << " площадь квадрата =" << (a1 * b1) / 2 << endl;
	case 3:
		cout << "введите длину диалгонали\n";
		cin >> a1;
		cout << "введите длину диалгонали\n";
		cin >> b1;
		cout << " площадь ромба = " << (a1 * b1) / 2 << endl;
	default:
		cout << "error\n";
		break;

	}
}