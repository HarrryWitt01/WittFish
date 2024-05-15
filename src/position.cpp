
#include "position.h"
#include "types.h"



Position::Position() {

    // initially white
    colorToMove = WHITE;

    allPieces = 18446462598732840960;

    whitePieces = 18446462598732840960;

    blackPieces = 65535;

    whitePawns = 71776119061217280;

    blackPawns = 65280;

}


int Position::getColor() {

    return colorToMove;
}

int Position::getSquareFunc(uint64_t board, int index) {

    return GETBIT(board, index);
}

void Position::setBitFunc(int index) {
    SETBIT(allPieces, index);
}

int Position::popBitFunc(int index) {
    return POPBIT(allPieces, index);
}


/*
Initialize board position to normal starting arrangement.
*/
void Position::init() {
    
}



Position::~Position() {

}



