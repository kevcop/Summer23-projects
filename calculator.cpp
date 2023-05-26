#include <iostream>
#include <unistd.h>
#include <cmath>
using namespace std;
//calculator program

int addNums(int a, int b){
    cout<<a+b<<endl;
    return a+b;
}

int main(){
    int userInput1 = 0;
    int userInput2 =0;
    int userOp=0;
    int result =0;
    cout<<"Enter num #1"<<endl;
    cin>>userInput1;
    cout<<"Enter num #2"<<endl;
    cin>>userInput2;
    cout<<"Now choose what type of operation"<<endl;
    cin>>userOp;
    switch (userOp)
    {
    case 1:
    cout<<"Additon has been chosen!"<<endl;
        result = addNums(userInput1,userInput2);
        cout<<result<<endl;
        break;
    default:
        break;
    }
}