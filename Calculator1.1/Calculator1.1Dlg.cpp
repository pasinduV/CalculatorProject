
// Calculator1.1Dlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "Calculator1.1.h"
#include "Calculator1.1Dlg.h"
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


// CCalculator11Dlg dialog



CCalculator11Dlg::CCalculator11Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CALCULATOR11_DIALOG, pParent)
	, display_Text(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCalculator11Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, display_Text);
}

BEGIN_MESSAGE_MAP(CCalculator11Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_Babt, &CCalculator11Dlg::OnBnClickedBabt)
	ON_BN_CLICKED(IDC_B0, &CCalculator11Dlg::OnBnClickedB0)
	ON_EN_CHANGE(IDC_EDIT1, &CCalculator11Dlg::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_B1, &CCalculator11Dlg::OnBnClickedB1)
	ON_BN_CLICKED(IDC_B2, &CCalculator11Dlg::OnBnClickedB2)
	ON_BN_CLICKED(IDC_B3, &CCalculator11Dlg::OnBnClickedB3)
	ON_BN_CLICKED(IDC_B4, &CCalculator11Dlg::OnBnClickedB4)
	ON_BN_CLICKED(IDC_B5, &CCalculator11Dlg::OnBnClickedB5)
	ON_BN_CLICKED(IDC_B6, &CCalculator11Dlg::OnBnClickedB6)
	ON_BN_CLICKED(IDC_B7, &CCalculator11Dlg::OnBnClickedB7)
	ON_BN_CLICKED(IDC_B8, &CCalculator11Dlg::OnBnClickedB8)
	ON_BN_CLICKED(IDC_B9, &CCalculator11Dlg::OnBnClickedB9)
END_MESSAGE_MAP()


// CCalculator11Dlg message handlers

BOOL CCalculator11Dlg::OnInitDialog()
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

	ShowWindow(SW_MINIMIZE);

	// TODO: Add extra initialization here
	display_Font.CreateFont(23, 0, 0, 0, FW_BOLD, 0, 0, 0, DEFAULT_CHARSET, 0, 0, 0, 0, _T("Microsoft Sans Serif"));

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CCalculator11Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CCalculator11Dlg::OnPaint()
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
HCURSOR CCalculator11Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CCalculator11Dlg::addDigit(char digit)
{
	display_Text += digit;
	UpdateData(false);
}

void CCalculator11Dlg::OnBnClickedBabt()
{
	// TODO: Add your control notification handler code here
	AfxMessageBox(_T("20/ENG/153 Vishmitha \n20/ENG/164 Koriya"));
}

void CCalculator11Dlg::OnEnChangeEdit1()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}

void CCalculator11Dlg::OnBnClickedB0()
{
	addDigit('0');
}


void CCalculator11Dlg::OnBnClickedB1()
{
	addDigit('1');
}


void CCalculator11Dlg::OnBnClickedB2()
{
	addDigit('2');
}


void CCalculator11Dlg::OnBnClickedB3()
{
	addDigit('3');
}


void CCalculator11Dlg::OnBnClickedB4()
{
	addDigit('4');
}


void CCalculator11Dlg::OnBnClickedB5()
{
	addDigit('5');
}


void CCalculator11Dlg::OnBnClickedB6()
{
	addDigit('6');
}


void CCalculator11Dlg::OnBnClickedB7()
{
	addDigit('7');
}


void CCalculator11Dlg::OnBnClickedB8()
{
	addDigit('8');
}


void CCalculator11Dlg::OnBnClickedB9()
{
	addDigit('9');
}
