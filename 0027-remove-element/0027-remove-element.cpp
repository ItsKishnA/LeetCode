class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        int lastIter = nums.size()-1;
        

        // ORIGNAL
        // for(int j=0; j<nums.size(); j++){
        // cout<<nums[j]<<", ";
        // }
        // cout<<endl;

        for(int i=0, temp=0; i<nums.size(); i++){
            // DEBUGGING
            // cout<<"from : ";
            // for(int j=0; j<nums.size(); j++){
            //     cout<<nums[j]<<", ";
            // }
            // cout<<"... to ... : ";
                
            if(nums[i]==val){
                // SWIPING VALUES WITH LAST ELEMENT
                temp = nums[i];
                nums[i--] = nums[lastIter];
                nums[lastIter--] = temp;
                k++;

                // DEBUGGING
                // for(int j=0; j<nums.size(); j++){
                //     cout<<nums[j]<<", ";
                // }
                // cout<<endl;
            }
            if(lastIter == i) break;
        }
        return (nums.size()-k);
    }
};