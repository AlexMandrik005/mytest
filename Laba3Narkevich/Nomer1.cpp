#include <iostream>

using namespace std;
// MandrykAliaksei2005
//Windows1251: 004D 0061 006E 0064 0072 0079 006B 0041 006C 0069 0061 006B 0073 0065 0069 0032 0030 0030 0035 
//UTF-8: 004D 0061 006E 0064 0072 0079 006B 0041 006C 0069 0061 006B 0073 0065 0069 0032 0030 0030 0035 
//UTF-16:   004D 0061 006E 0064 0072 0079 006B 0041 006C 0069 0061 006B 0073 0065 0069 0032 0030 0030 0035

// ����������������������2005
//Windows1251: 041C 0430 043D 0434 0440 0438 043A 0410 043B 0435 043A 0441 0435 0439 0418 0432 0430 043D 043E 0432 0438 0447 0032 0030 0030 0035
//UTF-8: D09C D0B0 D0BD D0B4 D180 D0B8 D0BA D090 D0BB D0B5 D0BA D181 D0B5 D0B9 BBBBBB D098 D0B2 D0B0 D0BD D0BE D0B2 D0B8 D187 0032 0030 0030 0035
//UTF-16: 041C 0430 043D 0434 0440 0438 043A 0410 043B 0435 043A 0441 0435 0439 0418 0432 0430 043D 043E 0432 0438 0447 0032 0030 0030 0035

//�������2005Aliaksei
//Windows1251: 041C 0430 043D 0434 0440 0438 043A 0032 0030 0030 0035 0041 006C 0069 0061 006B 0073 0065 0069
//UTF-8 D09C D0B0 D0BD D0B4 D180 D0B8 D0BA 0032 0030 0030 0035 0041 006C 0069 0061 0068 0073 0065 0069
//UTF-16 041C 0430 043D 0434 0440 0438 043A 0032 0030 0030 0035 0041 006C 0069 0061 006B 0073 0065 0069
int main()
{
	int number = 0x12345678;
	char hello[] = "Hello,";
	char lfie[] = "MandrykAliaksei2005";
	char rfie[] = "����������������������2005";
	char lr[] = "�������2005Aliaksei";
	wchar_t Lfie[] = L"MandrykAliaksei2005";
	wchar_t Rfie[] = L"����������������������2005";
	wchar_t LR[] = L"�������2005Aliaksei";
	cout << hello << lfie << endl;
	return 0;
}
