// CSeekDlg.cpp: 实现文件
//

#include "pch.h"
#include "04023612(2).h"
#include "afxdialogex.h"
#include "CSeekDlg.h"


// CSeekDlg 对话框

IMPLEMENT_DYNAMIC(CSeekDlg, CDialogEx)

CSeekDlg::CSeekDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG3, pParent)
{

}

CSeekDlg::~CSeekDlg()
{
}

void CSeekDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSeekDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &CSeekDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CSeekDlg 消息处理程序


void CSeekDlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}
