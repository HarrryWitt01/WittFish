

#ifndef Position_H
#define Position_H

#include <cstdint>


// #define getBit(board, square) (board & (1ULL << square))

// #define setBit(board, square) (board |= (1ULL << square))

// #define popBit(board, square) (board &= ~(1ULL << square))

/*
TODO

- test if this works:
    #define popBit(board, square) (getBit(board, square) ? bitboard ^= (1ULL << square))
*/


class Position {


    public:


        Position();

        ~Position();

        int getColor();

        int getSquareFunc(uint64_t board, int index);

        void setBitFunc(int index);

        int popBitFunc(int index);

        void init();


    private:

        int colorToMove;

        uint64_t allPieces;

        uint64_t whitePieces;

        uint64_t blackPieces;

        uint64_t whitePawns;

        uint64_t blackPawns;



};





#endif