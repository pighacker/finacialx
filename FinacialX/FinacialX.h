
// FinacialX.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CFinacialXApp:
// �йش����ʵ�֣������ FinacialX.cpp
//

class CFinacialXApp : public CWinApp
{
public:
	CFinacialXApp();

// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CFinacialXApp theApp;