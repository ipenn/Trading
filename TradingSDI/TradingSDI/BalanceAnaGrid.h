#ifndef BalanceAna_GRID
#define BalanceAna_GRID
#include "OrderGrid.h"
#include "ugctrl.h"
#include "LogFile.h"
class BalanceAnaGrid :
	public CUGCtrl
{
public:
	BalanceAnaGrid(void);
	~BalanceAnaGrid(void);
    static int insertFilterFlag;
	static int shorting;
	CString str[24];
	int	m_nSpinIndex;
	int run_check;
	CLogFile logfile;
	CUGSortArrowType m_sortArrow;
	CFont m_font;
	int  m_iSortCol;
	BOOL m_bSortedAscending;
	int m_iArrowIndex;
	static int m_selectedclient;

	//manual sorting and filtering variables
	static int val_type;
	static int col_click;
	static int a_d;
	static int filter_break;
	//Storing filter value 
	static CString col0_val,col1_val,col2_val,col3_val,col4_val,col5_val,col6_val,col7_val,col8_val,col9_val,col10_val,col11_val,col12_val,col13_val,col14_val,col15_val,col16_val,col17_val,col18_val,col19_val,col20_val,col21_val,col22_val,col23_val;
	//Structure for fill data
	struct st_grid_balanalysis
	{		 	

		wchar_t m_deal[100];
	    wchar_t m_login[100];
		wchar_t m_symbol[50];
		wchar_t m_time[100];
        wchar_t m_Order[100];
	    wchar_t m_EntryAction[100];
		wchar_t m_EntryVolume[100];
		wchar_t m_Entryprice[100];

		wchar_t m_ExitDeal[100];
		wchar_t m_ExitTime[50];
		wchar_t m_ExitOrder[100];

		wchar_t m_ExitAction[100];
		wchar_t m_ExitVolume[50];
		wchar_t m_ExitPrice[100];

		wchar_t m_ProfitPoint_L[100];
		wchar_t m_ProfitPoint_P[50];
		wchar_t m_Multiplayer[100];

		wchar_t m_Balance[100];
		wchar_t m_potentialprofitpoint[50];
		wchar_t m_PotentialLosspoint[100];


		wchar_t m_DurationTime[100];
		wchar_t m_high[100];
		wchar_t m_low[100];
	};
	typedef TMTArray<st_grid_balanalysis> st_grid_balanalysis_array;
	static st_grid_balanalysis m_st_grid_anlysis;
	static st_grid_balanalysis_array m_st_grid_anlysis_Array_Fill;	
    static st_grid_balanalysis_array m_st_grid_anlysis_Grid_array;


	
public:
	
	//***** Over-ridable Notify Functions *****
	void filter();
	void RefreshGrid();
	void InitMenu();
	//set text on grid
	void OnGetCell(int col,long row,CUGCell *cell);
	//menu notifications
	virtual void OnMenuCommand(int col,long row,int section,int item);
	virtual int OnDropList(long ID,int col,long row,long msg,long param);
	//mouse and key strokes
	virtual  int OnCellTypeNotify(long ID,int col,long row,long msg,long param);
	//void    gridFilter(int colno,int rows_count,CString col_value);
	BOOLEAN  CheckvalueInArray(const CStringArray& arr,CString strval) ;
	void addItemToCombobox();
	virtual void OnSetup();
	virtual void OnSheetSetup(int sheetNumber);
	void GetData(_bstr_t m_login);
	virtual void OnTH_LClicked(int col,long row,int updn,RECT *rect,POINT *point,BOOL processed);
	//virtual int OnSortEvaluate(CUGCell *cell1,CUGCell *cell2,int flags);
	virtual  int OnEditFinish(int col, long row,CWnd *edit,LPCTSTR string,BOOL cancelFlag);
	virtual void OnDClicked(int col,long row,RECT *rect,POINT *point,BOOL processed);
	//sorting and filtering
	void Col_sorting();
	void ColValue_filter();
};

#endif