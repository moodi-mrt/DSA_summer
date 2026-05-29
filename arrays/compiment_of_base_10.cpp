#include<iostream>
using namespace std;


int main(){
int number;

cout<<"Enter the number: "<<endl;
cin>>number;
int digit;
int compliment = 0;
while (number != 0)
{
    digit = number % 10;
    if (digit == 0)
    {
        digit +=1;
    }
    else if (digit == 1)
    {
        digit *=0;
    }

    compliment = compliment*10 + digit;
    
    number /=10;
}

cout<<"The complimenet of a number is : "<<compliment<<endl;

    return 0;
}