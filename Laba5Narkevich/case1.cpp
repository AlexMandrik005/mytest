#include <iostream>
#include <cctype>
#include <Windows.h>

int case1()
{
	using namespace std;
	char a;
	int h, i;
	cout << "������� ���������� ����������" << endl;
	cin >> h;
	for (i = 0; i < h; i++)
	{
		cout << "������� ������" << endl;
		cin >> a;
		if ((int)a >= 65 && (int)a <= 90)
		{
			cout << "�������:" << ends;
			cout << (int)tolower(a) - (int)(a) << endl;
		}
		else
		{
			if ((int)a >= 97 && (int)a <= 122)
			{
				cout << "�������:" << ends;
				cout << (int)(a)-(int)toupper(a) << endl;
			}
			else
			{
				cout << "������!" << endl;
			}
		}
	}
	return 0;
}