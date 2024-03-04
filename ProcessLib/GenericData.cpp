#include "pch.h"
#include "ProcessLibMain.h"

//CGenericData::CGenericData(BYTE* pBuff, INT nLen) :
//	m_nDataLen{ 0 },
//	m_pData{ nullptr}
//{
//	if (nLen > 0)
//	{
//		m_pData = new BYTE[nLen];
//	}
//	m_nDataLen = nLen;
//	memcpy(m_pData, pBuff, nLen);
//}

HRESULT CGenericData::Move(IData* pData)
{
	return E_NOTIMPL;
}

HRESULT CGenericData::Clone(IData* pData)
{
	return E_NOTIMPL;
}

HRESULT CGenericData::Set(BYTE* pData, INT nDataLen)
{
	return E_NOTIMPL;
}
