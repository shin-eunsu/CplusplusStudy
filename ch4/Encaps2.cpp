#include <iostream>

using namespace std;

class SinivelCap
{
public:
	void Take() const
	{
		cout << "call SinivelCap" << endl;
	}
};

class SneezeCap
{
public:
	void Take() const
	{
		cout << "call SneezeCap" << endl;
	}
};

class SnuffleCap
{
public:
	void Take() const
	{
		cout << "call SnuffleCap" << endl;
	}
};

class CONTAC600
{
private:
	SinivelCap sin;
	SneezeCap sne;
	SnuffleCap snu;

public:
	void Take() const
	{
		sin.Take();
		sne.Take();
		snu.Take();
	}
};

class ColdPatient
{
public:
	void TackCONTAC600(const CONTAC600& cap) const
	{
		cap.Take();
	}
};

int Encaps2_Main()
{
	CONTAC600 cap;
	ColdPatient Patient;
	Patient.TackCONTAC600(cap);

	return 0;
}