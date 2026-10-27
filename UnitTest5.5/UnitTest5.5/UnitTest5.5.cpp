#include "pch.h"
#include "CppUnitTest.h"


#include "C:\Users\4cosm\source\repos\Project5.5\Project5.5\LP5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:

		TEST_METHOD(TestFunctionF)
		{
			int depth = 0;

	
			int actual_val = f(120, 1, depth);

			Assert::AreEqual(2, actual_val);
			Assert::AreEqual(2, depth);
		}

		TEST_METHOD(TestFunctionS)
		{
			int max_depth = 0;

			
			int actual_sum = S(10, 20, max_depth);

			Assert::AreEqual(48, actual_sum);
			Assert::AreEqual(2, max_depth);
		}
	};
}