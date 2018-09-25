#ifndef BOARD_HPP
#define BOARD_HPP

#include "pieces.hpp"

#define BOARD_LINE_WIDTH 6          // Width of each of the two lines that delimit the board
#define BLOCK_SIZE 16               // Width and Height of each block of a piece
#define BOARD_POSITION 320          // Center position of the board from the left of the screen
#define BOARD_WIDTH 10              
#define BOARD_HEIGHT 20             
#define MIN_VERTICAL_MARGIN 20   
#define MIN_HORIZONTAL_MARGIN 20    
#define PIECE_BLOCKS 5              // Number of horizontal and vertical blocks of a matrix piece

class Board
{
public:

	Board(Piece *gamePiece, int screenHeight);

	int getXPosInPixels(int pos);
	int getYPosInPixels(int pos);
	bool isFreeBlock(int x, int y);
	bool isPossibleMovement(int x, int y, int piece, int rotation);
	void storePiece(int x, int y, int piece, int rotation);
	void deletePossibleLines();
	bool isGameOver();

private:

	enum { POS_FREE, POS_FILLED };
	int gameBoard[BOARD_WIDTH][BOARD_HEIGHT];
	Piece *gamePieces;
	int screenHeight;

	void initBoard();
	void deleteLine(int y);
};

#endif
