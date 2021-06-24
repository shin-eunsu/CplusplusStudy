#include <iostream>
#include <cstring>

using namespace std;

class Computer
{
private:
	char mOwner[50];

public:
	Computer(const char* name)
	{
		strcpy_s(mOwner, strlen(name) + 1, name);
	}

	void Calculate()
	{
		cout << "요청 내용을 계산합니다." << endl;
	}
};

class NotebookComp : public Computer
{
private:
	int mBattery;

public:
	NotebookComp(const char* name, int initChag)
		: Computer(name)
		, mBattery(initChag)
	{

	}

	void Charging()
	{
		mBattery += 5;
	}

	void UseBattery()
	{
		mBattery -= 1;
	}

	void MovingCal()
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "충전이 필요합니다." << endl;
			return;
		}

		cout << "이동하면서 ";
		Calculate();
		UseBattery();
	}

	int GetBatteryInfo()
	{
		return mBattery;
	}
};

class TableNotebook : public NotebookComp
{
private:
	char mRegstPenModel[50];

public:
	TableNotebook(const char* name, int initChag, const char* pen)
		: NotebookComp(name, initChag)
	{
		strcpy_s(mRegstPenModel, strlen(pen) + 1, pen);
	}

	void Write(const char* penInfo)
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "충전이 필요합니다." << endl;
			return;
		}

		if (strcmp(mRegstPenModel, penInfo) != 0)
		{
			cout << "등록된 펜이 아닙니다." << endl;
			return;
		}

		cout << "필기 내용을 처리합니다." << endl;
		UseBattery();
	}
};

int ISA_Main()
{
	NotebookComp nc("혜리", 5);
	TableNotebook tn("강한나", 5, "ISE-241-242");
	nc.MovingCal();
	tn.Write("ISE-241-242");

	return 0;
}