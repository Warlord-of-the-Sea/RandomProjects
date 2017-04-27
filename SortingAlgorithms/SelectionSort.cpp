#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

void selectionSort(int **array, int ROW, int COLUMN);

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

    selectionSort(array, ROW, COLUMN);

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
void selectionSort(int **array, int ROW, int COLUMN){
    //cout << "The sort function is called!" << endl;
    double lowestNum = 0, temp = 0;
    int comparedNum = 0, indexOfCurrentLowest = 0, counter = 0;
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
