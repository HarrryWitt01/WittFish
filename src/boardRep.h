#ifndef BoardRep_H
#define BoardRep_H

#include "position.h"
#include <cstdint>


class BoardRep {

    public:

        BoardRep();

        ~BoardRep();


        void printBoard(uint64_t board);

        uint64_t generatePawnMoves(int color);


        uint64_t whitePawnEastAttacks();

        uint64_t whitePawnWestAttacks();

        uint64_t blackPawnEastAttacks();

        uint64_t blackPawnWestAttacks();


        void renderGame();


    private:

        // int colorToMove;

        Position currPosition;

        const uint64_t NOT_A_FILE = 18374403900871474942;

        const uint64_t NOT_H_FILE = 9187201950435737471;


};




#endif