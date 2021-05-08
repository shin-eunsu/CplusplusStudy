#include <iostream>

using namespace std;


// 01-1 문제1
// 
// 사용자로부터 총 5개의 정수를 입력 받아서, 그 합을 출력하는 프로그램을 작성해 보자.
// 프로그램 실행 예제
// 1번째 정수 입력 : 1
// 2번째 정수 입력 : 2
// 3번째 정수 입력 : 3
// 4번째 정수 입력 : 4
// 5번째 정수 입력 : 5
// 합계 : 15
int Q01_1_1()
{
	int val[5];
	int result = 0;

	for (int i = 0; i < sizeof(val) / sizeof(int); i++)
	{
		cout << i + 1 << "번째 정수 입력 : ";
		cin >> val[i];
		result += val[i];
	}
	cout << "합계 : " << result << endl;

	return 0;
}

// 01-1 문제2
// 
// 프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서, 
// 입력 받은 데이터를 그대로 출력하는 프로그램을 작성해 보자.
int Q01_1_2()
{
	char name[100];
	char phone[20];

	cout << "이름 입력: ";
	cin >> name;
	cout << name << endl;

	cout << "전화번호 입력: ";
	cin >> phone;
	cout << phone << endl;

	return 0;
}

// 01-1 문제3
//
// 숫자를 하나 입력 받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성해 보자.

int Q01_1_3()
{
	int val = 0;

	cout << "단수 입력: ";
	cin >> val;

	for (int i = 1; i < 10; i++)
	{
		cout << val << " * " << i << " = " << val * i << endl;
	}

	return 0;
}

// 01-1 문제4
//
// 판매원들의 급여 계산 프로그램을 작성해 보자.
// 이 회사는 모든 판매원에게 매달 50만원의 기본 급여와 물품 판매 가격의 12%에 해당하는 돈을 지급한다.
// 
// EX
// 판매금액을 만원 단위로 입력(-1 to end): 100
// 이번달 급여 : 62만원
// 판매금액을 만원 단위로 입력(-1 to end): 200
// 이번달 급여 : 74만원
// 판매금액을 만원 단위로 입력(-1 to end): -1
// 프로그램을 종료합니다.

int Q01_1_4()
{
	int DefaultSalary = 50;
	double Incentives = 0.12;
	int SalesAmount = 0;

	while (true)
	{
		cout << "판매금액을 만원 단위로 입력(-1 to end): ";
		cin >> SalesAmount;

		if (SalesAmount == -1)
		{
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
		else
		{
			cout << "이번달 급여 : " << DefaultSalary + (SalesAmount * Incentives) << "만원" << endl;
		}
	}

	return 0;
}


// 01-2 문제1
//
// 다음 main 함수에서 필요로 하는 swap 함수를 오버로딩 해서 구현해보자.
void swap(int* num1, int* num2);
void swap(char* num1, char* num2);
void swap(double* num1, double* num2);

void Q01_2_1()
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	cout << num1 << ' ' << num2 << endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	cout << ch1 << ' ' << ch2 << endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	cout << dbl1 << ' ' << dbl2 << endl;
}

void swap(int* num1, int* num2)
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

void swap(char* num1, char* num2)
{
	char tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

void swap(double* num1, double* num2)
{
	double tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}


// 01-3 문제1
//
// 예제 DefaultValue3 함수를 매개변수의 디폴트값 지정 형태가 아닌,
// 함수 오버로딩의 형태로 재 구현해 보자.

int BoxVolume2(int length, int width, int height)
{
	return length * width * height;
}

int BoxVolume2(int length, int width)
{
	return length * width;
}

int BoxVolume2(int length)
{
	return length;
}

int Q01_3_1()
{
	cout << "[3, 3, 3] : " << BoxVolume2(3, 3, 3) << endl;
	cout << "[5, 5, D] : " << BoxVolume2(5, 5) << endl;
	cout << "[7, D, D] : " << BoxVolume2(7) << endl;

	return 0;
}