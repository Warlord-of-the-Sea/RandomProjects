#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

template<class T>
void selectionSort(T **array, int ROW, int COLUMN);

int main(){

    int ROW = 0, COLUMN = 0, magicNum = 100;

    cout << "Input row and column size in integer values: ";
    cin >> ROW >> COLUMN;

    int **array = new int * [ROW];

    //this for loop allots the memory for the columns
    for(int row = 0; row < ROW; row++){array[row] = new int [COLUMN];}

    for(int row = 0; row < ROW; row++){

        for(int column = 0; column < COLUMN; column++){
            int numToBeAdded = rand()%magicNum;
            array[row][column] = numToBeAdded;
        }
    }

    //this outputs the sorted arrays vertically
    cout << "\n-------Unsorted Array-------\n";
    for(int row = 0; row < ROW; row++){
        for(int column = 0; column < COLUMN; column++){
            cout << array[row][column] << "\t";
        }
        cout << endl;
    }

    selectionSort(array, ROW, COLUMN);

    cout << "\n------Sorted Array--------\n";
    //this outputs the sorted arrays vertically
    for(int row = 0; row < ROW; row++){
        for(int column = 0; column < COLUMN; column++){
            cout << array[row][column] << "\t";
        }
        cout << endl;
    }
}

/*this is a selection sort specifically for 2 dimensional arrays
this sorts the columns SEPERATELY from one another. so you will end up with
COLUMN amount of sorted arrays
*/
template<class T>
void selectionSort(T **array, int ROW, int COLUMN){
    //cout << "The sort function is called!" << endl;
    T lowestNum, temp;
    T comparedNum;
    int indexOfCurrentLowest = 0, counter = 0;
    for(int column = 0; column < COLUMN; column++){
        //cout << "Currently in column: " << column << endl;
        /*
        we reset the counter for the next column
        */
        counter = 0;
        for(int row = 0; row < ROW - 1; row++){
            //cout << "Current in row: " << row << endl;
            lowestNum = array[row][column];
            indexOfCurrentLowest = row;
            for(comparedNum = 1 + counter; comparedNum < ROW; comparedNum++){
                if(lowestNum > array[comparedNum][column]){
                    lowestNum = array[comparedNum][column];
                    indexOfCurrentLowest = comparedNum;
                } else {}//end of if else statement
            }//end of third for loop
            counter++;
            temp = array[row][column];
            array[row][column] = lowestNum;
            array[indexOfCurrentLowest][column] = temp;
        }//end of second for loop

    }//end of outer most for loop

}//end of selectionSort function
