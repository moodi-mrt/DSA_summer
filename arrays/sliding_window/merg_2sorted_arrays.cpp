#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int size1;
int size2;
cout<<"Enter the size of first array: "<<endl;
cin>>size1;
cout<<"Enter the size of second array: "<<endl;
cin>>size2;

int arr1[size1];
int arr2[size2];

cout<<"Enter the elements of first array: "<<endl;
for (int i = 0; i < size1; i++)
{
    cin>>arr1[i];
}

cout<<"Enter the elements of second array: "<<endl;
for (int i = 0; i < size2; i++)
{
    cin>>arr2[i];
}


//merge two sorted arrays

int left = size1-1;
int right = 0;

while (left > 0 && right < size2)
{
    if (arr1[left]>= arr2[right])
    {
        swap(arr1[left],arr2[right] );
        left--, right++;
    }
    else{
        break;
    }
    
}

sort(arr1, arr1 + size1);
sort(arr2, arr2 + size2);



//first array
for (int i = 0; i < size1; i++)
{
    cout<<arr2[i]<<" ";
}
cout<<endl;


//second array 
for (int i = 0; i < size2; i++)
{
    cout<<arr2[i]<<" ";
}





    return 0;
}