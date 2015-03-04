#include "CDirection.h"

namespace Fleet
{
	ostream & CDirection::print(ostream & sout)
	{
		if (DIRECTION_HORIZONTAL == m_direction)
			sout << "H";
		else
			sout << "V";
		return sout;
	}

	ostream & CDirection::print()
	{
		cout << this;
		return cout;
	}

	ostream & operator<< (ostream & sout, CDirection & a)
	{
		a.print();
		return sout;
	}

	//istream & operator>> (istream & sin, CDirection & a)
	//{
	//	//not sure
	//}
}