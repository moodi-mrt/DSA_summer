#include<iostream>
using namespace std;

int main(){
int size;
cout<<"Enter the array size : "<<endl;
cin>>size;

int arr[size];
cout<<"Enter the array elements: "<<endl;
for (int i = 0; i < size; i++)
{
    cin>>arr[i];
}

//find the number that only appear ones in an array while other twice
int unique_number ;

for (int i = 0; i < size; i++)
{
    int Xor1 = arr[i];

    for (int j = 1; j < size; j++)
    {
        int Xor2 = arr[j];
        
        unique_number = Xor1 ^ Xor2;

       
        

    }
     if (unique_number != 0)
        {
            cout<<unique_number<<endl;
            break;
        }
}





    return 0;
}