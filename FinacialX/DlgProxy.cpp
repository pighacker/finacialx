
// DlgProxy.cpp : ʵ���ļ�
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
	
	// ΪʹӦ�ó������Զ��������ڻ״̬ʱһֱ���� 
	//	���У����캯������ AfxOleLockApp��
	AfxOleLockApp();

	// ͨ��Ӧ�ó����������ָ��
	//  �����ʶԻ������ô�����ڲ�ָ��
	//  ָ��Ի��򣬲����öԻ���ĺ���ָ��ָ��
	//  �ô���
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
	// Ϊ������ OLE �Զ����������ж������ֹӦ�ó���
	// 	������������ AfxOleUnlockApp��
	//  ���������������⣬�⻹���������Ի���
	if (m_pDialog != NULL)
		m_pDialog->m_pAutoProxy = NULL;
	AfxOleUnlockApp();
}

void CFinacialXDlgAutoProxy::OnFinalRelease()
{
	// �ͷ��˶��Զ�����������һ�����ú󣬽�����
	// OnFinalRelease�����ཫ�Զ�
	// ɾ���ö����ڵ��øû���֮ǰ�����������
	// ��������ĸ���������롣

	CCmdTarget::OnFinalRelease();
}

BEGIN_MESSAGE_MAP(CFinacialXDlgAutoProxy, CCmdTarget)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CFinacialXDlgAutoProxy, CCmdTarget)
END_DISPATCH_MAP()

// ע��: ��������˶� IID_IFinacialX ��֧��
//  ��֧������ VBA �����Ͱ�ȫ�󶨡��� IID ����ͬ���ӵ� .IDL �ļ��е�
//  ���Ƚӿڵ� GUID ƥ�䡣

// {C1336C42-8F49-4A14-BCDC-3156613DA392}
static const IID IID_IFinacialX =
{ 0xC1336C42, 0x8F49, 0x4A14, { 0xBC, 0xDC, 0x31, 0x56, 0x61, 0x3D, 0xA3, 0x92 } };

BEGIN_INTERFACE_MAP(CFinacialXDlgAutoProxy, CCmdTarget)
	INTERFACE_PART(CFinacialXDlgAutoProxy, IID_IFinacialX, Dispatch)
END_INTERFACE_MAP()

// IMPLEMENT_OLECREATE2 ���ڴ���Ŀ�� StdAfx.h �ж���
// {7AF7E243-D6A6-438D-A197-76C80517D21C}
IMPLEMENT_OLECREATE2(CFinacialXDlgAutoProxy, "FinacialX.Application", 0x7af7e243, 0xd6a6, 0x438d, 0xa1, 0x97, 0x76, 0xc8, 0x5, 0x17, 0xd2, 0x1c)


// CFinacialXDlgAutoProxy ��Ϣ�������
