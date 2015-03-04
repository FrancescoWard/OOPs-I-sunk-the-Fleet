#ifndef CSHIP_H
#define CSHIP_H

#include <iostream>
#include "textGraphics.h"
using namespace std;

namespace Fleet
{
	class CShip
	{
	private:

	static const int SHIP_SIZE_ARRAYSIZE = 6; // size of the shipSize array
	// number of elements for each ship
	//const short shipSize[SHIP_SIZE_ARRAYSIZE] = {0, 2, 3, 3, 4, 5};

		/*----------------------------------------------------------------------------
	// enumerated type for ships
	//--------------------------------------------------------------------------*/
	enum Ship
	{
		SHIP_NOSHIP,		// 0
		SHIP_MINESWEEPER,   // 1 (1-5) -- used only for owner
		SHIP_SUB,		    // 2
		SHIP_FRIGATE,	    // 3
		SHIP_BATTLESHIP,	// 4
		SHIP_CARRIER,	    // 5
		SHIP_HIT,		    // 6 (6-7)-- used only for other side
		SHIP_MISSED,        // 7
	};

		Ship m_ship;
	public:
		CShip(Ship boat = SHIP_BATTLESHIP) {m_ship = boat;}
		operator Ship() {return m_ship;}
		ostream & print(ostream & sout);
		ostream & print();
		ostream & printName(ostream & sout);
	};
		ostream & operator<< (ostream & sout, CShip & a);
		ostream & operator>> (istream & sin, CShip & a);
}

#endif