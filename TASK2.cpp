#include<bits/stdc++.h>
using namespace std;
int main(){
/*Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/
// A - addition , S - subtraction , M - multiplication , D - division
float n1,n2;
char calculator;
cout<<"Enter number 1:";
cin>>n1;
cout<<"Enter number 2:";
cin>>n2;
cout<<"PRESS + for addition , - for subtraction , * for multiplication , / for division"<<endl;
cin>>calculator;
switch (calculator)
{
case '+' :
    cout<<"answer is:"<<" "<<(n1+n2);
    break;
case '-' :
cout<<"answer is:"<<" "<<(n1-n2);
    break;
case '*' :
cout<<"answer is:"<<" "<<(n1*n2);
    break;
case '/' :
if(n2==0){
    cout<<"division by zero is undefined";
}
else{
cout<<"answer is:"<<" "<<(n1/n2);}
    break;
default:
cout<<"ERROR!!";
    break;
}
cout<<endl<<"all check!!";
return 0;

}