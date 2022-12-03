 
// Calculator1.1Dlg.h : header file
//

#pragma once


// CCalculator11Dlg dialog
class CCalculator11Dlg : public CDialogEx
{
// Construction
public:
	CCalculator11Dlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CALCULATOR11_DIALOG };
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
	afx_msg void OnBnClickedB0();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedB1();
	afx_msg void OnBnClickedB2();
	afx_msg void OnBnClickedB3();
	afx_msg void OnBnClickedB4();
	afx_msg void OnBnClickedB5();
	afx_msg void OnBnClickedB6();
	afx_msg void OnBnClickedB7();
	afx_msg void OnBnClickedB8();
	afx_msg void OnBnClickedB9();
private:
	void addDigit(char digit);

	CFont display_Font;
	CString display_Text;
	CButton B0;
	CButton B1;
	CButton B2;
	CButton B3;
	CButton B4;
	CButton B5;
	CButton B6;
	CButton B7;
	CButton B8;
	CButton B9;
	CButton B_Equal;
	CButton B_Plus;
	CButton B_Minus;
	CButton B_Divide;
	CButton B_Multiply;
	CButton remainder;
	CButton power;
	CButton B_Clear;
	
	

};
