#include <iostream>
#include <cctype>
#include <Windows.h>

int case3()
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

		if ((int)a > 48  &&  (int)a < 57)
		{
			cout << "��� �����:" << ends;
			cout << static_cast<int>(a) << endl << endl;
		}

		else
		{
			cout << "������!" << endl;
		}
	}
	return 0;
}