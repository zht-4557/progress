#include <iostream>

using namespace std;
class A {
public:
	int mA;
public:
	A()
	{
		cout << "A���޲ι���" << endl;
	}
	A(int a)
	{
		mA = a;
		cout << "A���вι���" << endl;
	}
	~A()
	{
		cout << "A�����������" << endl;
	}
};
class B
{
public:
	int mB;
	A ob;
public:
	B()
	{
		cout << "B���޲ι���" << endl;
	}
	~B()
	{
		cout << "B����������" << endl;
	}
};
int main05int argc,char *argv[])
{
	B ob1;
	return 0;
}