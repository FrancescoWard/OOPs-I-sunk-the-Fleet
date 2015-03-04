#include "CCell.h"

namespace Fleet
{
	//Constructor
	CCell::CCell(unsigned short row, unsigned short col)
	{
		m_row = row;
		m_col = col;
	}

	ostream & CCell::print(ostream & sout, CCell & a)
	{
		sout << char('A' + a.m_row) << a.m_col << endl;
		return sout;
	}

	CCell CCell::inputCoordinates(istream & sin, char ch)
	{
		short numberOfRows = (toupper(ch)=='L') ? LARGEROWS : SMALLROWS;
		short numberOfCols = (toupper(ch)=='L') ? LARGECOLS : SMALLCOLS;
		char highChar = static_cast<char>(numberOfRows - 1) + 'A';
		char row  = 'A';
		short col = 0;
		CCell location;
		do
		{
			col = 0;
			cout << "Row must be a letter from A to " << highChar
				<< " and column must be  from 1 to "  << numberOfCols << ": ";
			while((row = toupper(sin.get())) < 'A' || row  > highChar)
			{
				sin.ignore(BUFFER_SIZE, '\n');
				cout << "Row must be a letter from A to " << highChar
					<< " and column must be  from 1 to "  << numberOfCols << ": ";
			}
			sin >> col;
			if(!sin)
				sin.clear();
			sin.ignore(BUFFER_SIZE, '\n');
		}
		while(col < 1 || col > numberOfCols);

		location.m_col = col - 1;
		location.m_row = static_cast<short>(row - 'A');
		return location;
		}

	ostream & operator<< (ostream & sout, CCell & a)
	{
		a.print(sout, a);
		return sout;
	}
}