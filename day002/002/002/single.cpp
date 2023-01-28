#include <iostream>

using namespace std;
class SingleTon
{
private:
	SingleTon(){}
	SingleTon(const SingleTon& ob){}
	~SingleTon(){}
private:
	static SingleTon* const p;
	int num;
public:
	static SingleTon* getSingleTon(void)
	{
		return p;
	}
	void printString(char* str)
	{
		cout << "打印：" << str << endl;
	}
};
SingleTon* const SingleTon::p = new SingleTon;

int main06()
{
	//获取单例的地址
	SingleTon* p1 = SingleTon::getSingleTon();
	return 0;
}