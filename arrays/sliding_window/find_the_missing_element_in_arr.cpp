#include<iostream>
using namespace std;

int main(){
int size;
cout<<"Enter the size: "<<endl;
cin>>size;
int arr[size-1];

cout<<"Enter the array elements: "<<endl;
for (int i = 0; i < size-1; i++)
{
    cin>>arr[i];
}

//find the missing element
int sum = 0;
int T_sum = 0;

T_sum = size*(size+ 1)/2;

for (int i = 0; i < size-1; i++)
{
    sum += arr[i];
}

int missing_number = T_sum - sum;
cout<<"The missing number is : "<<missing_number<<endl;





    return 0;
}