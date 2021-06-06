#include <iostream>

using namespace std;

namespace PassObjCopycon
{
	class SoSimple
	{
	private:
		int num;

	public:
		SoSimple(int n)
			: num(n)
		{
		}

		SoSimple(const SoSimple& other)
			: num(other.num)
		{
			cout << "Called SoSimple(const SoSimple* other)" << endl;
		}

		void ShowData()
		{
			cout << "num: " << num << endl;
		}
	};

	void SimpleFuncObj(SoSimple ob)
	{
		ob.ShowData();
	}

	int PassObjCopycon_Main(void)
	{
		SoSimple obj(7);
		cout << "before call Func" << endl;
		SimpleFuncObj(obj);
		cout << "After call Func" << endl;

		return 0;
	}
}