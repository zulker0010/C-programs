#include <iostream>
using namespace std;

int main(){
    double  w, h, BMI;

    //Ask for user height
    std::cout<<"Enter your height (m) :";
    std::cin>>h;

    //Ask for user weight
    std::cout<<"Enter your weight (kg) :";
    std::cin>>w;

    BMI=w/(h*h);
    std::cout<<"Your BMI is: "<<BMI;

return 0;
}