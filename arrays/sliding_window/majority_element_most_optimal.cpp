#include<iostream>
#include<vector>
#include<climits>

using namespace std;

vector<int> MajorityElements(vector<int> nums){
    int cnt1 = 0;
    int cnt2 = 0;

    int el1 = INT_MIN;
    int el2 = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        if (cnt1 == 0 && el2 != nums[i])
        {
            cnt1 = 1;
            el1 = nums[i];
        }

        else if (cnt2 == 0 && el1 != nums[i])
        {
            cnt2 = 1;
            el2 = nums[i];
        }

        else if (nums[i] == el1)
        {
            cnt1++;
        }
        else if (nums[i]== el2)
        {
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
        
    }

    vector<int>ls;
    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i]==el1)
        {
            cnt1++;
        }
        if (nums[i]== el2)
        {
            cnt2++;
        }
        
    }

    int mini = (int)(nums.size()/3)+1;
    if (cnt1>=mini)
    {
        ls.push_back(el1);
    }
    if (cnt2>= mini)
    {
        ls.push_back(el2);
    }
    
    return ls;
    
    
}

int main(){
    int size;
    cout<<"Enter the size: "<<endl;
    cin>>size;
    vector<int> nums(size);

    cout<<"Enter the elemens: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>nums[i];
    }
    

    vector<int> ans = MajorityElements(nums);
    if (ans.empty())
    {
        cout<<"There is no majority element"<<endl;
    }
    else{
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<"majority elements: "<<ans[i];
        }
        
    }
    

return 0;
    
}