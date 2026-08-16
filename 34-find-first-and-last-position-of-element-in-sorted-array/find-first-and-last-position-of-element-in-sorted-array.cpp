class Solution {
public:
int findFirst(vector<int>& nums, int target)
{
    if(nums.empty())
         return -1;
   int left=0;
   int right=nums.size()-1;
   while(left<right)
   {
    int mid=left+(right-left)/2;
    if(nums[mid]<target)
    {
        left=mid+1;
    }
    else if(nums[mid]>=target)
    {
        right=mid;
    }
   }
   if(nums[left] == target)
       return left;

   return -1;
}

int findLast(vector<int>& nums, int target)
{ int ans=-1;
  int left=0;
  int right=nums.size()-1;
  while(left<=right)
  {
    int mid=left+(right-left)/2;
    //int ans=-1;
    if(nums[mid]==target)
    {
        ans=mid;
        left=mid+1;
    }
    else if(nums[mid]<target)
    {
        left=mid+1;
    }
    else
     right=mid-1;
  }
  return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        return {findFirst(nums, target),findLast(nums, target)};        
    }
};