#include <iostream>
#include <cctype>
#include <Windows.h>

int case2()
{
	using namespace std;
	SetConsoleCP(1251);

	char a, b;
	int h, i;

	cout << "������� ���������� ����������" << endl;
	cin >> h;

	for (i = 0;  i < h;  i++)
	{
		cout << "������� ������ ������� ��������" << endl;
		cin >> a;
		cout << "������� ������ �������� ��������" << endl;
		cin >> b;

		if ((b >= '�')  &&  (b <= '�')  ||  (a >= '�')  &&  (a <= '�'))
		{
			cout << dec << abs(static_cast<int>(b) - static_cast<int>(a)) << endl << endl;
		}

		else 
		{
			cout << "������" << endl;
		}
	}
	return 0;
}
