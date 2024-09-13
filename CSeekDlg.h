#pragma once
#include "afxdialogex.h"


// CSeekDlg 对话框

class CSeekDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSeekDlg)

public:
	CSeekDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CSeekDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
