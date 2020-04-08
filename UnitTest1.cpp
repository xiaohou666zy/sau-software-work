#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

		TEST_METHOD(TestMethod1)
		{
			int n = 6;
			int a[6] = { 4,5,6,7,8,9 };
			int max, sum;
			max = a[0];
			if (a[0] < 0) max = 0;
			sum = max;
			for (int i = 0; i < n - 1; i++)
			{
				sum = sum + a[i + 1];
				if (sum > max)
				{
					max = sum;
				}
				else if (sum < 0)
					sum = 0;
			}
			int real = 39;
			Assert::AreEqual(sum, real);
		}
		TEST_METHOD(TestMethod2)
		{
			int n = 6;
			int a[6] = { -1,3,-2,4,-1,2 };
			int max, sum;
			max = a[0];
			if (a[0] < 0) max = 0;
			sum = max;
			for (int i = 0; i < n - 1; i++)
			{
				sum = sum + a[i + 1];
				if (sum > max)
				{
					max = sum;
				}
				else if (sum < 0)
					sum = 0;
			}
			int real = 6;
			Assert::AreEqual(sum, real);
		}
		TEST_METHOD(TestMethod3)
		{
			int n = 6;
			int a[6] = { -1,-2,-3,-4,-5,-6 };
			int max, sum;
			max = a[0];
			if (a[0] < 0) max = 0;
			sum = max;
			for (int i = 0; i < n - 1; i++)
			{
				sum = sum + a[i + 1];
				if (sum > max)
				{
					max = sum;
				}
				else if (sum < 0)
					sum = 0;
			}
			int real = 0;
			Assert::AreEqual(sum, real);
		}
		TEST_METHOD(TestMethod4)
		{
			int n = 1;
			int a[] = { 0 };
			int max, sum;
			max = a[0];
			if (a[0] < 0) max = 0;
			sum = max;
			for (int i = 0; i < n - 1; i++)
			{
				sum = sum + a[i + 1];
				if (sum > max)
				{
					max = sum;
				}
				else if (sum < 0)
					sum = 0;
			}
			int real = 0;
			Assert::AreEqual(sum, real);
		}
		TEST_METHOD(TestMethod5)
		{
			int n = 4;
			int a[4] = { 3,-8,6,4 };
			int max, sum;
			max = a[0];
			if (a[0] < 0) max = 0;
			sum = max;
			for (int i = 0; i < n - 1; i++)
			{
				sum = sum + a[i + 1];
				if (sum > max)
				{
					max = sum;
				}
				else if (sum < 0)
					sum = 0;
			}
			int real = 10;
			Assert::AreEqual(sum, real);
		}
		
	};
}