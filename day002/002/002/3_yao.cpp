#include <iostream>

using namespace std;

class TV;
class Remote
{
private:
	TV* p;
public:
	Remote(TV* p);
	void offOrOn(void);
	void upVolume(void);
	void downVolume(void);
	void upChannel(void);
	void downChannel(void);
	void showTv(void);
	void setChannel(int channel);
};
class TV
{
	enum{OFF,ON};
	enum{minvol,maxvol = 10};
	enum { minchan, maxchan = 25 };
private:
	int state;
	int volume;
	int channel;
public:
	TV()
	{
		state = OFF;
		volume = minvol;
		channel = minchan;
	}
	void offOrOn(void);
	void upVolume(void);
	void downVolume(void);
	void upChannel(void);
	void downChannel(void);
	void showTv(void);
};
int main(int argc, char* argv[])
{
	TV tv;
	tv.offOrOn();
	tv.upVolume();
	tv.upChannel();
	tv.showTv();
	return 0;
}

void TV::offOrOn()
{
	state = (state == OFF ? ON : OFF);
}
void TV::upVolume()
{
	if (volume == maxvol)
	{
		cout << "�����ѵ����" << endl;
		return;
	}
	volume++;
}

void TV::downVolume()
{
	if (volume == minvol)
	{
		cout << "�����ѵ���С" << endl;
		return;
	}
	volume--;
}

void TV::upChannel()
{
	if (channel == maxvol)
	{
		cout << "��Ƶ�ѵ����" << endl;
		return;
	}
	channel++;
}
void TV::downChannel()
{
	if (channel == minvol)
	{
		cout << "��Ƶ�ѵ���С" << endl;
		return;
	}
	channel--;
}

void TV::showTv()
{
	cout << "��ǰ���ӻ���״̬" << (state == OFF ? "��" : "��") << endl;
	cout << "��ǰ���ӻ�������" << volume << endl;
	cout << "��ǰ���ӻ���Ƶ��" << channel << endl;
}