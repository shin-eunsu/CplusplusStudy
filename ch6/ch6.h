#pragma once

int ConstObject_Main(void);
int ConstOverloading_Main();
int MyFriendClass_Main();
int MyFriendFunction_Main();
int CComStatic_Main();
int NeedGlobal_Main();

namespace StaticMember
{
	int StaticMember_Main();
}

namespace PublicStaticMember
{
	int PublicStaticMember_Main();
}

namespace Mutable
{
	int Mutable_Main();
}
