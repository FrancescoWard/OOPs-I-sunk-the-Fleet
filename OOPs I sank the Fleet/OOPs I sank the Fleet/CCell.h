#ifndef CCELL_H
#define CCELL_H
#include <iostream>
using namespace std;

namespace Fleet
{
	class CCell
	{

	private:
		static const short NUMPLAYERS = 2;	// number of players in game
		static const short SMALLROWS = 8;	// number of rows/columns in small game grid
		static const short LARGEROWS = 10;	// number of rows/columns in large game grid
		static const short SMALLCOLS = 12;	// number of rows/columns in small game grid
		static const short LARGECOLS = 24;	// number of rows/columns in large game grid

		static const unsigned BUFFER_SIZE = 256;


		unsigned short m_row;
		unsigned short m_col;
	public:
		CCell(unsigned short row = 0, unsigned short col = 0);	//constructor

		//accessors
		unsigned short getRow() {return m_row;}
		unsigned short getCol() {return m_col;}

		ostream & print(ostream & sout, CCell & a);
		CCell inputCoordinates(istream & sin, char ch);
	};
	
	ostream & operator<< (ostream & sout, CCell & a);
}


#endif