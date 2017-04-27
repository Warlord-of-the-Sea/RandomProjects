#include <iostream>

using namespace std;

void BubbleSort(int array[], int& arraySize);

int main(){

  int arraySize = 10;
  int array[10] = {10, 5, 4, 2, 3, 1, 7, 8, 20};

  BubbleSort(array, arraySize);

}

void BubbleSort(int array[], int& arraySize){
  int temp = 0;
  bool swappedValues = true;//initially set to true in order to go through the
  //function at least once

  //for loop to print out the values BEFORE they are sorted
  for(int i = 0; i < arraySize; i++){
    if(i == arraySize - 1){
        cout << array[i] << endl;
    } else {
    cout << array[i] << " ";
    }
  }//end of for loop

  while(swappedValues == true){
    swappedValues = false;
    for(int i = 0; i < arraySize - 1; i++){

      if (array[i] > array[i + 1]){
        temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;

        swappedValues = true;
      }
    }//end of for loop
  }//end of while loop

  //for loop to print out the values AFTER they are sorted
  for(int i = 0; i < arraySize; i++){
    if(i == arraySize - 1){
        cout << array[i] << endl;
    } else {
    cout << array[i] << " ";
    }
  }//end of for loop
}//end of BubbleSort function
