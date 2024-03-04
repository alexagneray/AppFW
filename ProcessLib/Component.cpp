#include "pch.h"
#include "ProcessLib.h"

CComponent::CComponent():
	m_uId{0}
{
}
HRESULT CComponent::AddChildren(CComponent* pChild)
{
	m_arrChildren.Add(pChild);

	return S_OK;
}
INT CComponent::GetChildrenCount() const
{
	INT nChildrenCount = m_arrChildren.GetCount();
	for (INT i = 0; i < nChildrenCount; ++i)
	{
		nChildrenCount += m_arrChildren[i]->GetChildrenCount();
	}
	return nChildrenCount;
}