#include <bits/stdc++.h>
using namespace std;

void countFairPairs(vector<int>& nums, int lower, int upper) 
    {
        long long x=0,y=0,c = 0, n = nums.size(), low, high, mid, tar = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) 
        {
            low = i+1;
            high = n - 1;
            while (low <= high) 
            {
                mid = (high + low) / 2;
                // tar = nums[mid] + nums[i];
                if ((lower-nums[i]) <= nums[mid] && nums[mid] <= (upper-nums[i]))
                {
                    x=mid;
                    low=mid+1;
                }
                else if(nums[mid]<lower)
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }

            }
            
            // x=low;
            low = i+1;
            high = n - 1;
            while(low <= high)
            {
                mid = (high + low) / 2;
                //tar = nums[mid] + nums[i];
                if ((lower-nums[i]) <= nums[mid] && nums[mid] <= (upper-nums[i]))
                {
                    y=mid;
                    high=mid-1;
                }
                else if(nums[mid]<lower)
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
            cout << nums[i] << " " << x << " " << y<<endl;
            //y=high;
            // c = c + (x-y+1);

        }
        //return c;
    }

int main()
{
    vector<int> nums = {0,1,7,4,4,5};
    int lower = 3;
    int upper = 6;
    countFairPairs(nums, lower, upper);
}