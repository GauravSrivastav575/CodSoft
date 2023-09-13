#include<iostream>
#include<math.h>
using namespace std;
int main(){
char op;
cout<<"Enter the operation you want to perform (+ , - , * , / ) "<<endl;
cin>>op;
float a,b;
cout<<"Enter the first number(a)"<<endl;
cin>>a;
cout<<"Enter the second number(b)"<<endl;
cin>>b;
switch(op){
    case '+' :
     cout<<"The sum of two number is : "<<a+b<<endl;
     break;
    
    case '-' :
     cout<<"The difference of two number is : "<<a-b<<endl;
     break;

    case '*' :
     cout<<"The multiplication of two number is : "<<a*b<<endl;
     break;

    case '/' :
     cout<<"The division of two number is : "<<float(a/b)<<endl;
     break;

    default:
    cout<<"Invalid operator"<<endl;
    break;
    
}
return 0;
}