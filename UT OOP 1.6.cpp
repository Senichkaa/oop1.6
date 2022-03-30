#include "pch.h"
#include "CppUnitTest.h"
#include "..//oop1.6/Triangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTOOP16
{
	TEST_CLASS(UTOOP16)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triangle::Triad t;
			t.Init(12, 16, 20);
			Assert::AreEqual(48., t.GetSum());;
		}
	};
}
