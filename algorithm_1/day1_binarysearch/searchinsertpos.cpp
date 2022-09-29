class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int low = 0, high = nums.size()-1, mid, answer;
        while(low<=high)
        {
            mid = (low+high)/2;
            if(nums[mid]==target)
            {    
                answer = mid;
                break;
            }
            else if(nums[mid]>target)
            {
                answer = high = mid-1;
            }
            else
            {
                answer = low = mid+1;
            }
        }
        if(answer<0)
            answer = 0;
        return answer;
    }
};