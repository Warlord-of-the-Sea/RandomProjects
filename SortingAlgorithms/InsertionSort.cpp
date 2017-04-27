#include <iostream>
#include <string>
#include <cstdlib>

void insertionSort(int array[]);

const int ARRAYSIZE = 20000;
int magicNum = 300;
int main(){
    int array[20000];

    for(int i = 0; i < ARRAYSIZE; i++){
        array[i] = rand()%magicNum;
    }
    //
    // for(int i = 0; i < ARRAYSIZE; i++){
    //     std::cout << array[i] << std::endl;
    // }

    insertionSort(array);

        //
        // for(int i = 0; i < ARRAYSIZE; i++){
        //     std::cout << std::endl << array[i] << std::endl;
        // }
}

void insertionSort(int array[]){

    int temp = 0;

    for(int i = 0; i < ARRAYSIZE; i++){

        for(int comparedInt = i + 1; comparedInt < ARRAYSIZE; comparedInt++){
            if(array[comparedInt] < array[i]){
                temp = array[comparedInt];
                array[comparedInt] = array[i];
                array[i] = temp;
            } else {}

        }

    }
}
