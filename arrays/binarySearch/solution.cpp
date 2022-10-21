class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st = 0;
        int end=nums.size()-1;

        vector<int> out;
        bool flag=false;

        while(st<=end) {

            int mid = (end+st)/2;
            cout<<"st "<<st<<"en "<<end<<"mid "<<mid<<"\n";
            if(target>nums[mid]) {
                st=mid+1;
                continue;
                // break;
            } else if(target<nums[mid]) {
                end=mid-1;
                continue;
                // break;
            }
            flag=true;
            int i=mid;
            for(i=mid;i>=0;i--) {
                if(nums[i]!=target) {
                    break;
                }
            }
            out.push_back(i+1);
            for(i=mid;i<nums.size();i++) {
                if(nums[i]!=target) {
                    break;
                }
            }
            out.push_back(i-1);
            break;
        }
        if(out.size()==0) {
            out.push_back(-1);
            out.push_back(-1);
        }
        return out;
    }
};