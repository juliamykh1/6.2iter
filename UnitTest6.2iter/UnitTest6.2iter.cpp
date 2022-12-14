#include "pch.h"
#include "CppUnitTest.h"
#include "../6.2iter/6.2iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62iter
{
	TEST_CLASS(UnitTest62iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int k = 2;
			int a[k] = { 1, 2 };
			t = Max(a, k);
			Assert::AreEqual(2, t);
		}
	};
}
