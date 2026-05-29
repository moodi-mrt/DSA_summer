#include<iostream>
using namespace std; 

int main(){
int number;
cout<<"Enter the number : "<<endl;
cin>>number;
int digit;
int reverse = 0;;
while (number != 0)
{
digit = number %10;

    reverse *= 10 + digit;

    number /=10;
}

cout<<reverse;




    return 0;
}