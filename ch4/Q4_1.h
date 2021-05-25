#pragma once

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money);
	int SaleApples(int money);
	void ShowSalesResult() const;

};


class FruitBuyer
{
private:
	int myMoney;
	int numOfApples;

public:
	void InitMembers(int money);
	void BuyApples(FruitSeller& seller, int money);
	void ShowBuyResult() const;
};

int Q4_1Main(void);