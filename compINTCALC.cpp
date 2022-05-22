#include <iostream>
#include <string>

int main(){
    int t;
    double s, r, a;

    std::cout<<"ENTER DEPOSIT TIME PERIOD : \n";
    std::cin>>t;
    std::cout<<"ENTER CURRENT RATE OF INTEREST : \n";
    std::cin>>r;
    std::cout<<"ENTER DEPOSITED SUM :\n";
    std::cin>>s;
    a=s*(100+r)/100;



return 0;
}