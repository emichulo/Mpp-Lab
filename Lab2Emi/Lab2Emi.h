
// Lab2Emi.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CLab2EmiApp:
// See Lab2Emi.cpp for the implementation of this class
//

class CLab2EmiApp : public CWinApp
{
public:
	CLab2EmiApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CLab2EmiApp theApp;
