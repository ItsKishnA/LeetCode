class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        int lastIter = nums.size()-1;

        for(int i=0, temp=0; i<nums.size(); i++){
            if(nums[i]==val){
                // SWIPING VALUES WITH LAST ELEMENT
                temp = nums[i];
                nums[i--] = nums[lastIter];
                nums[lastIter--] = temp;
                k++;
            }

            if(lastIter == i) break;
        }
        return (nums.size()-k);
    }
};