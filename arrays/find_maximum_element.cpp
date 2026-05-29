#include<iostream>
#include<climits>

using namespace std;

int main(){
int size;
cout<<"Enter the size of an array: "<<endl;
cin>>size;

int arr[size];

cout<<"Enter the array elements: "<<endl;
for (int i = 0; i <size; i++)
{
    cin>>arr[i];
}

int max = INT_MIN;
int i = 0;
while (i < size)
{
    if (arr[i]> max)
    {
        max = arr[i];
    }

    i++;
}

cout<<"The maximum element is : "<<max<<endl;



    return 0;
}