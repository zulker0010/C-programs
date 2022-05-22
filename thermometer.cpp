#include <iostream>
using namespace std;

//Test for variables and cin and cout.

int main() {
    double tempf, tempc;
   
    cout<<"Enter the temperature in Fahrenheit:";
    cin>>tempf;
    tempc=(tempf-32)/1.8;
    cout<<"The temperature is  "<<tempc<<" degrees Celsius\n";
   

return 0;
}
