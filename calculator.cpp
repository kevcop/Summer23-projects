#include <iostream>
#include <unistd.h>
#include <cmath>
using namespace std;
//calculator program

int addNums(int a, int b){
    cout<<a+b<<endl;
    return a+b;
}
int subNums(int a,int b){
    cout<<a-b<<endl;
    return a-b;
}
int divideNums(int a,int b){
    cout<<a/b<<endl;
    return a/b;
}
int multNums(int a,int b){
    cout<<a*b<<endl;
    return a*b;
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
        case 2:
        cout<<"Subtraction has been chosen!"<<endl;
        result = subNums(userInput1,userInput2);
        cout<<"The answer is: "<<result<<endl;
    default:
    case 3:
    cout<<"Division has been chosen"<<endl;
    result = divideNums(userInput1,userInput2);
    cout<<"the answer is: "<<result<<endl;
        break;
        case 4:
        cout<<"Multiplication has been chosen"<<endl;
        result = multNums(userInput1,userInput2);
        cout<<"The product is: "<<result<<endl;
}
}