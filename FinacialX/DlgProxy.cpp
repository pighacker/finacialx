
// DlgProxy.cpp : 实现文件
//

#include "stdafx.h"
#include "FinacialX.h"
#include "DlgProxy.h"
#include "FinacialXDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFinacialXDlgAutoProxy

IMPLEMENT_DYNCREATE(CFinacialXDlgAutoProxy, CCmdTarget)

CFinacialXDlgAutoProxy::CFinacialXDlgAutoProxy()
{
	EnableAutomation();
	
	// 为使应用程序在自动化对象处于活动状态时一直保持 
	//	运行，构造函数调用 AfxOleLockApp。
	AfxOleLockApp();

	// 通过应用程序的主窗口指针
	//  来访问对话框。设置代理的内部指针
	//  指向对话框，并设置对话框的后向指针指向
	//  该代理。
	ASSERT_VALID(AfxGetApp()->m_pMainWnd);
	if (AfxGetApp()->m_pMainWnd)
	{
		ASSERT_KINDOF(CFinacialXDlg, AfxGetApp()->m_pMainWnd);
		if (AfxGetApp()->m_pMainWnd->IsKindOf(RUNTIME_CLASS(CFinacialXDlg)))
		{
			m_pDialog = reinterpret_cast<CFinacialXDlg*>(AfxGetApp()->m_pMainWnd);
			m_pDialog->m_pAutoProxy = this;
		}
	}
}

CFinacialXDlgAutoProxy::~CFinacialXDlgAutoProxy()
{
	// 为了在用 OLE 自动化创建所有对象后终止应用程序，
	// 	析构函数调用 AfxOleUnlockApp。
	//  除了做其他事情外，这还将销毁主对话框
	if (m_pDialog != NULL)
		m_pDialog->m_pAutoProxy = NULL;
	AfxOleUnlockApp();
}

void CFinacialXDlgAutoProxy::OnFinalRelease()
{
	// 释放了对自动化对象的最后一个引用后，将调用
	// OnFinalRelease。基类将自动
	// 删除该对象。在调用该基类之前，请添加您的
	// 对象所需的附加清理代码。

	CCmdTarget::OnFinalRelease();
}

BEGIN_MESSAGE_MAP(CFinacialXDlgAutoProxy, CCmdTarget)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CFinacialXDlgAutoProxy, CCmdTarget)
END_DISPATCH_MAP()

// 注意: 我们添加了对 IID_IFinacialX 的支持
//  以支持来自 VBA 的类型安全绑定。此 IID 必须同附加到 .IDL 文件中的
//  调度接口的 GUID 匹配。

// {C1336C42-8F49-4A14-BCDC-3156613DA392}
static const IID IID_IFinacialX =
{ 0xC1336C42, 0x8F49, 0x4A14, { 0xBC, 0xDC, 0x31, 0x56, 0x61, 0x3D, 0xA3, 0x92 } };

BEGIN_INTERFACE_MAP(CFinacialXDlgAutoProxy, CCmdTarget)
	INTERFACE_PART(CFinacialXDlgAutoProxy, IID_IFinacialX, Dispatch)
END_INTERFACE_MAP()

// IMPLEMENT_OLECREATE2 宏在此项目的 StdAfx.h 中定义
// {7AF7E243-D6A6-438D-A197-76C80517D21C}
IMPLEMENT_OLECREATE2(CFinacialXDlgAutoProxy, "FinacialX.Application", 0x7af7e243, 0xd6a6, 0x438d, 0xa1, 0x97, 0x76, 0xc8, 0x5, 0x17, 0xd2, 0x1c)


// CFinacialXDlgAutoProxy 消息处理程序
