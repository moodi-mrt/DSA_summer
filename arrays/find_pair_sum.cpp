#include<iostream>
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
int sum;
cout<<"Enter the total sum you want to find"<<endl;
cin>>sum;
//find the pair sum;
int left = 0;
int right = size-1;

while (left < right)

{
    if(arr[left] + arr[right] == sum){
        cout<<arr[left]<<" + "<<arr[right]<<" = "<<sum<<endl;
    }
    left++;
    right--;
    
}


    return 0;
}