class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int s=0,e=n-1,mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] > target){
                e=mid-1;
            }
            if(nums[mid] < target){
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return mid;
    }
};