#include "pch.h"
#include "Data.h"
#include "Component.h"
#include "DataBox.h"

CDataBox::CDataBox():
	m_pData{nullptr}
{
}

CDataBox::CDataBox(std::shared_ptr<IData> pData):
	m_pData{nullptr}
{
	m_pData = pData;
}

HRESULT CDataBox::Move(std::shared_ptr<IData>& pData)
{
	if (!pData) return E_INVALIDARG;
	pData = m_pData;
	m_pData = nullptr;
	return S_OK;
}

HRESULT CDataBox::Set(std::shared_ptr<IData> pData)
{
	if (!pData) return E_INVALIDARG;
	
	m_pData = pData;
}
