#include <iostream>

using namespace std;
void factorial(int num);

int main(){
    std::cout << "Input a number:";
    int num = 0;
    std::cin >> num;
    factorial(num);
}

void factorial(int num){
    static int counter = 0;
    static int factoredNum = 1;
    //the + 1 accounts for the repeating that would happen if you
    //multiply by 1
    if((counter + 1) == num){
        std::cout << "Factorial of " << num << " is: " << factoredNum << endl;
        return;
    } else {
        factoredNum *= num - counter;
        counter++;
        factorial(num);
        return;
    }
}
