#include <iostream>

using namespace std;

namespace ReturnObjCopycon
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

		SoSimple& AddNum(int n)
		{
			num += n;
			return *this;
		}

		void ShowData()
		{
			cout << "num: " << num << endl;
		}
	};


	SoSimple SimpleFuncObj(SoSimple ob)
	{
		cout << "Before return" << endl;
		return ob;
	}

	int ReturnObjCopycon_Main(void)
	{
		SoSimple obj(7);
		SimpleFuncObj(obj).AddNum(30).ShowData();
		obj.ShowData();
		return 0;
	}
}