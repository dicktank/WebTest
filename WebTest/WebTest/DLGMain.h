#pragma once
#include "DLGBase.h"

// CDLGMain 对话框

class CDLGMain : public CDLGBase
{
	DECLARE_DYNAMIC(CDLGMain)

public:
	CDLGMain(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDLGMain();

// 对话框数据
	enum { IDD = IDD_MAIN };

protected:
	UINT	m_id;
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
