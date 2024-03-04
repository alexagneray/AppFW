#include "pch.h"
#include "ProcessLibMain.h"

//IData::IData() :
//	m_uMagicNumber{ 0 },
//	m_tmCreation{ 0 },
//	m_hMutex{ NULL }
//{
//	m_hMutex = CreateMutex(NULL, FALSE, NULL);
//}
//HRESULT IData::Lock()
//{
//	if (!m_hMutex) return E_POINTER;
//
//	WaitForSingleObject(m_hMutex, INFINITE);
//
//	return S_OK;
//}
//HRESULT IData::Unlock(){
//	if (!m_hMutex) return E_POINTER;
//
//	ReleaseMutex(m_hMutex);
//
//	return S_OK;
//}