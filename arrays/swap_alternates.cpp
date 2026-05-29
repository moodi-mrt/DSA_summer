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

//swap the alternates;

int left = 0;
int right = 1;
int temp;

for (int i = 0; i < size-1; i+=2)
{
    temp = arr[left];
    arr[left] = arr[right];
    arr[right]= temp;
    left +=2;
    right +=2;
}

// the final array
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}



    return 0;
}
