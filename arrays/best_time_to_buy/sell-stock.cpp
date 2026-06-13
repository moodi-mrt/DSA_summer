#include<iostream>
#include<climits>
using namespace std;

int main(){
int size;
cout<<"Enter the size of an array: "<<endl;
cin>>size;

int arr[size];
for (int &i: arr)
{
    cin>>i;
}

//find the best time to buy/sell stock 
int minPrice = INT_MAX;
int maxProfit = 0;

for ( int i = 0 ; i< size; i++)
{
    if (arr[i]<minPrice)
    {
        minPrice = arr[i];
    }
    if (arr[i] - minPrice > maxProfit)
    {
        maxProfit = arr[i] - minPrice;//it will update the maximum profit with each iteration
    }
    
    
}

//it should return the maximum profit from the stock
cout<<maxProfit<<endl;


    return 0;
}