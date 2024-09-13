#pragma once
#include "afxdialogex.h"


// COperatorDlg 对话框

class COperatorDlg : public CDialogEx
{
	DECLARE_DYNAMIC(COperatorDlg)

public:
	COperatorDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~COperatorDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int m_ins_data;
//	CString m_ins_pos;
//	CEdit m_del_pos;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedButton1();
	int m_ins_pos;
	afx_msg void OnEnChangeEdit2();
	int m_del_pos;
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedButton2();
};
