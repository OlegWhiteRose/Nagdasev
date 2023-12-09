#include <iostream>

#include "man.hpp"
#include "woman.hpp"
#include "pair.hpp"

int main(){
    Human::Man boy; Human::Woman girl;

    std::cout << CanBePair(girl, boy);

    return 0;
}