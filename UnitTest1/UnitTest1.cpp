#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include "../lab 6.2.it/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int testArray[5] = { 1, 2, 3, 4, 5 };
			int n = 5;
			int result = findSmallestPairedElement(testArray, n);
			Assert::AreEqual(2, result);
		}

		TEST_METHOD(TestMethod2)
		{
			int testArray[5] = { 1, 3, 5, 7, 9 };
			int n = 5;
			int result = findSmallestPairedElement(testArray, n);
			Assert::AreEqual(INT_MAX, result);
		}
	};
}