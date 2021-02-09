#include <iostream>
#include "stdio.h"

#include "linalg.h"
#include "my_lib.h"
#include "boost/version.hpp"

/**
 * @brief 
 * 
 */
void cout_hello_world(){
    std::cout << "cout: Hello BasicProject World" << std::endl;
}

linalg::aliases::float3 print_linalg_vector(){
    linalg::aliases::float3 myfloat3 {1,2,3};
    std::cout << "Vec: " << myfloat3[0] << ", " << myfloat3[1] << ", " << myfloat3[2] << std::endl;
    return myfloat3;
}

int print_boost_version(){
    std::cout << "Boot version: " << BOOST_VERSION << std::endl;
    return BOOST_VERSION;
}