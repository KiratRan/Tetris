#ifndef PIECES_HPP
#define PIECES_HPP

class Piece
{
public:
	int getType(int piece, int rotation, int xCoord, int yCoord);
	int getInitialX(int piece, int rotation);
	int getInitialY(int piece, int rotation);
};

#endif

