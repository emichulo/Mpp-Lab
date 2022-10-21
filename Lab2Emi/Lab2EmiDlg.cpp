
// Lab2EmiDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "Lab2Emi.h"
#include "Lab2EmiDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CLab2EmiDlg dialog



CLab2EmiDlg::CLab2EmiDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_LAB2EMI_DIALOG, pParent)
	, A(0)
	, B(0)
	, cmmdc(0)
	, cmmmc(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CLab2EmiDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_A, A);
	DDX_Text(pDX, IDC_B, B);
	DDX_Text(pDX, IDC_CMMDC, cmmdc);
	DDX_Text(pDX, IDC_CMMMC, cmmmc);
}

BEGIN_MESSAGE_MAP(CLab2EmiDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_CALCULEAZA, &CLab2EmiDlg::OnBnClickedCalculeaza)
	ON_BN_CLICKED(IDC_STERGE, &CLab2EmiDlg::OnBnClickedSterge)
END_MESSAGE_MAP()


// CLab2EmiDlg message handlers

BOOL CLab2EmiDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CLab2EmiDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CLab2EmiDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CLab2EmiDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CLab2EmiDlg::OnBnClickedCalculeaza()
{

	// TODO: Add your control notification handler code here
	UpdateData();
	int x, y, r;
	x = A;
	y = B;
	if (x == y && y == 0)
	{

		AfxMessageBox((LPCWSTR)L"A ?i B nu pot fi simultan nule!");
		return;


	}
	if (y != 0)
		do
		{
			r = x % y;
			x = y;
			y = r;
		} while (r != 0);
		cmmdc = x;
		cmmmc = A * B / cmmdc;
		UpdateData(FALSE);

}



		void CLab2EmiDlg::OnBnClickedSterge()
		{
			// TODO: Add your control notification handler code here
			A = B = cmmdc = cmmmc = 0;
			UpdateData(FALSE);
		}
