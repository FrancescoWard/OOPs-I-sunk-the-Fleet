#ifndef CSHIPINFO_H
#define CSHIPINFO_H
#include <iostream>
#include "CShip.h"
#include "CDirection.h"
#include "CCell.h"

using namespace std;

namespace Fleet
{
	class CShipInfo
	{
	private:
		CShip m_name;
		CDirection m_orientation;
		CCell m_bowLocation;
		short m_piecesLeft;
	public:
		CShipInfo(CShip name, CDirection dir, CCell cell, short pieces);		//constructor
		ostream & print(ostream & sout);
		ostream & print();

		//Accessors
		CShip getName() {return m_name;}
		CDirection getOrientation() {return m_orientation;}
		CCell getBowLocation() {return m_bowLocation;}
		short getPiecesLeft() {return m_piecesLeft;}

		//Mutators
		void setName(CShip); //not sure
		void setOrientation(CDirection); //not sure
		void setBowLocation(CCell); // not sure
		void setPiecesLeft(short); //not sure

		//operators
		CShipInfo operator-- ();

		bool isSunk();

		static const short shipSize[6];		//number of elements in each ship
	};

	ostream & operator<<(ostream & sout, CShipInfo & a);
}
#endif