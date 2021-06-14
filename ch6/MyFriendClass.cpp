#include <iostream>
#include <cstring>
using namespace std;

class Girl;

class Boy
{
private:
	int height;
	friend class Girl;

public:
	Boy(int len)
		: height(len)
	{
	}

	void ShowYourFriendInfo(Girl& frn);
};

class Girl
{
private:
	char phNum[20];

public:
	Girl(const char* num)
	{
		size_t len = strlen(num) + 1;
		strcpy_s(phNum, len, num);
	}
	
	void ShowYourFriendInfo(Boy& frn);
	friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl& frn)
{
	cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn)
{
	cout << "His Height: " << frn.height << endl;
}


int MyFriendClass_Main()
{
	Boy boy(179);
	Girl girl("010-1234-5678");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);

	return 0;
}