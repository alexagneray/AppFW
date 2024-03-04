#pragma once

enum EGenericDataType
{
	GenericDataType_Struct,
	GenericDataType_Object,
	GenericDataType_Image,
	GenericDataType_Time
};

class AFX_EXT_CLASS CGenericData : public IData
{
private:
	INT m_nDataLen;
	BYTE* m_pData;
public:
	//CGenericData(BYTE* pBuff, INT nLen);
	HRESULT Move(IData*);
	HRESULT Clone(IData*);
	HRESULT Set(BYTE* pData, INT nDataLen);
};