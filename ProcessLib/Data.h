#pragma once
#include "framework.h"

class IData
{
	UINT m_uMagicNumber;
	time_t m_tmCreation;
	HANDLE m_hMutex;
	
	HRESULT Lock();
	HRESULT Unlock();
	HRESULT Move(IData*);
	HRESULT Clone(IData*);
};
