#include <iostream>
#include "Q4_1.h"

using namespace std;

void FruitSeller::InitMembers(int price, int num, int money)
{
	APPLE_PRICE = price;
	numOfApples = num;
	myMoney = money;
}

int FruitSeller::SaleApples(int money)
{
	int num = money / APPLE_PRICE;
	numOfApples -= num;
	myMoney += money;
	return num;
}

void FruitSeller::ShowSalesResult() const
{
	cout << "남은 사과: " << numOfApples << endl;
	cout << "판매 수익: " << myMoney << endl << endl;
}

void FruitBuyer::InitMembers(int money)
{
	myMoney = money;
	numOfApples = 0;
}

void FruitBuyer::BuyApples(FruitSeller& seller, int money)
{
	if (money > 0)
	{
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}
}

void FruitBuyer::ShowBuyResult() const
{
	cout << "현재 잔액: " << myMoney << endl;
	cout << "사과 개수: " << numOfApples << endl << endl;
}

int Q4_1Main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();

	return 0;
}