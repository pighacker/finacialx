// FinXPop.cpp : �����n
//

#include "stdafx.h"
#include "FinacialX.h"
#include "FinXPop.h"
#include "afxdialogex.h"


// FinXPop ��Ԓ���K

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
	// ��ጷ� Automation �������ą����r��
	// ������ OnFinalRelease������e���Ԅ�
	// �h����������л���eǰ��Ո�ȼ��������������~����� (Cleanup)
	// ��ʽ�a��

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

// ע��: �҂������ˌ� IID_IFinXPop ��֧Ԯ
//  �Ա�� VBA ֧Ԯ�̈́e��ȫ�M�Y���� IID ����c .IDL �n�У�
//  ������������� (Dispinterface) �� GUID �����

// {CB6830D8-E111-4F08-A243-3B32BD776949}
static const IID IID_IFinXPop =
{ 0xCB6830D8, 0xE111, 0x4F08, { 0xA2, 0x43, 0x3B, 0x32, 0xBD, 0x77, 0x69, 0x49 } };

BEGIN_INTERFACE_MAP(FinXPop, CDialogEx)
	INTERFACE_PART(FinXPop, IID_IFinXPop, Dispatch)
END_INTERFACE_MAP()


// FinXPop ӍϢ̎��ʽ
