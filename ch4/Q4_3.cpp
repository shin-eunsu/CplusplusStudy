#include <iostream>
#include "Q4_3.h"

using namespace std;

NameCard::NameCard(const char* name, const char* companyName, const char* phoneNo, int postion)
	: mPosition(postion)
{
	mName = new char[strlen(name) + 1];
	strcpy_s(mName, strlen(name) + 1, name);

	mCompanyName = new char[strlen(companyName) + 1];
	strcpy_s(mCompanyName, strlen(companyName) + 1, companyName);

	mPhoneNo = new char[strlen(phoneNo) + 1];
	strcpy_s(mPhoneNo, strlen(phoneNo) + 1, phoneNo);
}

NameCard::~NameCard()
{
	delete[] mName;
	delete[] mCompanyName;
	delete[] mPhoneNo;
}

void NameCard::ShowNameCardInfo()
{
	cout << "이름: " << mName << endl;
	cout << "회사: " << mCompanyName << endl;
	cout << "전화번호: " << mPhoneNo << endl;
	cout << "직급: ";
	COMP_POS::ShowPositionInfo(mPosition);
	cout << endl;
}

void COMP_POS::ShowPositionInfo(int pos)
{
	switch (pos)
	{
	case CLERK:
		cout << "사원" << endl;
		break;
	case SENIOR:
		cout << "주임" << endl;
		break;
	case ASSIST:
		cout << "대리" << endl;
		break;
	case MANAGER:
		cout << "과장" << endl;
		break;
	}
}


int Q4_3_Main(void)
{
	NameCard man1("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard man2("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard man3("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);

	man1.ShowNameCardInfo();
	man2.ShowNameCardInfo();
	man3.ShowNameCardInfo();

	return 0;
}