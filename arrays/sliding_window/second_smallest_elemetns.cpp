#include<iostream>
#include<climits>
using namespace std;

int main(){
    int size;
    cout<<"Enter the array size: "<<endl;
    cin>>size;

    int arr[size];

    cout<<"Enter the array elements: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    //find second samllest
    int min = INT_MAX;
    int s_min= INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min){
            s_min = min;
            min = arr[i];
        }
    }
  
    
    cout<<"The second minimum number is: "<<s_min<<endl;
    
    
}