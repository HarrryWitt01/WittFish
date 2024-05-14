
#include <iostream>
#include "boardRep.h"
#include "position.h"

BoardRep::BoardRep() {


    // initialize board position


}



BoardRep::~BoardRep() {
    
}


void BoardRep::printBoard() {

    // for (int rank = 0; rank < 8; rank++) {

    //     for (int file = 0; file < 8; file++) {

    //         int idx = rank * 8 + file;

    //         // int square = currPosition.getSquare(idx);
    //         if (currPosition.getSquare(idx)) {
    //             printf("1 ");
    //         } else [
    //             printf("0 ");
    //         ]

           

        // printf("fuck you");
    //     }

    //     std::cout<<std::endl;


    // }

    std::cout<<"  A B C D E F G H"<<std::endl;

    for (int rank = 0; rank < 8; rank++) {


        for (int file = 0; file < 8; file++) {
            

            if (file == 0) {
                std::cout<<8 - rank<<" ";
            }

            // std::cout<<"testing print";
            int currSquare = rank * 8 + file;

            if (currPosition.getSquareFunc(currSquare)) {
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



    // if (currPosition.getSquare(0)) {
    //     printf("AAH");
    // } else {
    //     printf("OOH");
    // }


}