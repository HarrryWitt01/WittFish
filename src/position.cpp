
#include "position.h"




Position::Position() {

    // initially white
    colorToMove = 1;

    allPieces = 10;

    whitePieces = 0;

    blackPieces = 0;

    whitePawns = 0;

    blackPawns = 0;

}


int Position::getColor() {

    return colorToMove;
}

int Position::getSquareFunc(int index) {

    return getBit(allPieces, index);
}

void Position::setBitFunc(int index) {
    setBit(allPieces, index);
}

int Position::popBitFunc(int index) {
    return popBit(allPieces, index);
}



Position::~Position() {

}



