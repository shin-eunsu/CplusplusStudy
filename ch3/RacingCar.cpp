#include <iostream>

using namespace std;

struct Car
{
	enum
	{
		ID_LEN = 20,
		MAX_SPD	= 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};

	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState(const Car& car)
	{
		cout << "ID: " << gamerID << endl;
		cout << "fuel: " << fuelGauge << "%" << endl;
		cout << "Speed: " << curSpeed << "km/s" << endl << endl;
	}

	void Accel(Car& car)
	{
		if (fuelGauge <= 0)
			return;
		else
			fuelGauge -= FUEL_STEP;

		if (curSpeed + ACC_STEP >= MAX_SPD)
		{
			curSpeed = MAX_SPD;
			return;
		}

		curSpeed += ACC_STEP;
	}

	void Break(Car& car)
	{
		if (curSpeed < BRK_STEP)
		{
			curSpeed = 0;
			return;
		}

		curSpeed -= BRK_STEP;
	}
};


int RacingCarMain(void)
{
	Car run99 = {"run99", 100, 0 };
	run99.Accel(run99);
	run99.Accel(run99);
	run99.ShowCarState(run99);
	run99.Break(run99);
	run99.ShowCarState(run99);

	Car sped77 = {"sped77", 100, 0 };
	sped77.Accel(sped77);
	sped77.Break(sped77);
	sped77.ShowCarState(sped77);
	return 0;
}