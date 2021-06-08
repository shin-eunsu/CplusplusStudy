#include <iostream>

using namespace std;


namespace ConstObject
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

		SoSimple& AddNum(int n)
		{
			num += n;
			return *this;
		}

		void ShowData() const
		{
			cout << "num: " << num << endl;
		}
	};
}

int ConstObject_Main(void)
{
	using namespace ConstObject;

	const SoSimple obj(7);
	obj.ShowData();
	return 0;
}