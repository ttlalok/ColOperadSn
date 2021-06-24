#include "pch.h"
#include "CppUnitTest.h"
#include "sym_group.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SymGroupUnitTests
{
	TEST_CLASS(RawComposition)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			tPerm sigma({ 2, 3, 1, 0 });
			tPerm tau({ 1, 2, 3, 0 });
			Assert::IsTrue(tPerm({ 3, 1, 0, 2 }) == Compose(sigma, tau));
		}
	};
}
