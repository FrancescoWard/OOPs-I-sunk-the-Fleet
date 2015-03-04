#include "CShipInfo.h"

namespace Fleet
{
	CShipInfo::CShipInfo(CShip name, CDirection dir, CCell cell, short pieces)
	{
		m_name = name;
		m_orientation = dir;
		m_bowLocation = cell;
		m_piecesLeft = pieces;
	}

	/*ostream & CShipInfo::print(ostream & sout)
	{
		//not sure how to print
	}*/

	ostream & CShipInfo::print()
	{
		cout << this;
		return cout;
	}

	//mutators
	void CShipInfo::setName(CShip ship)
	{
		m_name = ship;
	}

	void CShipInfo::setOrientation(CDirection orientation)
	{
		m_orientation = orientation;
	}

	void CShipInfo::setBowLocation(CCell location)
	{
		m_bowLocation = location;
	}

	void CShipInfo::setPiecesLeft(short pieces)
	{
		m_piecesLeft = pieces;
	}

	//operators
	CShipInfo CShipInfo::operator--()
	{
		m_piecesLeft -= 1;
		return *this;
	}

	//not sure
	bool CShipInfo::isSunk()
	{
		if (0 == m_piecesLeft)
		return true;
	}

	ostream & operator<<(ostream & sout, CShipInfo & a)
	{
		a.print();
		return sout;
	}
}