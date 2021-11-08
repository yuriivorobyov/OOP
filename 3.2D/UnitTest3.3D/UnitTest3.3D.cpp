#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\YuriyVorobyov\source\repos\3.2D\3.2D/Pair.h"
#include "C:\Users\YuriyVorobyov\source\repos\3.2D\3.2D/Pair.cpp"
#include "C:\Users\YuriyVorobyov\source\repos\3.2D\3.2D/Rectangle_Public.h"
#include "C:\Users\YuriyVorobyov\source\repos\3.2D\3.2D/Rectangle_Public.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33D
{
	TEST_CLASS(UnitTest33D)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			class Rectangle_Public A2(5, 2);
			Assert::AreEqual(A2.Dobutok(), 10.0);
		}
	};
}
