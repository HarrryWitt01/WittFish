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

- Implement magic bitboards for sliding pieces
    - generate sliding occupancy mask tables
    - generate sliding attack tables
    - implement bit count procedure
    - implement bit index procedure
    - find magic numbers to be used for magic bitboards
    - implement magic bitboard algorithm
    

*/




void help() {

    std::cout << "Placeholder for now" << std::endl;




}



int main(int argc, char *argv[])
{

    (void) argc;
    (void) argv;

    


    BoardRep boardRep;


    boardRep.initAttackTables();

    boardRep.printPawnAttackTable();




    


}
