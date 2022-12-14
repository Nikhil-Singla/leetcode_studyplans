// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        unsigned int low = 1, high = n, mid, answer;
        while(low<=high)
        {
            mid = (low+high)/2;
            if(isBadVersion(mid))
            {    
                answer = mid;
                high = mid-1;
            }
            else 
            {
                low = mid+1;
            }
        }
        return answer;
    }
};
