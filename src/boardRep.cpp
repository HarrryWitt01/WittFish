
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
Generate and return the East attacks for all white pawns
set-wise.
*/
uint64_t BoardRep::whitePawnEastAttacks() {




    return (currPosition.whitePawns >> 7) & NOT_A_FILE;
}

/*
Generate and return the West attacks for all white pawns
set-wise.
*/
uint64_t BoardRep::whitePawnWestAttacks() {




    return (currPosition.whitePawns >> 9) & NOT_H_FILE;
}


/*
Generate and return the East attacks for all white pawns
set-wise.
*/
uint64_t BoardRep::blackPawnEastAttacks() {




    return (currPosition.blackPawns << 9) & NOT_A_FILE;
}


/*
Generate and return the West attacks for all white pawns
set-wise.
*/
uint64_t BoardRep::blackPawnWestAttacks() {




    return (currPosition.blackPawns << 7) & NOT_H_FILE;
}


/*
Render the game board for the user.

*/
void BoardRep::renderGame() {


    // go through each color and piece individually


    // white will be red

    // black will be blue
    



}