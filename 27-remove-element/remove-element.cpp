//NATANSH KAPIL
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //finding the size of an array
        int n = nums.size();
        //initialize index at 0th
        int index = 0;
        for(int i = 0;i<n;i++)
        {
            //those value are not = to the val assign them into index
            if (nums[i] != val) {
            //assign it to the index
                nums[index] = nums[i];
            //and make index inc
                index++;
            }
        }
        //at last retrun index vlaues
        return index;

    }
};