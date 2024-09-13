// CDelDlg.cpp: 实现文件
//

#include "pch.h"
#include "04023612(2).h"
#include "afxdialogex.h"
#include "CDelDlg.h"


// CDelDlg 对话框

IMPLEMENT_DYNAMIC(CDelDlg, CDialogEx)

CDelDlg::CDelDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, m_del_pos(0)
{

}

CDelDlg::~CDelDlg()
{
}

void CDelDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Control(pDX, IDC_EDIT1, m_del_pos);
	DDX_Text(pDX, IDC_EDIT1, m_del_pos);
}


BEGIN_MESSAGE_MAP(CDelDlg, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &CDelDlg::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, &CDelDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CDelDlg 消息处理程序


void CDelDlg::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CDelDlg::OnBnClickedButton1()
{
	CDialogEx::OnOK();
	// TODO: 在此添加控件通知处理程序代码
}
