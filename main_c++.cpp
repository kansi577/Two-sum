
class Solution{
    public:
     vector<int> twoSum(vector<int>& nums, int target){
             map<int,int> st;
             vector<int>result;
            int i,n;
            for(i=0;i<nums.size();i++)
            {
                map<int,int>::iterator it;
                it=st.find(target-nums[i]);
                if(it!=st.end())
                {
                    result.push_back(it->second);
                    result.push_back(i);break;
                }
                else
                {
                    st.insert({nums[i],i});
                }
            }return result;
     }
};
