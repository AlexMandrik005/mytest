#include <iostream>
#include <cctype>
#include <Windows.h>
int case1();
int case2();
int case3();

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int s = 0;
	cout << "������� �����" << ends;
	cout << " 1 - ������� ��� ���������� ��������." << endl;
	cout << " 2 - ������� ��� �������� ��������." << endl;
	cout << " 3 - ����� ���� �����." << endl;
	cout << " 4 - ����� �� ���������." << endl;
	cin >> s;
	switch (s)
	{
	case 1:
		case1();
		break;

	case 2:
		case2();
		break;

	case 3:
		case3();
		break;

	case(4):
		cout << "�� ����� �� ���������!";
		break;
	default:
		cout << "������. ������ �����������!";
		break;
	}
	return 0;
}
	// toupper �� � � �
	// tolower �� � � �
