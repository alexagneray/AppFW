// ProcessLib.h : fichier d'en-tête principal pour la DLL de ProcessLib
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluez 'pch.h' avant d'inclure ce fichier pour PCH"
#endif

#include "resource.h"		// symboles principaux


// CProcessLibApp
// Consultez ProcessLib.cpp pour l'implémentation de cette classe
//

class CProcessLibApp : public CWinApp
{
public:
	CProcessLibApp();

// Substitutions
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
