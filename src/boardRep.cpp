
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



/*

TODO change the below function

I don't like generating all pawn moves at once and I don't think
I should directly mutate currPosition like that.

*/


/*
Generates normal forward moves for all pawns of a certain color.

Input:
color - White or black

Output:
None
*/
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
Generate and store a board making up all possible PSUEDO-LEGAL attacks by the
pawn of color color on square square. 

**Note: this does not cover check/checkmate or special moves like en
passant**

Input:

color - 0 for black, 1 for white
square - the location of the pawn

Output:
None.


*/
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



/*
Generate and store a board making up all possible PSUEDO-LEGAL attacks by the
knight on the specified square.

**Note: this does not cover check/checkmate**

Input:

square - the location of the knight

Output:
None.


*/
void BoardRep::maskKnightAttacks(int square) {
    // 
    uint64_t board = 0ULL;

    uint64_t attacks = 0ULL;

    SETBIT(board, square);

    int rank = square / 8;
    int file = square % 8;
    

    
    if (!(rank > 5 || file == 7)) {
        attacks |= board << 17;
    }


    if (!(rank > 5 || file == 0)) {
        attacks |= board << 15;
    }

    if (!(rank == 7 || file > 5)) {
        attacks |= board << 10;
    }

    if (!(rank == 7 || file < 2)) {
        attacks |= board << 6;
    }

    if (!(rank == 0 || file > 5)) {
        attacks |= board >> 6;
    }

    if (!(rank == 0 || file < 2)) {
        attacks|= board >> 10;
    }

    if (!(rank < 2 || file == 7)) {
        attacks |= board >> 15;
    }

    if (!(rank < 2 || file == 0)) {
        attacks |= board >> 17;
    }

  

    knightAttacks[square] = attacks;

}


/*
Generate and store a board making up all possible PSUEDO-LEGAL attacks by the
king on the specified square.

**Note: this does not cover check/checkmate**

Input:

square - the location of the knight

Output:
None.


*/
void BoardRep::maskKingAttacks(int square) {
    // TODO

    uint64_t board = 0ULL;

    uint64_t attacks = 0ULL;

    SETBIT(board, square);

    int rank = square / 8;
    int file = square % 8;

    (void) rank;

    // king can move omni-directional one square at a time
    // right
    if (file != 7) attacks |= board << 1;
    // left
    if (file != 0) attacks |= board >> 1;
    // up
    if (rank != 0) attacks |= board >> 8;
    //down
    if (rank != 7) attacks |= board << 8;
    // up left
    if (file != 0 && rank != 0) attacks |= board >> 9;
    // up right
    if (file != 7 && rank != 0) attacks |= board >> 7;
    // down left
    if (file != 0 && rank != 7) attacks |= board << 7;
    // down right
    if (file != 7 && rank != 7) attacks |= board << 9;



    kingAttacks[square] = attacks;


}

/*
Calculate attack vectors for all leaping pieces (pawns,
knights, and kings) for each square on the board.

Input:
None

Output:
None
*/
void BoardRep::initAttackTables() {

    
    for (int i = 0; i < 64; i++) {

        // generate pawn attacks
        maskPawnAttacks(WHITE, i);
        maskPawnAttacks(BLACK, i);


        // generate knight attacks
        maskKnightAttacks(i);

        // generate king attacks
        maskKingAttacks(i);

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