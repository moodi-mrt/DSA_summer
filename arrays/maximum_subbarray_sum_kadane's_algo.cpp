#include<iostream>
using namespace std;

int main(){
int size;
cout<<"Enter the size of an array: "<<endl;
cin>>size;

int arr[size];
cout<<"Enter the array elements: "<<endl;
for (int i = 0; i < size; i++)
{
    cin>>arr[i];
}


//find the maximum subarray elements using kadane's algorithm
int sum = 0;
int maxi = 0;
for (int i = 0; i < size; i++)
{
    sum = sum + arr[i];
    if(sum >maxi){
        maxi = sum;
    }
    if (sum < 0)
    {
        sum = 0;
    }
    
}

cout<<maxi<<endl;

    return 0;
}