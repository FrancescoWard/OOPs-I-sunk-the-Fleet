#ifndef CDIRECTION_H
#define CDIRECTION_H
#include <iostream>

using namespace std;

namespace Fleet
{
	class CDirection
	{
	private:
		enum Direction
		{
			DIRECTION_HORIZONTAL, // 0
			DIRECTION_VERTICAL	// 1
		};
		Direction m_direction;
	public:
		CDirection(Direction orientation = DIRECTION_HORIZONTAL) {m_direction = orientation;}
		operator Direction() {return m_direction;}
		ostream & print(ostream & sout);
		ostream & print();
		
	};
		ostream & operator<<(ostream & sout, CDirection & a);
		istream & operator>>(istream & sin, CDirection & a);
}
#endif