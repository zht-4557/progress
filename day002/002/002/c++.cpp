#include <iostream>
#include <time.h>
using namespace std;

void test11()
{
	char ch = '\0';//'\0'Ϊ�ַ����� ASCII Ϊ0��0Ϊ���ͳ�����Ϊ0��'0'Ϊ�ַ�������48
	cout << "������һ���ַ�";
	cin >> ch;
	if (ch >='a' && ch < 'z')
	{
		ch = ch - ('a' - 'A');
	}
	else if(ch>'A'&&ch<'Z'){
		ch = ch + ('a' - 'A');
	}
	cout << "ch = "<< ch << endl;
}

void test02()
{
	srand(time(NULL));
	cout << rand() << endl;
}
int main02(int argc,int *argv[])
{
	test02();
	return 0;
}