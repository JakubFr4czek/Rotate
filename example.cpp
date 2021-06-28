#include <iostream>
#include "Rotate.h"

int main(){

    
    std::vector<std::vector<int>> arr = { { {1}, {2}, {3} },
                                          { {4}, {5}, {6} },
                                          { {7}, {8}, {9} } };

    clc::writeArray<int>(arr);

}