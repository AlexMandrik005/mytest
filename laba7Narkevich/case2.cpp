#include <iostream>
#include <cctype>
#include <Windows.h>

int case2()
{
	using namespace std;
	SetConsoleCP(1251);

	char a, b;
	int h, i;

	cout << "Введите количество повторений" << endl;
	cin >> h;

	for (i = 0;  i < h;  i++)
	{
		cout << "Введите символ нижнего регистра" << endl;
		cin >> a;
		cout << "Введите символ верхнего регистра" << endl;
		cin >> b;

		if ((b >= 'А')  &&  (b <= 'Я')  ||  (a >= 'а')  &&  (a <= 'я'))
		{
			cout << dec << abs(static_cast<int>(b) - static_cast<int>(a)) << endl << endl;
		}

		else 
		{
			cout << "Ошибка" << endl;
		}
	}
	return 0;
}
