#include <iostream>

using namespace std;

class Cube
{
private:
	int mL;
	int mW;
	int mH;
public:
	void CubeInit(int l, int w, int h)
	{
		mL = l;
		mW = w;
		mH = h;
	}
	int getL(void)
	{
		return mL;
	}
	int getW(void)
	{
		return mW;
	}
	int getH(void)
	{
		return mH;
	}
	int getS(void)
	{
		return (mL * mW + mL * mH + mW * mH) * 2;
	}
	int getV(void)
	{
		return mL * mW * mH;
	}
};

bool cubeCompare(Cube& ob1, Cube& ob2)
{
	if (ob1.getH() == ob2.getH() && ob1.getL() == ob2.getL() && ob1.getW() == ob2.getW())
	{
		return true;
	}
	return false;
}
int main04(int argc, char* argv[]) {
	Cube ob1;
	ob1.CubeInit(10, 20, 30);
	cout << "面积：" << ob1.getS() << endl;
	cout << "体积：" << ob1.getV() << endl;

	Cube ob2;
	ob2.CubeInit(10, 20, 30);
	if (cubeCompare(ob1, ob2))
	{
		cout << "相等" << endl;
	}
	else {
		cout << "不相等" << endl;
	}
	return 0;
}