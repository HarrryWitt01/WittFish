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

    


    BoardRep boardRep;


    boardRep.initAttackTables();

    boardRep.printPawnAttackTable();




    


}
