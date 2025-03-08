//Natansh Kapil
//Sliding whindow problem
class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        //on an string left will me on 0th index
        //numwhite is used to count the no. whites
        //minRecolor is used to find min. no. that we have to recolor
        int left = 0,numWhites = 0,minRecolor = INT_MAX;
        //we use loop to iterate the list 
        for(int right = 0; right < blocks.size(); right++)
        {
            //count the number of white
            if(blocks[right] == 'W')
                numWhites++;
            //if we reach to the window k than find the min. number that we haveto recolor
            if(right - left + 1 == k)
            {
                minRecolor=min(minRecolor,numWhites);
                //if found than a window is more than the size of k when we have to shrink itt
                //if we need to dec. numWhite
                //and move left a head
                if(blocks[left] == 'W')numWhites--;
                left++;
            }
        }
        //At last we return the mininum number of white we used to recolor
        return minRecolor == INT_MAX ? 0 : minRecolor; // Check in case the window was never valid
    }
};