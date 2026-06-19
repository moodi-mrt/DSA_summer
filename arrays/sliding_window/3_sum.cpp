#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> FindThreeSum(int n, vector<int> nums){
    int sum = 0;
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        int k = n-1;
        if (i> 0 && nums[i] == nums[i-1])
        {
            continue;
        }

        while (j<k)
        {
            sum = nums[i] + nums[j] + nums[k];
            if (sum >0)
            {
                k--;
            }
            else if (sum <0)
            {
                j++;
            }
            else{
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                
            }

            while (j>k && nums[j] == nums[j-1])
            {
                j++;
            }
            
             while (j>k && nums[k] == nums[k-1])
            {
                k--;
            }
            
        }
        
        
        
    }
    return ans;
}

int main(){
    int size;
    cout<<"Enter the size : "<<endl;
    cin>>size;
    
    vector<int> nums(size);

    cout<<"Enter the elements: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>nums[i];
    }
    

    //find the three sum
    vector<vector<int>> ans = FindThreeSum(size, nums);

    for (int i = 0; i < ans.size(); i++)
{
    cout << "[ ";

    for (int j = 0; j < ans[i].size(); j++)
    {
        cout << ans[i][j] << " ";
    }

    cout << "]" << endl;
}
    



return 0;
}