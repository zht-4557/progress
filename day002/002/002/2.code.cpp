#include <iostream>

using namespace std;
class A {
public:
	int mA;
public:
	A()
	{
		cout << "A的无参构造" << endl;
	}
	A(int a)
	{
		mA = a;
		cout << "A的有参构造" << endl;
	}
	~A()
	{
		cout << "A类的析构函数" << endl;
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
		cout << "B的无参构造" << endl;
	}
	~B()
	{
		cout << "B的析构构造" << endl;
	}
};
int main05int argc,char *argv[])
{
	B ob1;
	return 0;
}