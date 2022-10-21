
// Lab2EmiDlg.h : header file
//

#pragma once


// CLab2EmiDlg dialog
class CLab2EmiDlg : public CDialogEx
{
// Construction
public:
	CLab2EmiDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LAB2EMI_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int A;
	int B;
	int cmmdc;
	int cmmmc;
	afx_msg void OnBnClickedCalculeaza();
	afx_msg void OnBnClickedSterge();
};
