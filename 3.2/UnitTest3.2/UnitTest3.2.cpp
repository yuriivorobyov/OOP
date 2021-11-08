#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\YuriyVorobyov\source\repos\3.2\3.2/Game.h"
#include "C:\Users\YuriyVorobyov\source\repos\3.2\3.2/Game.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest32
{
	TEST_CLASS(UnitTest32)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Game a;
			bool t;
			t = a.Init(1);
			Assert::AreEqual(t, true);
		}
	};
}
