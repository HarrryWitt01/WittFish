#ifndef BoardRep_H
#define BoardRep_H

#include "position.h"


class BoardRep {

    public:

        BoardRep();

        ~BoardRep();


        void printBoard();


    private:

        // int colorToMove;

        Position currPosition;


};




#endif