#include "pch.h"
#include "CppUnitTest.h"
#include"C:\Users\YuriyVorobyov\source\repos\3.1\3.1/Rectangle.h"
#include"C:\Users\YuriyVorobyov\source\repos\3.1\3.1/Rectangle.cpp"
#include"C:\Users\YuriyVorobyov\source\repos\3.1\3.1/Pair.h"
#include"C:\Users\YuriyVorobyov\source\repos\3.1\3.1/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest31
{
	TEST_CLASS(UnitTest31)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rectangle T(3, 4);
			Assert::AreEqual(T.Square(), 12.0);
		}
	};
}
