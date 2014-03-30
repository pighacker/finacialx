#pragma once


// FinXPop 對話方塊

class FinXPop : public CDialogEx
{
	DECLARE_DYNAMIC(FinXPop)

public:
	FinXPop(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~FinXPop();

	virtual void OnFinalRelease();

// 對話方塊資料
	enum { IDD = IDD_FINACIALX_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支援

	DECLARE_MESSAGE_MAP()
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};
