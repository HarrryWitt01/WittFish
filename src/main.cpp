#include <iostream>
#include "engine.h"
#include <cstring>


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

    std::cout << "Specify -h for help page" << std::endl;

   


    if (argc > 1) {


        if (std::strcmp(argv[1], "-h") == 0) {
            
            help();

        }

    } else {
        Engine eng;


        eng.gameLoop();

    }



    


}
