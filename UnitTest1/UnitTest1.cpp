#include "pch.h"
#include "CppUnitTest.h"
#include "c:\users\misha\source\repos\2.1oop\2.1oop\Pay.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pay a(1, 1);

			a.setfirst(2);
			a.setsecond(2);

			Assert::AreEqual(1.0, a.summa(1));
		}
	};
}
