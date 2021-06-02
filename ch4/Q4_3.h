#pragma once

namespace COMP_POS
{
	enum
	{
		CLERK,
		SENIOR,
		ASSIST,
		MANAGER
	};

	void ShowPositionInfo(int pos);
}

class NameCard
{
public:
	NameCard(const char* name, const char* companyName, const char* phoneNo, int postion);
	~NameCard();
	void ShowNameCardInfo();

private:
	char* mName;
	char* mCompanyName;
	char* mPhoneNo;
	int mPosition;

};

int Q4_3_Main(void);