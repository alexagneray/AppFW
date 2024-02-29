#pragma once

class IData
{
	UINT m_uMagicNumber;
	time_t m_tmCreation;
	HANDLE m_hMutex;
	
	IData() :
		m_uMagicNumber{ 0 },
		m_tmCreation{0},
		m_hMutex{ NULL }
	{
		m_hMutex = CreateMutex(NULL,FALSE,NULL);
	}
	virtual HRESULT Lock()
	{
		if (!m_hMutex) return E_POINTER;

		WaitForSingleObject(m_hMutex, INFINITE);
	}
	virtual HRESULT Unlock()
	{
		if (!m_hMutex) return E_POINTER;

		ReleaseMutex(m_hMutex);
	}
	virtual HRESULT Move(IData*) = 0;
	virtual HRESULT Clone(IData*) = 0;
};
