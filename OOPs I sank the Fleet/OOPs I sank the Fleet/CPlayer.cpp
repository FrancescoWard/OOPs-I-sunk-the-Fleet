#include "CPlayer.h"

namespace Fleet
{
	/*CPlayer::CPlayer(unsigned short player, char size)
	{
		m_whichPlayer = player;
		m_gridSize = size;
	}*/

	CPlayer::~CPlayer()
	{
		//calls deleteMem()
	}

	//mutators
	void CPlayer::setGridSize(char size)
	{
		m_gridSize = size;
	}

	//void CPlayer::setCell(short grid, CCell cell , CShip ship)
	//{
	//	// not sure m_gameGrid = grid;
	//}

	ostream & CPlayer::printGrid(ostream & sout, short whichGrid)
	{
		//prints appropriate grid
	}
}