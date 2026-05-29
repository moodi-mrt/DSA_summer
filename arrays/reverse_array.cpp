#include<iostream>
using namespace std;


int main(){

    int size;
    cout<<"Enter the size of an array: "<<endl;
    cin>>size;
    
    int arr[size];
    cout<<"Enter the elements of an array: ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    //reverse an array:
    int start = 0;
    int end = size -1;

    int temp;
    while (start<end)
    {
        temp = arr[start];
        arr[start]= arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    //the given is a reversed array;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    

    return 0;
}