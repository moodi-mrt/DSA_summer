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

//find the majority elements  of an array using Moore's algorithm
int count =0;
int el ;
for (int i = 0; i < size; i++)
{
  if (count == 0)
  {
   count = 1;
   el = arr[i];
  }
 else if (arr[i]==el)
  {
    count++;
  }
  else{
    count--;
  }
  
    
}

int count1 = 0;
for (int i = 0; i < size; i++)
{
    if (el == arr[i])
    {
        count1++;
    }
  
      
}
if (count1 > size/2)
    {
        cout<<el;
        
    }
    else{
        cout<<-1;
    }
    return 0;
}