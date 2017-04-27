#include <iostream>
#include <vector>
#include <string>

//using namespace std;

int main(){
	std::vector<int> allFib;	
	allFib.push_back(1);
	allFib.push_back(2);

	int firstFib;
	int secondFib;
	int nextFib;
	int fibCount = 0;
	int evenFibs = 0;

/*	while(allFib.back() < 4000000){
		int newestFibNum;
		//dick -Darryl
		for(fibCount = 1; allFib.back() < 4000000; fibCount++){
			
		}//end of for loop	
		int firstFib = allFib[i];
		int secondFib = allFib[i + 1];
	}//end of while loop
*/
	do {
		firstFib = allFib[fibCount];
		secondFib = allFib[fibCount + 1];
		std::cout << secondFib << std::endl;
		nextFib = firstFib + secondFib;
		allFib.push_back(nextFib);
		fibCount++;
	
	} while (allFib.back() < 4000000);
	/**TODO make sure to delete the last element in the arraylist
	because its greater than 4,000,000. This is when it quits out
	of the do-while loop
	*/
	allFib.pop_back();

	for (int i = 0; i < allFib.size(); i++){
		if(allFib[i] % 2 == 0){
			evenFibs += allFib[i];
		} else {}//end if else statement
	}//end of for loop
	
	std::cout << "Combined Even Fibbs: " << evenFibs << std::endl; 
	
}//end of main

