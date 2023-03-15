#include <iostream>
#include "RingBuffer.hpp"


int main() {
    RingBuffer rb1(10);
    rb1.add(1);
    rb1.add(2);
    rb1.add(3);
    rb1.add(4);
    std::cout << rb1.getElem()<< rb1.takeElem() << rb1.takeElem()<< rb1.takeElem()<< rb1.takeElem();
    //std::cout <<rb1.getElem();
    std::cout << rb1.isEmpty();
    return 0;
}