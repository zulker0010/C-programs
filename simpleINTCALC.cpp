#include <iostream>
#include <string>

int main(){
    int time;
    double rate, sum, amount;

    std::cout<<"ENTER DEPOSIT TIME PERIOD : \n";
    std::cin>>time;
    std::cout<<"ENTER CURRENT RATE OF INTEREST : \n";
    std::cin>>rate;
    std::cout<<"ENTER DEPOSITED SUM : \n";
    std::cin>>sum;
    amount=rate*sum*time;
    std::cout<<"YOUR INTEREST AMOUNT IS "<<amount;



return 0;
}