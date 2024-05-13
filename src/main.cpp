#include <iostream>
#include "engine.h"
#include <cstring>

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
