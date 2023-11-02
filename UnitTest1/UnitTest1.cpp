#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.2.rk/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int testArray[n] = { 2, 2, 3, 4, 5 }; 
			int expectedResult = 2; 

			int result = findSmallestPairedElement(testArray, n, testArray[0], 0);
			Assert::AreEqual(expectedResult, result);
		}

	};
}