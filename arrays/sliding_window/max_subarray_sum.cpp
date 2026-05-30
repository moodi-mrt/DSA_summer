#include<iostream>
#include<climits>
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


//this code will find the maximum subarray in an array using sliding window
int k;
cout<<"Enter the number of elements you want to find the sum: "<<endl;
cin>>k;

 int left = 0;
 int right = k;
 int max_sum = INT_MIN;
 int sum ;
for (int i = 0; i < k; i++)
{
   sum += arr[i];
}

// sum contains the current or initial window sum for comparison with other windows

for (int i = k; i < size; i++)
{
    sum += arr[i] - arr[i-k];

    if (sum > max_sum)
    {
        max_sum = sum;
    }
    
}
cout<<"The maximum subarray sum is: "<<max_sum<<endl;





    return 0;
}