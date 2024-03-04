#pragma once

class IData
{
//public:
//	IData();
protected:
	UINT m_uMagicNumber;
	time_t m_tmCreation;
	HANDLE m_hMutex;
	
public:
	//virtual HRESULT Lock();
	//virtual HRESULT Unlock();
	//virtual HRESULT Move(IData*) = 0;
	//virtual HRESULT Clone(IData*) = 0;
};
