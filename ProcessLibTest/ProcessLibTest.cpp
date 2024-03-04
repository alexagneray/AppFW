#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ProcessLibTest
{
	TEST_CLASS(ProcessLibTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			CDataBox* b1 = new CDataBox;

			const INT nBuffLen = 1024;
			BYTE* pBuff = new BYTE[nBuffLen];
			CGenericData* pGenData = new CGenericData(pBuff, nBuffLen);
			//std::shared_ptr<IData> pData = std::make_shared<CGenericData>(pGenData);
			delete[] pBuff;

		}
	};
}