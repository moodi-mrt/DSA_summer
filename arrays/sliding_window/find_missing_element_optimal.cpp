#include<iostream>
using namespace std;

int main(){
int size;
cout<<"Enter the size : "<<endl;
cin>>size;

int arr[size-1];
int missing_element;
cout<<"Enter the array elements: "<<endl;
for(int i = 0; i< size-1; i++){
    cin>>arr[i];
}
for (int i = 1; i <= size; i++)
{
    int Xor1 = i;

    for (int j = 0; j < size-1; j++)
    {
        int Xor2 = arr[j];

        missing_element = Xor1 ^ Xor2;

        
    }
    
        if (missing_element != 0)
        {
            cout<< missing_element;
            break;
        }
        
    
}




    return 0;
}