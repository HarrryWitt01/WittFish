#ifndef BoardRep_H
#define BoardRep_H

#include "position.h"
#include <cstdint>


class BoardRep {

    public:

        BoardRep();

        ~BoardRep();


        void printBoard(uint64_t board);

        

        void maskPawnMoves(int color, int square);

        void maskPawnAttacks(int color, int square);

        void maskKnightAttacks(int square);

        void maskKingAttacks(int square);

        void initAttackTables();


        // pre-calculated attack tables

        uint64_t pawnAttacks[2][64];
        uint64_t pawnMoves[2][64];


        uint64_t knightAttacks[64];
        uint64_t kingAttacks[64];



        void renderGame();

        void printPawnAttackTable();


    private:

        // int colorToMove;

        Position currPosition;

        const uint64_t NOT_A_FILE = 18374403900871474942ULL;

        const uint64_t NOT_H_FILE = 9187201950435737471ULL;


};




#endif