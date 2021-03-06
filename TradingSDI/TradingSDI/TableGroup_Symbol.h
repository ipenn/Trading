//#include "stdafx.h"
#ifndef CTrade_HEADER_SYMBOL
#define CTrade_HEADER_SYMBOL
#include <atldbcli.h>
class CSymbolGroup_Table
{

public:
	TCHAR m_Symbol[31];
	TCHAR m_margin[31];
	
		
	// The following wizard-generated data members contain status
	// values for the corresponding fields in the column map. You
	// can use these values to hold NULL values that the database
	// returns or to hold error information when the compiler returns
	// errors. See Field Status Data Members in Wizard-Generated
	// Accessors in the Visual C++ documentation for more information
	// on using these fields.
	// NOTE: You must initialize these fields before setting/inserting data!
	
	DBSTATUS m_dwSymbolStatus;
	DBSTATUS m_dwmarginStatus;
	

	// The following wizard-generated data members contain length
	// values for the corresponding fields in the column map.
	// NOTE: For variable-length columns, you must initialize these
	//       fields before setting/inserting data!



	DBLENGTH m_dwSymbolLength;
	DBLENGTH m_dwmarginLength;
	
	

	
	

	
// Column binding map
BEGIN_COLUMN_MAP(CSymbolGroup_Table)
		COLUMN_ENTRY_LENGTH_STATUS(1, m_Symbol , m_dwSymbolLength, m_dwSymbolStatus )
		COLUMN_ENTRY_LENGTH_STATUS(2, m_margin , m_dwmarginLength, m_dwmarginStatus )
		
END_COLUMN_MAP()
	
};
#endif