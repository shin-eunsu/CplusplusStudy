#include <iostream>

using namespace std;


// 01-1 ����1
// 
// ����ڷκ��� �� 5���� ������ �Է� �޾Ƽ�, �� ���� ����ϴ� ���α׷��� �ۼ��� ����.
// ���α׷� ���� ����
// 1��° ���� �Է� : 1
// 2��° ���� �Է� : 2
// 3��° ���� �Է� : 3
// 4��° ���� �Է� : 4
// 5��° ���� �Է� : 5
// �հ� : 15
int Q01_1_1()
{
	int val[5];
	int result = 0;

	for (int i = 0; i < sizeof(val) / sizeof(int); i++)
	{
		cout << i + 1 << "��° ���� �Է� : ";
		cin >> val[i];
		result += val[i];
	}
	cout << "�հ� : " << result << endl;

	return 0;
}

// 01-1 ����2
// 
// ���α׷� ����ڷκ��� �̸��� ��ȭ��ȣ�� ���ڿ��� ���·� �Է� �޾Ƽ�, 
// �Է� ���� �����͸� �״�� ����ϴ� ���α׷��� �ۼ��� ����.
int Q01_1_2()
{
	char name[100];
	char phone[20];

	cout << "�̸� �Է�: ";
	cin >> name;
	cout << name << endl;

	cout << "��ȭ��ȣ �Է�: ";
	cin >> phone;
	cout << phone << endl;

	return 0;
}

// 01-1 ����3
//
// ���ڸ� �ϳ� �Է� �޾Ƽ� �� ���ڿ� �ش��ϴ� �������� ����ϴ� ���α׷��� �ۼ��� ����.

int Q01_1_3()
{
	int val = 0;

	cout << "�ܼ� �Է�: ";
	cin >> val;

	for (int i = 1; i < 10; i++)
	{
		cout << val << " * " << i << " = " << val * i << endl;
	}

	return 0;
}

// 01-1 ����4
//
// �Ǹſ����� �޿� ��� ���α׷��� �ۼ��� ����.
// �� ȸ��� ��� �Ǹſ����� �Ŵ� 50������ �⺻ �޿��� ��ǰ �Ǹ� ������ 12%�� �ش��ϴ� ���� �����Ѵ�.
// 
// EX
// �Ǹűݾ��� ���� ������ �Է�(-1 to end): 100
// �̹��� �޿� : 62����
// �Ǹűݾ��� ���� ������ �Է�(-1 to end): 200
// �̹��� �޿� : 74����
// �Ǹűݾ��� ���� ������ �Է�(-1 to end): -1
// ���α׷��� �����մϴ�.

int Q01_1_4()
{
	int DefaultSalary = 50;
	double Incentives = 0.12;
	int SalesAmount = 0;

	while (true)
	{
		cout << "�Ǹűݾ��� ���� ������ �Է�(-1 to end): ";
		cin >> SalesAmount;

		if (SalesAmount == -1)
		{
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		}
		else
		{
			cout << "�̹��� �޿� : " << DefaultSalary + (SalesAmount * Incentives) << "����" << endl;
		}
	}

	return 0;
}


// 01-2 ����1
//
// ���� main �Լ����� �ʿ�� �ϴ� swap �Լ��� �����ε� �ؼ� �����غ���.
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


// 01-3 ����1
//
// ���� DefaultValue3 �Լ��� �Ű������� ����Ʈ�� ���� ���°� �ƴ�,
// �Լ� �����ε��� ���·� �� ������ ����.

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