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

    //using two pointers approach to move all zeroes to the end;

    int left = 1;
    int right = 0;

   while (right != size)
   {
    
    int temp = 0;
    if (arr[right] != 0)
    {
        arr[temp] = arr[right];
        arr[right]= arr[left];
        arr[left] = temp;
    }
    right++;
    left++;
    
   }
   
    

    return 0;
}