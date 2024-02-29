#pragma once
#include "pch.h"
class IComponent
{
	UINT m_uId;
	CString m_strLabel;
	CArray<IComponent*> m_arrChildren;
public:
	INT GetChildrenCount() const
	{
		INT nChildrenCount = m_arrChildren.GetCount();
		for (INT i = 0; i < nChildrenCount; ++i)
		{
			nChildrenCount += m_arrChildren[i]->GetChildrenCount();
		}
		return nChildrenCount;
	}
};
