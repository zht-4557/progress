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
		cout << "音量已到最大" << endl;
		return;
	}
	volume++;
}

void TV::downVolume()
{
	if (volume == minvol)
	{
		cout << "音量已到最小" << endl;
		return;
	}
	volume--;
}

void TV::upChannel()
{
	if (channel == maxvol)
	{
		cout << "音频已到最大" << endl;
		return;
	}
	channel++;
}
void TV::downChannel()
{
	if (channel == minvol)
	{
		cout << "音频已到最小" << endl;
		return;
	}
	channel--;
}

void TV::showTv()
{
	cout << "当前电视机的状态" << (state == OFF ? "关" : "开") << endl;
	cout << "当前电视机的音量" << volume << endl;
	cout << "当前电视机的频道" << channel << endl;
}