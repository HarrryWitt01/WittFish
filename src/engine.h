
#ifndef Engine_H
#define Engine_H

#include "boardRep.h"
#include "move.h"

class Engine {

    public:

        // constructor
        Engine();

        // destructor
        ~Engine();

        void gameLoop();



    private:


        int state;
        
        BoardRep board;


};

#endif