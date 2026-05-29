#include<iostream>
using namespace std;

int main(){
int size;

cout<<"Enter the size of an array: "<<endl;
cin>>size;

int arr[size];
for (int i = 0; i < size; i++)
{
    cin>>arr[i];
}

//now print the unique elements

for (int i = 0; i < size; i++)
{
    bool isUnique = true;
    for (int j = 0; j < size; j++)
    {
        if (arr[i] == arr[j] && i != j)
        {
            isUnique = false;
        }
        
    }
    
    if (isUnique == true)
    {
        cout<<arr[i]<<" ";
    }
    
}



    return 0;
}