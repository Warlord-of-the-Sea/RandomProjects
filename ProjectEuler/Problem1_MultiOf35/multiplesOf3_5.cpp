#include <iostream>
#include <vector>

void multiplesOf(int num1, int num2, int maxNum){

	int currentMultiplier = 0;
	int totalOfMultiples = 0;
	int mMulti;	
	std::vector<int> multiples;
	
	for (int i = 0; i < maxNum; i++){
		if(i % 3 == 0 || i % 5 == 0){
			totalOfMultiples += i;
		} else {}
	}
/*
	while(currentMultiplier < maxNum){
		mMulti = num1 * currentMultiplier;
		multiples.push_back(mMulti);
		mMulti = num2 * currentMultiplier;
		multiples.push_back(mMulti);
			
		//std::cout << currentMultiplier << std::endl;		
		currentMultiplier++;
		
	}//end of while loop
	

	currentMultiplier = 0;//need to reset the multiplier
				//for the next number
	while(currentMultiplier < maxNum){
		multiples.push_back(num2 * currentMultiplier);
		//std::cout << currentMultiplier << std::endl;		
		currentMultiplier++;

	}//end of while loop
	
	for(int i = 0; i < multiples.size(); i++){
		std::cout << "Multiple value: " << multiples[i] << std::endl;
		totalOfMultiples += multiples[i];
	}//end of for loop
*/
	std::cout << "Value of all multiples: " << totalOfMultiples << std::endl;
		
}//end of multiplesOf function
int main(){
	multiplesOf(3, 5, 1000);
	return 0;
}
