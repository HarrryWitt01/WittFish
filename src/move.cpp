


#include "move.h"
#include <string>
#include <iostream>


Move::Move(Square To, Square From) {

    toSq = To;
    fromSq = From;


}

std::string Move::sqStr(Square s) {

    (void) s;
    
    return "00";
}




Move::~Move() {

}



// std:: toString() {

//     // std::cout << std::to_string(toSq) << std::to_string(fromSq); 




// }



