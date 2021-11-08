#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\YuriyVorobyov\source\repos\1.3\1.3\point.h"
#include "C:\Users\YuriyVorobyov\source\repos\1.3\1.3\point.cpp"
#include "C:\Users\YuriyVorobyov\source\repos\1.3\1.3\Source.cpp"





using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest13
{
	TEST_CLASS(UnitTest13)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			Point p[1];
			bool t;
			t = p[1].Init(2, 5);

			Assert::AreEqual(t, true);

		}
	};
}
