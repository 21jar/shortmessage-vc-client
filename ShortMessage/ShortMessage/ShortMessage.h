
// ShortMessage.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CShortMessageApp:
// �йش����ʵ�֣������ ShortMessage.cpp
//

class CShortMessageApp : public CWinApp
{
public:
	CShortMessageApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CShortMessageApp theApp;