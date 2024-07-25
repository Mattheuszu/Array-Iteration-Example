/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <array> 

int main()
{
    std::array<int, 5> numbers {1, 2, 3, 4, 5};
    for(int n : numbers){
        std::cout << n << " ";
    }
    

    return 0;
}