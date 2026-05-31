#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    cout<<"Enter the string"<<endl;
    cin>>str;

    //find the longest distinct substring in a string

    int max;
    int left = 0;
    int frq[256] = {0};

    for (int right = 0; right < str.length(); right++)
    {
        frq[right]++;
        while (frq[right] > 1)
        {
            str[left]--;
            left++;
        }
        
        int currentlen = right - left + 1;
        if (currentlen > max)
        {
            max = currentlen;
        }

        cout<<max;
        
        
    }
    



}