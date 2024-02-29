#pragma once
#include "pch.h"
class IComponent
{
	UINT m_uId;
	CString m_strLabel;
	CArray<IComponent*> m_arrChildren;
};
