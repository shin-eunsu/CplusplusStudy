#include <iostream>

using namespace std;

namespace ReturnObjDeadTime
{
	class SoSimple
	{
	private:
		int num;

	public:
		SoSimple(int n)
			: num(n)
		{
			cout << "New Object  : " << this << endl;
		}

		SoSimple(const SoSimple& other)
			: num(other.num)
		{
			cout << "New Object& : " << this << endl;
		}

		~SoSimple()
		{
			cout << "Destory obj : " << this << endl;
		}
	};

	SoSimple SimpleFuncObj(SoSimple ob)
	{
		cout << "Parm ADR    : " << &ob << endl;
		return ob;
	}

	int ReturnObjDeadTime_Main(void)
	{
		SoSimple obj(7);
		SimpleFuncObj(obj);

		cout << endl;
		SoSimple tempRef = SimpleFuncObj(obj);
		cout << "Return Obj  : " << &tempRef << endl;

		return 0;
	}
}