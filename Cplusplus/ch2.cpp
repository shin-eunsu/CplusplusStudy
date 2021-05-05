#include <iostream>
#include "ch2.h"

using namespace std;

namespace ch2
{
	//02-3 Reference
	int Referen()
	{
		int num1 = 1020;
		int& num2 = num1;

		num2 = 3047;

		cout << "VAL: " << num1 << endl;
		cout << "REF: " << num2 << endl;

		cout << "VAL: " << &num1 << endl;
		cout << "REF: " << &num2 << endl;

		return 0;
	}

	int RefArrElem()
	{
		int arr[3] = { 1, 3, 5 };
		int& ref1 = arr[0];
		int& ref2 = arr[1];
		int& ref3 = arr[2];

		cout << ref1 << endl;
		cout << ref2 << endl;
		cout << ref3 << endl;

		return 0;
	}

	int RefPrt()
	{
		int num = 12;
		int* ptr = &num;
		int** dptr = &ptr;

		int& ref = num;
		int* (&pref) = ptr;
		int** (&dpref) = dptr;

		cout << ref << endl;
		cout << *pref << endl;
		cout << **dpref << endl;

		return 0;
	}

	void SwapByRef2(int& ref1, int& ref2)
	{
		int temp = ref1;
		ref1 = ref2;
		ref2 = temp;
	}  

	void RefSwap()
	{
		int val1 = 10;
		int val2 = 20;

		SwapByRef2(val1, val2);
		cout << "val1: " << val1 << endl;
		cout << "val2: " << val2 << endl;
	}


	int& RefRetFuncOne(int& ref)
	{
		ref++;
		return ref;
	}

	int RefRetFuncTwo(int& ref)
	{
		ref++;
		return ref;
	}

	int RefReturnOne()
	{
		int num1 = 1;
		int& num2 = RefRetFuncOne(num1);

		num1++;
		num2++;
		cout << "num1: " << num1 << endl;
		cout << "num2: " << num2 << endl;

		return 0;
	}

	int RefReturnThree()
	{
		int num1 = 1;
		int num2 = RefRetFuncTwo(num1);

		num1++;
		num2 += 100;
		cout << "num1: " << num1 << endl;
		cout << "num2: " << num2 << endl;

		return 0;
	}


	//malloc & free 대체
	//new & delete
	char* MakeStrAdr(int len)
	{
		//char* str = (char*)malloc(sizeof(char) * len);
		char* str = new char[len];
		return str;
	}

	int MemMalFree()
	{
		char* str = MakeStrAdr(20);
		strcpy_s(str, 20, "I am so happy~");
		cout << str << endl;
		free(str);
		return 0;
	}

	int NewDelete()
	{
		char* str = MakeStrAdr(20);
		strcpy_s(str, 20, "I am so happy~");
		cout << str << endl;
		delete[]str;
		return 0;
	}

	
	class Simple
	{
	public:
		Simple()
		{
			cout << "I'm simple constructor!" << endl;
		}
	};

	int NewObject()
	{
		cout << "case 1: ";
		Simple* sp1 = new Simple;

		cout << "case 2: ";
		Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);

		cout << endl << "end of main" << endl;
		delete sp1;
		free(sp2);
		return 0;
	}


	//C++에서 C언어의 표준함수 호출하기
#include <cmath>
#include <cstdio>
#include <cstring>

	int StdCPPFunc()
	{
		char str1[] = "result";
		char str2[30];

		strcpy_s(str2, 30, str1);
		printf("%s: %f \n", str1, sin(0.14));
		printf("%s: %f \n", str2, abs(-1.25));

		return 0;
	}
}