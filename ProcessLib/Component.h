#pragma once
#include "pch.h"

class AFX_EXT_CLASS CComponent
{
	UINT m_uId;
	CString m_strLabel;
	CArray<CComponent*> m_arrChildren;
public:
	CComponent();
	HRESULT AddChildren(CComponent* pChild);
	INT GetChildrenCount() const;
};
