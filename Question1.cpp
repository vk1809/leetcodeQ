#include<bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    bool check = false;
    for(int i = 0;i<n-1;i++)
    {
        if(nums[i] == nums[i+1])
        {
            check = true;
            break;
        }
    }
    return check;
}
int main()
{
    vector<int> a = {1,2,3,4,3};
    bool ans = containsDuplicate(a);
    if(ans == true)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    return 0;
}