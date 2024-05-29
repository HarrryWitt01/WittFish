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

        uint64_t generateKingMoves(int color);


        // uint64_t whitePawnEastAttacks();

        // uint64_t whitePawnWestAttacks();

        // uint64_t blackPawnEastAttacks();

        // uint64_t blackPawnWestAttacks();

        void maskPawnAttacks(int color, int square);

        void maskKnightAttacks(int color, int square);

        void maskKingAttacks(int color, int square);

        void initAttackTables();


        // pre-calculated attack tables

        uint64_t pawnAttacks[2][64];
        uint64_t knightAttacks[2][64];
        uint64_t kingAttacks[2][64];



        void renderGame();

        void printPawnAttackTable();


    private:

        // int colorToMove;

        Position currPosition;

        const uint64_t NOT_A_FILE = 18374403900871474942;

        const uint64_t NOT_H_FILE = 9187201950435737471;


};




#endif