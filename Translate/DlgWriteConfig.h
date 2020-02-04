#pragma once


// CDlgWriteConfig dialog

class CDlgWriteConfig : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgWriteConfig)

public:
	CDlgWriteConfig(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CDlgWriteConfig();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WRITE_CONFIG};
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CButton m_btnSave;
	CButton m_btnLoad;
	CMFCEditBrowseCtrl m_ebSaveDir;
	CMFCEditBrowseCtrl m_ebLoadFile;
	CVSListBox m_lbWords;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton4();
	CEdit m_ebFileName;
	afx_msg void OnBnClickedButton2();
	virtual BOOL OnInitDialog();
};
