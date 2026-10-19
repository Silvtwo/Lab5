#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\4cosm\source\repos\Project5.4\Project5.4\LP5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			
			int N = 3;
			int K = 1;
			double tolerance = 0.00001;

			
			double expected = S0(N, K);
			double actual1 = S1(N, K);
			double actual2 = S2(N, K, N);
			double actual3 = S3(N, K, K, 0.0);
			double actual4 = S4(N, K, N, 0.0);

			Assert::AreEqual(expected, actual1, tolerance);
			Assert::AreEqual(expected, actual2, tolerance);
			Assert::AreEqual(expected, actual3, tolerance);
			Assert::AreEqual(expected, actual4, tolerance);
		}
	};
}