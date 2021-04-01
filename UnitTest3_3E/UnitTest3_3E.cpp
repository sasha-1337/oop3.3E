#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Student\oop3.3E\oop3.3E\Object.cpp"
#include "D:\Student\oop3.3E\oop3.3E\Long.cpp"
#include "D:\Student\oop3.3E\oop3.3E\Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33E
{
	TEST_CLASS(UnitTest33E)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair a(1, 1);
			bool t;
			t = a.Init(1000, 7);
			Assert::AreEqual(t, true);
		}
	};
}
