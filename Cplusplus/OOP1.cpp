// 실행 예
//---- Menu ----
//1.계좌개설
//2.입금
//3.출금
//4.계좌정보 전체출력
//5.프로그램종료
//선택: 1
// 
//[계좌개설]
//계좌ID: 115
//이름: 이우석
//입금액: 15000

#include <iostream>
#include "OOP1.h"

using namespace std;
const int NAME_LEN = 20;

enum{CREATE=1, DEPOSIT, WITHDRAW, SHOWACCOUNT, EXIT};

typedef struct
{
	int accuntID;
	int balance;
	char custName[NAME_LEN];
}Account;
Account accArr[100];


void MainProcess()
{	
	int accNum = 0;

	while (true)
	{
		int menu_num;
		ShowMenu();
		InputMenu(&menu_num);

		switch (menu_num)
		{
		case CREATE:
			CreateAccount(&accNum);
			break;
		case DEPOSIT:
			DepositMoney(&accNum);
			break;
		case WITHDRAW:
			WithdrawMoney(&accNum);
			break;
		case SHOWACCOUNT:
			ShowAccount(&accNum);
			break;
		case EXIT:
			return;
			break;
		default:
			cout << "Invalid Input" << endl;
			break;
		}
	}
}

//메뉴 출력
void ShowMenu()
{
	cout << "---- Menu ----" << endl;
	cout << "1.계좌개설" << endl;
	cout << "2.입금" << endl;
	cout << "3.출금" << endl;
	cout << "4.계좌정보 전체출력" << endl;
	cout << "5.프로그램종료" << endl;
	cout << "선택: ";
}

void InputMenu(int* menu)
{
	cin >> *menu;
}

//계좌 생성
void CreateAccount(int* accNum)
{
	cout << "\n[계좌개설]" << endl;
	cout << "계좌ID: ";
	cin >> accArr[*accNum].accuntID;
	cout << "이름: ";
	cin >> accArr[*accNum].custName;
	cout << "입금액: ";
	cin >> accArr[*accNum].balance;
	cout << endl;

	*accNum += 1;
}

//입금
void DepositMoney(int* accNum)
{
	int accID;
	int inputMoney;
	int balance = 0;

	cout << "\n[입  금]" << endl;
	cout << "계좌ID: ";
	cin >> accID;
	cout << "입금액: ";
	cin >> inputMoney;

	for (int i = 0; i < *accNum; i++)
	{
		if (accArr[i].accuntID == accID)
		{
			accArr[i].balance += inputMoney;
			balance = accArr[i].balance;
		}
	}

	cout << "입금완료" << endl;
	cout << "잔액: " << balance << endl;
	cout << endl;
}


//출금
void WithdrawMoney(int* accNum)
{
	int accID;
	int inputMoney;
	int balance = 0;

	cout << "\n[출  금]" << endl;
	cout << "계좌ID: ";
	cin >> accID;
	cout << "입금액: ";
	cin >> inputMoney;

	for (int i = 0; i < *accNum; i++)
	{
		if (accArr[i].accuntID == accID)
		{
			accArr[i].balance -= inputMoney;
			balance = accArr[i].balance;
		}
	}

	cout << "출금완료" << endl;
	cout << "잔액: " << balance << endl;
	cout << endl;
}

//계좌출력
void ShowAccount(int* accNum)
{
	for (int i = 0; i < *accNum; i++)
	{
		cout << "\n계좌ID: " << accArr[i].accuntID << endl;
		cout << "이름: " << accArr[i].custName << endl;
		cout << "잔액: " << accArr[i].balance << endl;
		cout << endl;
	}
}