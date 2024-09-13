#pragma once
#include "afxdialogex.h"


// CDelDlg 对话框

class CDelDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CDelDlg)

public:
	CDelDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDelDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
//	CEdit m_del_pos;
	int m_del_pos;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedButton1();
};
