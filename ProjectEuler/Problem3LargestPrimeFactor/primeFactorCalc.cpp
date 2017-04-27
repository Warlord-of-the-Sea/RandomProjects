#include <iostream>
#include <string>
#include <vector>

bool isDivisible(int numToDivide);

void getPrimeNumbers(int iNum){
	int initialNum = iNum;
	int currentNum = iNum;
	std::vector<int> primeFactors;

	for(int i = 1; i <= initialNum; i++){
		if(initialNum % i == 0){
			std::cout << "Number that divides w/o decimal: " << i << std::endl;
		} else {}//end of if else
	
	}//end of for loop
/*
	while(isDivisible(currentNum)){
		if(currentNum % 2 == 0){
			currentNum /= 2;
			std::cout << "Factor: 2" << std::endl;
			primeFactors.push_back(2);
		} else if (currentNum % 3 == 0){
			currentNum /= 3;
			std::cout << "Factor: 3" << std::endl;
			primeFactors.push_back(3);
		} else if (currentNum % 5 == 0) {
			currentNum /= 5;
			std::cout << "Factor: 5" << std::endl;
			primeFactors.push_back(5);
		} else if (currentNum % 7 == 0) {
			currentNum /= 7;
			std::cout << "Factor: 7" << std::endl;
			primeFactors.push_back(7);
		}//end of if else statement

	}//end of while loop
*/
	primeFactors.push_back(currentNum);
	std::cout << "Indivisible Factor: " << currentNum << std::endl;
}//end of getPrimeNumbers function

bool isDivisible(int numToDivide){
	if(numToDivide % 2 == 0 || 
		numToDivide % 3 == 0 || 
		numToDivide % 5 == 0 || 
		numToDivide % 7 == 0){
		std::cout << "Number can be divided by 2, 3, 5 or 7 \n";
		return true;
	} else {
		return false;
	}//end of if else statement
}//end of isDivisible function

int main(){
	long long int mainNumber = 600851475143;//the initial number to be factored
	getPrimeNumbers(mainNumber);
	
	return 0;
}//end of main

