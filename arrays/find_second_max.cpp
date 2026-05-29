#include<iostream>
#include<climits>

using namespace std;

int main(){

    int size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of an array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    //find the second maximum element in array: 

    int max = INT_MIN;
    int s_max = max;

    for (int i = 0; i < size; i++)
    {
        if (arr[i]> max)
        {
            max = arr[i];
        }
        
    }
    
    for (int i = 0; i <size; i++)
    {
        if (arr[i]> s_max && s_max<max)
        {
            s_max = arr[i];
        }
        
    }
    
    cout<<"The second maximum element of an array: "<<s_max<<endl;
    

    return 0;
}