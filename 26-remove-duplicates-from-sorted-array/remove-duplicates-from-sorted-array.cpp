//NATANSH KAPIL
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //create a variable index = 1
        int index = 1;
        //create a vareable i and iterate it over an array
        for (int i = 1; i < nums.size(); i++) {
            //comapare i ithself and previous ele of i (which currently it points)
            //if they are not equal 
            if (nums[i] != nums[i - 1]) {
            //assign it to the index
                nums[index] = nums[i];
            //and make index inc
                index++;
            }
        }
        //return index
        return index;
    }
};