#pragma once


// FinXPop ��Ԓ���K

class FinXPop : public CDialogEx
{
	DECLARE_DYNAMIC(FinXPop)

public:
	FinXPop(CWnd* pParent = NULL);   // �˜ʽ�����ʽ
	virtual ~FinXPop();

	virtual void OnFinalRelease();

// ��Ԓ���K�Y��
	enum { IDD = IDD_FINACIALX_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧Ԯ

	DECLARE_MESSAGE_MAP()
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};
