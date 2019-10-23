#include "Board.h"
#include "assert.h"

Board::Board(Graphics & gfx)
	:
	gfx(gfx)
{}

void Board::DrawCell(const Location & loc, Color c)
{
	assert(loc.x >= 0);
	assert(loc.x <= width);
	assert(loc.y >= 0);
	assert(loc.y <= height);

	gfx.DrawRectDim(loc.x*dimension, loc.y*dimension, 19, 19, c);
}

int Board::GetGridWidth() const
{
	return width;
}

int Board::GetGridHeight() const
{
	return height;
}

bool Board::isInsideBoard(const Location & loc) const
{
	return loc.x >= 1 && loc.x < width-1 &&
		loc.y >= 1 && loc.y < height-1;
}
