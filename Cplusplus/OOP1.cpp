// ���� ��
//---- Menu ----
//1.���°���
//2.�Ա�
//3.���
//4.�������� ��ü���
//5.���α׷�����
//����: 1
// 
//[���°���]
//����ID: 115
//�̸�: �̿켮
//�Աݾ�: 15000

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

//�޴� ���
void ShowMenu()
{
	cout << "---- Menu ----" << endl;
	cout << "1.���°���" << endl;
	cout << "2.�Ա�" << endl;
	cout << "3.���" << endl;
	cout << "4.�������� ��ü���" << endl;
	cout << "5.���α׷�����" << endl;
	cout << "����: ";
}

void InputMenu(int* menu)
{
	cin >> *menu;
}

//���� ����
void CreateAccount(int* accNum)
{
	cout << "\n[���°���]" << endl;
	cout << "����ID: ";
	cin >> accArr[*accNum].accuntID;
	cout << "�̸�: ";
	cin >> accArr[*accNum].custName;
	cout << "�Աݾ�: ";
	cin >> accArr[*accNum].balance;
	cout << endl;

	*accNum += 1;
}

//�Ա�
void DepositMoney(int* accNum)
{
	int accID;
	int inputMoney;
	int balance = 0;

	cout << "\n[��  ��]" << endl;
	cout << "����ID: ";
	cin >> accID;
	cout << "�Աݾ�: ";
	cin >> inputMoney;

	for (int i = 0; i < *accNum; i++)
	{
		if (accArr[i].accuntID == accID)
		{
			accArr[i].balance += inputMoney;
			balance = accArr[i].balance;
		}
	}

	cout << "�ԱݿϷ�" << endl;
	cout << "�ܾ�: " << balance << endl;
	cout << endl;
}


//���
void WithdrawMoney(int* accNum)
{
	int accID;
	int inputMoney;
	int balance = 0;

	cout << "\n[��  ��]" << endl;
	cout << "����ID: ";
	cin >> accID;
	cout << "�Աݾ�: ";
	cin >> inputMoney;

	for (int i = 0; i < *accNum; i++)
	{
		if (accArr[i].accuntID == accID)
		{
			accArr[i].balance -= inputMoney;
			balance = accArr[i].balance;
		}
	}

	cout << "��ݿϷ�" << endl;
	cout << "�ܾ�: " << balance << endl;
	cout << endl;
}

//�������
void ShowAccount(int* accNum)
{
	for (int i = 0; i < *accNum; i++)
	{
		cout << "\n����ID: " << accArr[i].accuntID << endl;
		cout << "�̸�: " << accArr[i].custName << endl;
		cout << "�ܾ�: " << accArr[i].balance << endl;
		cout << endl;
	}
}