
// DlgProxy.h: ͷ�ļ�
//

#pragma once

class CFinacialXDlg;


// CFinacialXDlgAutoProxy ����Ŀ��

class CFinacialXDlgAutoProxy : public CCmdTarget
{
	DECLARE_DYNCREATE(CFinacialXDlgAutoProxy)

	CFinacialXDlgAutoProxy();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��

// ����
public:
	CFinacialXDlg* m_pDialog;

// ����
public:

// ��д
	public:
	virtual void OnFinalRelease();

// ʵ��
protected:
	virtual ~CFinacialXDlgAutoProxy();

	// ���ɵ���Ϣӳ�亯��

	DECLARE_MESSAGE_MAP()
	DECLARE_OLECREATE(CFinacialXDlgAutoProxy)

	// ���ɵ� OLE ����ӳ�亯��

	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};

