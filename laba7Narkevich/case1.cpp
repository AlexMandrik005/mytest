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

		if (static_cast<int>(a) >= 65 && static_cast<int>(a) <= 90)
		{
			cout << "�������:" << ends;
			cout << static_cast<int>(tolower(a)) - (int)(a) << endl;
		}

		else
		{
			if ((int)a >= 97  &&  (int)a <= 122)
			{
				cout << "�������:" << ends;
				cout << static_cast<int>(a) -static_cast<int>(toupper(a)) << endl;
			}

			else
			{
				cout << "������!" << endl;
			}
		}
	}
	return 0;
}