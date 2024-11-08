#include<iostream>
using namespace std;
int main(){
int array_marks[]={54,768,453,897,56,8};
//for loop
cout<<"for loop"<<endl;
for (int i = 0; i < 6; i++)
{
    cout<<"the marks for " <<i<< " is " <<array_marks[i]<<endl;

}
int i=0;
//while loop
cout<<"while loop"<<endl;
while (i<6)
{
    cout<<"the marks for "<<i<< " is " <<array_marks[i]<<endl;
    i++;
}
//do-while loop
int j=0;
cout<<"do while loop"<<endl;
do
{
   cout<<"the marks for " <<j<< " is " <<array_marks[j]<<endl;
   j++;
} while (j<6);

return 0;
} 