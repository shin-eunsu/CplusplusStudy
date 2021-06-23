#include <iostream>

using namespace std;

class PermanenWorker
{
private:
	char mName[100];
	int mSalary;

public:
	PermanenWorker(const char* name, int money)
		: mSalary(money)
	{
		strcpy_s(this->mName, strlen(name) + 1, name);
	}

	int GetPay() const
	{
		return mSalary;
	}

	void ShowSalaryInfo() const
	{
		cout << "name : " << mName << endl;
		cout << "salary : " << mSalary << endl;
	}
};


class EmployeeHandler
{
private:
	PermanenWorker* empList[50] {nullptr};
	int empNum;

public:
	EmployeeHandler()
		: empNum(0)
	{

	}

	void AddEmployee(PermanenWorker* emp)
	{
		empList[empNum++] = emp;
	}

	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
		{
			empList[i]->ShowSalaryInfo();
		}
	}

	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
		{
			sum += empList[i]->GetPay();
		}
		cout << "salary sum: " << sum << endl;
	}

	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
		{
			delete empList[i];
		}
	}
};

int EmployManager1_Main()
{
	EmployeeHandler handler;

	handler.AddEmployee(new PermanenWorker("KIM", 1000));
	handler.AddEmployee(new PermanenWorker("LEE", 1500));
	handler.AddEmployee(new PermanenWorker("JUN", 2000));

	handler.ShowAllSalaryInfo();

	handler.ShowTotalSalary();

	return 0;
}