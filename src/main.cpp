#include <cstdint>
#include <iostream>
#include <cstring>
// #include "engine.h"
#include "boardRep.h"
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

    (void) argc;
    (void) argv;

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


    
    // std::cout<<static_cast<int>(Square::a2)<<std::endl;

    // std::cout<<static_cast<int>(Square::h2)<<std::endl;

    // uint64_t board = 0;


    // int currSquare = static_cast<int>(Square::a8);

    // while (currSquare <= static_cast<int>(Square::h7)) {

    //     SETBIT(board, currSquare);

    //     currSquare++;

    // }


    BoardRep boardRep;


    boardRep.initAttackTables();

    boardRep.printPawnAttackTable();





    


}
