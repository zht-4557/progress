#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	int num;
	string name;
	float score;
public:
	Person(){}
	Person(int num,string name,float score)
		:num(num),
		name(name),
		score(score)
	{}

};
void operator<<(ostream &out,Person ob)
{

}
int main(int argc,char *argv[])
{
	Person lucy(100, "lucy", 99.8f);
	cout << lucy;
	return 0;
}