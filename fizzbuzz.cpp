/*
3 - fizz
5 - buzz
3 + 5 fizz buzz
*/
#include <string>
#include <iostream>

int main(){

    for(int i = 1; i < 101; i++){
        if(i % 3 == 0 && i % 5 == 0){
            std::cout << "fizzbuzz" << std::endl;
        } else if(i % 3 == 0 && i%5 != 0){
            std::cout << "fizz" << std::endl;
        } else if(i %3 != 0 && i%5 == 0){
            std::cout << "buzz" << std::endl;
        } else {
            std::cout << i << std::endl;
        }
    }
}
