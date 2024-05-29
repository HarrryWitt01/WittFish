
#include <iostream>
#include "boardRep.h"
#include "position.h"
#include "types.h"





BoardRep::BoardRep() {


    // initialize board position
    currPosition.init();

}



BoardRep::~BoardRep() {
    
}


void BoardRep::printBoard(uint64_t board) {


    std::cout<<"  A B C D E F G H"<<std::endl;

    for (int rank = 0; rank < 8; rank++) {


        for (int file = 0; file < 8; file++) {
            

            if (file == 0) {
                std::cout<<8 - rank<<" ";
            }

            // std::cout<<"testing print";
            int currSquare = rank * 8 + file;

            if (GETBIT(board, currSquare)) {
                // printf("poopy");
                std::cout<<1<<" ";
            } else {
                std::cout<<0<<" ";
            }

            

        }


        std::cout<<8 - rank;

        std::cout<<std::endl;


    }

    std::cout<<"  A B C D E F G H"<<std::endl;




    std::cout<<"board num: "<<board<<std::endl;



    


}



uint64_t BoardRep::generatePawnMoves(int color) {

    // for now, don't worry about enemy pieces
    // should just be a shift by 8 

    if (color == WHITE) {
        // generate white pawn moves

        return currPosition.whitePawns >> 8;

    } else {
        // generate black pawn moves
        return currPosition.blackPawns << 8;
    }


}

/*
Generate legal moves for color's king.

DISCLAIMER: this will currently generate psuedo-legal moves.

TODO incorporate checks

*/
uint64_t BoardRep::generateKingMoves(int color) {

    if (color == WHITE) {

        return 0;
    } else {
        return 0;
    }


}


// /*
// Generate and return the East attacks for all white pawns
// set-wise.
// */
// uint64_t BoardRep::whitePawnEastAttacks() {




//     return (currPosition.whitePawns >> 7) & NOT_A_FILE;
// }

// /*
// Generate and return the West attacks for all white pawns
// set-wise.
// */
// uint64_t BoardRep::whitePawnWestAttacks() {




//     return (currPosition.whitePawns >> 9) & NOT_H_FILE;
// }


// /*
// Generate and return the East attacks for all white pawns
// set-wise.
// */
// uint64_t BoardRep::blackPawnEastAttacks() {




//     return (currPosition.blackPawns << 9) & NOT_A_FILE;
// }


// /*
// Generate and return the West attacks for all white pawns
// set-wise.
// */
// uint64_t BoardRep::blackPawnWestAttacks() {




//     return (currPosition.blackPawns << 7) & NOT_H_FILE;
// }


void BoardRep::maskPawnAttacks(int color, int square) {

    uint64_t board = 0ULL;

    uint64_t attacks = 0ULL;

    SETBIT(board, square);


    if (color == WHITE) {
        
        attacks |= (board >> 9) & NOT_H_FILE;
        attacks |= (board >> 7) & NOT_A_FILE;



    } else {

        attacks |= (board << 9) & NOT_A_FILE;
        attacks |= (board << 7) & NOT_H_FILE;


    }

    pawnAttacks[color][square] = attacks;


}


void BoardRep::maskKnightAttacks(int color, int square) {
    // TODO
}
void BoardRep::maskKingAttacks(int color, int square) {
    // TODO
}

void BoardRep::initAttackTables() {

    
    for (int i = 0; i < 64; i++) {

        // generate pawn attacks
        maskPawnAttacks(WHITE, i);
        maskPawnAttacks(BLACK, i);


        // generate knight attacks
        maskKnightAttacks(WHITE, i);
        maskKingAttacks(BLACK, i);

    }

}




void BoardRep::printPawnAttackTable() {

    std::cout<< "------------ WHITE PAWN ATTACKS ----------------"<<std::endl;

    // square 0 is A8

    

    for (int i = 0; i < 64; i++) {
        std::cout<< "square: "<< i << std::endl;

        printBoard(pawnAttacks[WHITE][i]);

    }

    printf("\n\n");

    std::cout<< "------------ BLACK PAWN ATTACKS ----------------"<<std::endl;


    for (int i = 0; i < 64; i++) {

        std::cout<< "square: "<< i << std::endl;

        printBoard(pawnAttacks[BLACK][i]);
    }
}






/*
Render the game board for the user.

*/
void BoardRep::renderGame() {


    // go through each color and piece individually


    // white will be red

    // black will be blue
    



}