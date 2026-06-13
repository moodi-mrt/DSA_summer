#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int size;
    cout<<"Enter the size of an array; "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the elements: "<<endl;
    for(int &i: arr){
        cin>>i;
    }

    //find the longest consecutive sequence in the array

    
    int count = 1;
    int longest = 1;

    //sort the array
   sort(arr, arr + size);
    

   //solve the problem
   for (int i = 1; i < size; i++)
   {
    if (arr[i] ==arr[i-1])
    {
        continue;
    }
    else if (arr[i] == arr[i-1]+1)
    {
        count++;
     
    }
    else{
        count = 1;
    }
    
    longest = max(longest, count);
    
   }
   
cout<<longest;


    return 0;
}