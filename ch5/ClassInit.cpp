#include <iostream>

using namespace std;
namespace ClassInit
{
	class SoSimple
	{
	private:
		int mNum1;
		int mNum2;

	public:
		SoSimple(int n1, int n2)
			: mNum1(n1)
			, mNum2(n2)
		{

		}

		SoSimple(SoSimple& other)
			: mNum1(other.mNum1)
			, mNum2(other.mNum2)
		{
			cout << "Called SoSimple(SoSimple& other)" << endl;
		}

		void ShowSimpleData()
		{
			cout << mNum1 << endl;
			cout << mNum2 << endl;
		}
	};

	int ClassInit_Main(void)
	{
		SoSimple sim1(15, 30);
		cout << "���� �� �ʱ�ȭ ����" << endl;
		SoSimple sim2 = sim1;
		cout << "���� �� �ʱ�ȭ ����" << endl;
		sim2.ShowSimpleData();
		return 0;
	}
}