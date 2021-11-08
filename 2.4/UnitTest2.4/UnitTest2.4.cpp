#include "pch.h"
#include "CppUnitTest.h"
#include"C:\Users\YuriyVorobyov\source\repos\2.4\2.4/Vector.h"
#include"C:\Users\YuriyVorobyov\source\repos\2.4\2.4/Vector.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest24
{
	TEST_CLASS(UnitTest24)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			Vector a(2);
			a[1] = 1;
			a[2] = 5;
			Assert::AreEqual(a[2], 5);
		}
	};
}
