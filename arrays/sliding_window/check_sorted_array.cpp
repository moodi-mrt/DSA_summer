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
bool  isSorted ;

//approach 2

for (int i = 0; i < size; i++)
{
    if (arr[i]<arr[i-1])
    {
        isSorted = false;
        break;
    }
    else{
        isSorted = true;
    }
    
}

if (isSorted == true)
{
    cout<<"the array is sorted ";
}
else{
    cout<<"The array is not sorted";
}




    return 0;
}