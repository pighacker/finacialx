
// FinacialXDlg.h : 头文件
//

#pragma once

class CFinacialXDlgAutoProxy;


// CFinacialXDlg 对话框
class CFinacialXDlg : public CDHtmlDialog
{
	DECLARE_DYNAMIC(CFinacialXDlg);
	friend class CFinacialXDlgAutoProxy;

// 构造
public:
	CFinacialXDlg(CWnd* pParent = NULL);	// 标准构造函数
	virtual ~CFinacialXDlg();

// 对话框数据
	enum { IDD = IDD_FINACIALX_DIALOG, IDH = IDR_HTML_FINACIALX_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

	HRESULT OnButtonOK(IHTMLElement *pElement);
	HRESULT OnButtonCancel(IHTMLElement *pElement);

// 实现
protected:
	CFinacialXDlgAutoProxy* m_pAutoProxy;
	HICON m_hIcon;

	BOOL CanExit();

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClose();
	virtual void OnOK();
	virtual void OnCancel();
	DECLARE_MESSAGE_MAP()
	DECLARE_DHTML_EVENT_MAP()
public:

};
