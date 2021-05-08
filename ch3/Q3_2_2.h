#pragma once

int Q3_2_2Main(void);

class Printer
{
public:
	~Printer();
	Printer();
	Printer(const char* str);
	Printer(const Printer& str);
	void SetString(const char* str);
	void ShowString();

private:
	char* mString;
	size_t mSize;
};