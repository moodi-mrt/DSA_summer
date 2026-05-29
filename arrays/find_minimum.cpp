#include<iostream>
#include<climits>
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


//find the minimum element in the array:

int min = INT_MAX;
for (int i = 0; i < size; i++)
{
    if (arr[i] < min)
    {
        min = arr[i];
    }

    cout<<"Enter the minimum element is : "<<min<<endl;
    
}


    return 0;
}