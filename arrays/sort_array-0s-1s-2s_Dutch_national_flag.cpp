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

//sort the array using Dutch national flag algorithm
int mid = 0;
int low = 0;
int high = size-1;
while(mid<= high)
{
    if (arr[mid]==1)
    {
        mid++;
    }
    else if (arr[mid]== 0)
    {
        swap(arr[mid], arr[low]);
        mid++;
        low++;
    }
    else if (arr[mid]==2)
    {
        swap(arr[mid], arr[high]);
        high--;
    }
    
    
    
}

// the sorted array is given 
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}




    return 0;
}