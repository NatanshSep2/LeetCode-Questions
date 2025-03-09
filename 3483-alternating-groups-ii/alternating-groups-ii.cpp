//NATANSH KAPIL
class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        //maxlen is the window length while travising the array window lenght will be increase
        // ans : no. of such windows
        int maxLen = 1,ans = 0, n = colors.size();
        //traversing the array uptill n-1+k-1 
        //i = 1 becz we also have to check previous index
        for(int i = 1; i <= n-1+k-1; i++)
        {
            //checking the same element its prev. and next element too..
            if(colors[i%n] != colors[(i-1+n)%n]){
                //if it is not = than we increase the window size
                maxLen++;
            }else{
                //but if it is equal than reset the window size
                maxLen = 1;
            }
            //if my window size is morethan = to k and i inc. my ans
            if(maxLen >= k)
                ans++;
        }
    //retrun ans 
        return ans;
    }
};