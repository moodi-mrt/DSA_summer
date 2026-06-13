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

//find the consecutive ones
int count = 0;
int maxi = 0;

for (int i = 0; i < size; i++)
{
    if (arr[i]== 1)
    {
        count++;
    }
    else{
        count = 0;
    }
    if (count > maxi)
    {
        maxi = count;
    }

    
    
}

cout<<"the maximum consecutive ones are: "<<maxi<<endl;


    return 0;
}