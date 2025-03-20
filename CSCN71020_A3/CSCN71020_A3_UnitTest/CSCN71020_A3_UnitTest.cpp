#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CSCN71020A3UnitTest
{
	TEST_CLASS(CSCN71020A3UnitTest)
	{
	public:
		//test for a prime number
		TEST_METHOD(TestMethod1)
		{
			int input = 2;

			int expected = true;
			bool actual = IsPrime(input);
			Assert::IsTrue(expected == actual);
		}

		//test for a non-prime number
		TEST_METHOD(TestMethod1)
		{
			int input = 4;

			int expected = false;
			bool actual = IsPrime(input);
			Assert::IsTrue(expected == actual);
		}

		//test for edge case 1
		TEST_METHOD(TestMethod1)
		{
			int input = 1;

			int expected = false;
			bool actual = IsPrime(input);
			Assert::IsTrue(expected == actual);
		}

		//test for edge case 2
		TEST_METHOD(TestMethod1)
		{
			int input = 0;

			int expected = false;
			bool actual = IsPrime(input);
			Assert::IsTrue(expected == actual);
		}

		//test for a large prime number
		TEST_METHOD(TestMethod1)
		{
			int input = 317;

			int expected = true;
			bool actual = IsPrime(input);
			Assert::IsTrue(expected == actual);
		}
	};
}
