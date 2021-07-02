#pragma once
#include "Package.h"

using namespace System;
using namespace System::Collections;

ref class PackageComparer : public IComparer
{
private:
	virtual int Compare(Object^ x, Object^ y) sealed = IComparer::Compare
	{
		return ((gcnew CaseInsensitiveComparer)->Compare(y, x));
	}
};

