#include<iostream>
#include<climits>
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

    //find the maximum average sum of subarray;
    int k;
    cout<<"Enter the size of subarray: "<<endl;
    cin>>k;

    int max_avg = INT_MIN;
    int avg = 0;
    for (int i = 0; i < k; i++)
    {
        avg += (arr[i])/k;
        
    }
    max_avg = avg;

    for (int i = k; i < size; i++)
    {
        avg +=(arr[i]- arr[i-k])/k;

        if (avg >max_avg)
        {
            max_avg = avg;
        }
        
    }

    cout<<"The maximum average of a subarray is: "<<max_avg<<endl;
    
     
    

    return 0;
}