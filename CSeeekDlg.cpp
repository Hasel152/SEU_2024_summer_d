// CSeeekDlg.cpp: 实现文件
//

#include "pch.h"
#include "04023612(2).h"
#include "afxdialogex.h"
#include "CSeeekDlg.h"


// CSeeekDlg 对话框

IMPLEMENT_DYNAMIC(CSeeekDlg, CDialogEx)

CSeeekDlg::CSeeekDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG3, pParent)
	, m_seek_data(0)
{

}

CSeeekDlg::~CSeeekDlg()
{
}

void CSeeekDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_seek_data);
}


BEGIN_MESSAGE_MAP(CSeeekDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &CSeeekDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CSeeekDlg 消息处理程序


void CSeeekDlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}
