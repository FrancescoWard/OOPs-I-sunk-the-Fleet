#include "CShip.h"

#include "textGraphics.h"

using namespace std;

namespace Fleet
{
	//constructor
	/*CShip::CShip()
	{
		m_ship = SHIP_NOSHIP;
	}*/

	ostream & CShip::print(ostream & sout)
	{
		sout << ' ' ;
		switch(m_ship)
		{
			case SHIP_NOSHIP: sout << ' ';
				break;
			case SHIP_MINESWEEPER: sout << 'M';
				break;
			case SHIP_SUB: sout << 'S';
				break;
			case SHIP_FRIGATE: sout << 'F';
				break;
			case SHIP_BATTLESHIP: sout << 'B';
				break;
			case SHIP_CARRIER: sout << 'C';
				break;
			case SHIP_HIT: sout << 'H';
				break;
			case SHIP_MISSED: sout << MISS;
				break;
			default: sout << 'X';
		}
		return sout;
	}

	ostream & CShip::print()
	{
		//not sure
		cout << this;
		return cout;
	}

	ostream & CShip::printName(ostream & sout)
	{
		switch(m_ship)
		{
			case SHIP_NOSHIP: sout << "No Ship";
				break;
			case SHIP_MINESWEEPER: sout << "Mine Sweeper";
				break;
			case SHIP_SUB: sout << "Submarine";
				break;
			case SHIP_FRIGATE: sout << "Frigate";
				break;
			case SHIP_BATTLESHIP: sout << "Battleship";
				break;
			case SHIP_CARRIER: sout << "Aircraft Carrier";
				break;
			default: sout << 'X';
		}
		return sout;
	}

	ostream & operator<< (ostream & sout, CShip & a)
	{
		a.print();
		return sout;
	}

	//istream & operator>> (istream & sin, CShip & a)
	//{
	//	// Not sure
	//}
}