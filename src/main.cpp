#include <cstdint>
#include <iostream>
#include <cstring>
// #include "engine.h"
#include "types.h"


/*


m     m mmmmm mmmmmmmmmmmmmm mmmmmm mmmmm   mmmm  m    m
#  #  #   #      #      #    #        #    #"   " #    #
" #"# #   #      #      #    #mmmmm   #    "#mmm  #mmmm#
 ## ##"   #      #      #    #        #        "# #    #
 #   #  mm#mm    #      #    #      mm#mm  "mmm#" #    #


Author: Harry Witt

*/




/*

TODO

- Enumerate squares
- Create pre-computed board positions
- Create pre-computed attack tables
- See position.h


*/




void help() {

    std::cout << "Placeholder for now" << std::endl;




}



int main(int argc, char *argv[])
{

    // read args

    // what args do i want tho?

    //TODO decide on args


    // TODO implement UCI
    // for now, just use long algebraic notation

    // std::cout << "Specify -h for help page" << std::endl;

   


    // if (argc > 1) {


    //     if (std::strcmp(argv[1], "-h") == 0) {
            
    //         help();

    //     }

    // } else {
    //     Engine eng;


    //     eng.gameLoop();

    // }


    

    // first, do white pawns.


    // a2 -> h2
    // uint64_t board;


    
    std::cout<<static_cast<int>(Square::a2)<<std::endl;

    std::cout<<static_cast<int>(Square::h2)<<std::endl;

    uint64_t board = 0;


    int currSquare = static_cast<int>(Square::a8);

    while (currSquare <= static_cast<int>(Square::h7)) {

        SETBIT(board, currSquare);

        currSquare++;

    }


    // currSquare = static_cast<int>(Square::a2);


    // while (currSquare <= static_cast<int>(Square::h1)) {


    //     SETBIT(board, currSquare);

    //     currSquare++;
    // }


    // print the board


    // std::cout<<"  A B C D E F G H"<<std::endl;

    // for (int rank = 0; rank < 8; rank++) {


    //     for (int file = 0; file < 8; file++) {
            

    //         if (file == 0) {
    //             std::cout<<8 - rank<<" ";
    //         }

    //         int currSquare = rank * 8 + file;

    //         if (GETBIT(board, currSquare)) {
    //             std::cout<<1<<" ";
    //         } else {
    //             std::cout<<0<<" ";
    //         }

            

    //     }


    //     std::cout<<8 - rank;

    //     std::cout<<std::endl;


    // }

    // std::cout<<"  A B C D E F G H"<<std::endl;




    // std::cout<<"board num: "<<board<<std::endl;






    


}
