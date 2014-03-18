
// FinacialXDlg.h : ͷ�ļ�
//

#pragma once

class CFinacialXDlgAutoProxy;


// CFinacialXDlg �Ի���
class CFinacialXDlg : public CDHtmlDialog
{
	DECLARE_DYNAMIC(CFinacialXDlg);
	friend class CFinacialXDlgAutoProxy;

// ����
public:
	CFinacialXDlg(CWnd* pParent = NULL);	// ��׼���캯��
	virtual ~CFinacialXDlg();

// �Ի�������
	enum { IDD = IDD_FINACIALX_DIALOG, IDH = IDR_HTML_FINACIALX_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

	HRESULT OnButtonOK(IHTMLElement *pElement);
	HRESULT OnButtonCancel(IHTMLElement *pElement);

// ʵ��
protected:
	CFinacialXDlgAutoProxy* m_pAutoProxy;
	HICON m_hIcon;

	BOOL CanExit();

	// ���ɵ���Ϣӳ�亯��
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
