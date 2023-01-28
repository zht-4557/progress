#include <iostream>
#include <time.h>
using namespace std;

void test11()
{
	char ch = '\0';//'\0'为字符常量 ASCII 为0，0为整型常量，为0，'0'为字符常量，48
	cout << "请输入一个字符";
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