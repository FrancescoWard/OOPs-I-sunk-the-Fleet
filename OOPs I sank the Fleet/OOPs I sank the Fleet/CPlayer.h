#ifndef CPLAYER_H
#define CPLAYER_H
#include <iostream>
#include "CShipInfo.h"
#include "CShip.h"

namespace Fleet
{
	class CPlayer
	{
	private:
		unsigned short m_whichPlayer;
		short m_piecesLeft;			//number of parts of fleet left unsunk
		CShipInfo m_ships[6];		//number of ships in fleet, exclude0
		char m_gridSize;			//L or S large or small
		CShip** m_gameGrid[2];		//array of 2 2-dimensional grids
	public:
		// not done, lots more to do CPlayer(unsigned short player = 0, char size = 'S');		//constructor

		//needs copy constructor

		~CPlayer();			//destructor

		//accessors
		unsigned short getWhichPlayer() {return m_whichPlayer;}
		short getPiecesLeft() {return m_piecesLeft;}
		char getGridSize() {return m_gridSize;}

		//mutators
		void setGridSize(char);
		//not sure void setCell(short , CCell , CShip );
		ostream & printGrid(ostream & sout, short whichGrid);		//prints grid

	};
}
#endif