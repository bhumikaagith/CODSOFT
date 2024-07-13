#include<bits/stdc++.h>
using namespace std;
int main(){
/*Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/
// A - addition , S - subtraction , M - multiplication , D - division
int n1,n2;
int calculator;
cout<<"Enter number 1:";
cin>>n1;
cout<<"Enter number 2:";
cin>>n2;
cout<<"PRESS 1 for addition , 2 for subtraction , 3 for multiplication , 4 for division"<<endl;
cin>>calculator;
switch (calculator)
{
case 1 :
    cout<<"answer is:"<<" "<<(n1+n2);
    break;
case 2 :
cout<<"answer is:"<<" "<<(n1-n2);
    break;
case 3 :
cout<<"answer is:"<<" "<<(n1*n2);
    break;
case 4 :
cout<<"answer is:"<<" "<<(n1/n2);
    break;
default:
cout<<"ERROR!!";
    break;
}
return 0;


}