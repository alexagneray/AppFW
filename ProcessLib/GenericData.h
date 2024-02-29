#pragma once

enum EGenericDataType
{
	GenericDataType_Struct,
	GenericDataType_Object,
	GenericDataType_Image,
	GenericDataType_Time
};

class GenericData : public IData
{
private:
	INT m_nDataLen;
	BYTE* m_pData;
public:
	HRESULT Move(IData*) override;
	HRESULT Clone(IData*) override;
};