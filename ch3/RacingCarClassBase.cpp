#include <iostream>
#include <cstring>
#include "RacingCarClassBase.h"

using namespace std;

void Car3::InitMembers(const char* ID, int fuel)
{
	strcpy_s(gameID, CAR_CONST::ID_LEN, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car3::ShowCarState()
{
	cout << "ID: " << gameID << endl;
	cout << "fuel: " << fuelGauge << "%" << endl;
	cout << "speed: " << curSpeed << "km/s" << endl << endl;
}

void Car3::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}

void Car3::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}

int RacingCarClassBaseMain(void)
{
	Car3 run99;
	run99.InitMembers("run99", 100);
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}