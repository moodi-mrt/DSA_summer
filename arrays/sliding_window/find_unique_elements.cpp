#include<iostream>
using namespace std;

void Inputs(int arr[], int size){

cout<<"Enter the array elements: "<<endl;
for (int i = 0; i < size; i++)
{
    cin>>arr[i];
}

}

int FindUniqueElements(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size; j++)
        {
            if (arr[i] != arr[j])
            {
                arr[i+ 1] = arr[j];
            }
            
        }
    return arr[i];    
    }
    
}

int main(){
int size;
cout<<"Enter the size of an array: "<<endl;
cin>>size;

int arr[size];
Inputs(arr, size);

//find the unique elements

cout<<"The following are the unique elements: "<<endl;
 FindUniqueElements( arr,  size);
 

    return 0;
}