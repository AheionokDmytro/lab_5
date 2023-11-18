#include "pch.h"
#include "CppUnitTest.h"
#include "D:\university\ipz\IPZ_exercises\IPZ_exercises\lab_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(CalculateTests)
	{
	public:

		TEST_METHOD(calculate_get4and3_6returned)
		{
			double x = 4;
			int n = 3;
			double expected = 10; //Changed to get unpassed test

			double actual = calculate(x, n);

			Assert::AreEqual(expected, actual);
		}
	public:

		TEST_METHOD(calculate_getneg5and2_neg9returned)
		{
			double x = -5;
			int n = 2;
			double expected = -9;

			double actual = calculate(x, n);

			Assert::AreEqual(expected, actual);
		}
	};

	TEST_CLASS(checkValidParams_Test)
	{
	public:

		TEST_METHOD(checkValidParams_getneg10_10_2_10_exceptionNotThrown)
		{
			double a = -10;
			double b = 10;
			double h = 2;
			int n = 10;

			try {
				checkValidParams(a, b, h, n);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
	public:

		TEST_METHOD(checkValidParams_get10_neg10_2_10_exceptionThrown)
		{
			double a = 10;
			double b = -10;
			double h = 2;
			int n = 10;

			try {
				checkValidParams(a, b, h, n);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
	public:

		TEST_METHOD(checkValidParams_getneg10_10_neg2_10_exceptionThrown)
		{
			double a = -10;
			double b = 10;
			double h = -2;
			int n = 10;

			try {
				checkValidParams(a, b, h, n);
				Assert::IsTrue(true); // Changed to get unpassed test
			}
			catch (...)
			{
				Assert::Fail(); // Changed to get unpassed test
			}
		}
	public:

		TEST_METHOD(checkValidParams_getneg10_10_2_neg10_exceptionThrown)
		{
			double a = 10;
			double b = -10;
			double h = 2;
			int n = -10;

			try {
				checkValidParams(a, b, h, n);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
	};
}
