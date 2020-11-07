#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.5/Lab5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab55
{
	TEST_CLASS(UnitTestLab55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			int count = 0;
			t = f(5, 4,3, count);
			Assert::AreEqual(t, 3.);


		}
	};
}
