class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        unordered_map<int,int> map;
        map[0]=1;
        int sum=0;
        int count=0;
        for(int num:arr)
        {
            sum+=num;
            if(map.find(sum-k)!=map.end())
            {
                count+=map[sum-k];
            }
            map[sum]++;
        }
        return count;

    }
};