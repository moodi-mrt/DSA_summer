#include<iostream>
using namespace std;

int main(){

    int size;
    cout<<"Enter the size of an array: "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of an array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    

    //find duplicates of element
    for (int i = 0; i < size; i++)
    {
        bool isDuplicate = false;

        for (int j = 0; j < size; j++)
        {
            if (arr[i]== arr[j] && i != j)
            {
                isDuplicate = true;
            }
            
        }
        
        if (isDuplicate == true)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    

    return 0;
}