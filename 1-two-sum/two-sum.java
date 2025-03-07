//NATANSH KAPIL
class Solution {
    public int[] twoSum(int[] nums, int target) {
        //traverse an array
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                //add elemet i and j and if tehy are equal than return it
                if (nums[i] + nums[j] == target) {
                    return new int[]{i, j};
                }
            }
        }
        return null;
    }
}
