#include<iostream>
using namespace std;

int main(){
int size;
cout<<"Enter the size of an array: "<<endl;
cin>>size;

int arr[size];
int arr1[size];

cout<<"Enter the array elements: "<<endl;
for (int i = 0; i < size; i++)
{
    cin>>arr[i];

}

cout<<"Enter the elements of second array: "<<endl;
for (int i = 0; i < size; i++)
{
    cin>>arr1[i];
}

//find the intersection between the arrays

for (int i = 0; i < size; i++)
{
    bool isPresent = false;
    for (int j = 0; j < size; j++)
    {
        if (arr[i] == arr1[j] )
        {
            
            isPresent = true;
            arr1[j] = -1; // to not use the same element checking again and again
            break;
          
        }
      
        
    }

    if (isPresent == true)
    {
        cout<<arr[i]<<", "<<" ";
    }
    
    
}




    return 0;
}