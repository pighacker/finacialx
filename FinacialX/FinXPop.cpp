// FinXPop.cpp : 實作檔
//

#include "stdafx.h"
#include "FinacialX.h"
#include "FinXPop.h"
#include "afxdialogex.h"


// FinXPop 對話方塊

IMPLEMENT_DYNAMIC(FinXPop, CDialogEx)

FinXPop::FinXPop(CWnd* pParent /*=NULL*/)
	: CDialogEx(FinXPop::IDD, pParent)
{

	EnableAutomation();

}

FinXPop::~FinXPop()
{
}

void FinXPop::OnFinalRelease()
{
	// 當釋放 Automation 物件最後的參考時，
	// 會呼叫 OnFinalRelease。基底類別會自動
	// 刪除物件。呼叫基底類別前，請先加入您物件所需的額外清除 (Cleanup)
	// 程式碼。

	CDialogEx::OnFinalRelease();
}

void FinXPop::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(FinXPop, CDialogEx)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(FinXPop, CDialogEx)
END_DISPATCH_MAP()

// 注意: 我們加入了對 IID_IFinXPop 的支援
//  以便從 VBA 支援型別安全繫結。此 IID 必須與 .IDL 檔中，
//  附加至分配介面 (Dispinterface) 的 GUID 相符。

// {CB6830D8-E111-4F08-A243-3B32BD776949}
static const IID IID_IFinXPop =
{ 0xCB6830D8, 0xE111, 0x4F08, { 0xA2, 0x43, 0x3B, 0x32, 0xBD, 0x77, 0x69, 0x49 } };

BEGIN_INTERFACE_MAP(FinXPop, CDialogEx)
	INTERFACE_PART(FinXPop, IID_IFinXPop, Dispatch)
END_INTERFACE_MAP()


// FinXPop 訊息處理常式
