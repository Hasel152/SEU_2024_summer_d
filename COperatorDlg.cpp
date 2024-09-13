// COperatorDlg.cpp: 实现文件
//

#include "pch.h"
#include "04023612(2).h"
#include "afxdialogex.h"
#include "COperatorDlg.h"
#include"CDataInterface.h"
#include "04023612(2)Dlg.h"
// COperatorDlg 对话框

IMPLEMENT_DYNAMIC(COperatorDlg, CDialogEx)

COperatorDlg::COperatorDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)

	, m_del_pos(0)
{

}

COperatorDlg::~COperatorDlg()
{
}

void COperatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_ins_data);
	//  DDX_Text(pDX, IDC_EDIT3, m_ins_pos);
	//  DDX_Control(pDX, IDC_EDIT2, m_del_pos);
	DDX_Text(pDX, IDC_EDIT3, m_ins_pos);
	//DDX_Text(pDX, IDC_EDIT2, m_del_pos);
}


BEGIN_MESSAGE_MAP(COperatorDlg, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &COperatorDlg::OnEnChangeEdit1)
//	ON_BN_CLICKED(IDC_BUTTON1, &COperatorDlg::OnBnClickedButton1)
//	ON_EN_CHANGE(IDC_EDIT2, &COperatorDlg::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &COperatorDlg::OnEnChangeEdit3)
	ON_BN_CLICKED(IDC_BUTTON2, &COperatorDlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// COperatorDlg 消息处理程序


void COperatorDlg::OnEnChangeEdit1()
{ 


	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void COperatorDlg::OnBnClickedButton1()
{
	
	

	// TODO: 在此添加控件通知处理程序代码
}


void COperatorDlg::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void COperatorDlg::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void COperatorDlg::OnBnClickedButton2()
{
	CDialogEx::OnOK();
	// TODO: 在此添加控件通知处理程序代码
}
