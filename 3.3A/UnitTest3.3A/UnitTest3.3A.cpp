#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\YuriyVorobyov\source\repos\3.3A\3.3A/Point.h"
#include "C:\Users\YuriyVorobyov\source\repos\3.3A\3.3A/Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33A
{
	TEST_CLASS(UnitTest33A)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Point A(2, 3);
			int test = A.GetX();
			Assert::AreEqual(test, 2);
		}
	};
}
