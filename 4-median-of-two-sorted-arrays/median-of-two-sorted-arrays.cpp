//NATANSH KAPIL
//in this we didn't reduce the time but we have to reduces the space
//for storing the array
//and we use tracker that track the indexs of an array
class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        //calc the size of both array
        int n1 = a.size() , n2 = b.size();
        // make two pointer variable for both array respectively
        int i = 0;
        int j = 0;
        //and both the sizes of an array
        int n = (n1 + n2);
        //knowing the value of indexes
        int ind2 = n/2;
        int ind1 = ind2 - 1;
        //the is the track for indexes
        int cnt = 0;
        int ind1el = -1, ind2el = -1;
        // loop for merging them
        while(i<n1 && j < n2)
        {
            if(a[i] < b[j]){
                //if the index tracker is track the both
                //index value that am looking for than it will be assing itself
                if(cnt == ind1) ind1el = a[i];
                if(cnt == ind2) ind2el = a[i];
                //than find next index
                cnt++;
                i++;
            }else{
                if(cnt == ind1) ind1el = b[j];
                if(cnt == ind2) ind2el = b[j];
                cnt++;
                j++;
            }
        }
        while(i<n1){
                if(cnt == ind1) ind1el = a[i];
                if(cnt == ind2) ind2el = a[i];
                //than find next index
                cnt++;
                i++;
        }
        while(j<n2){
                if(cnt == ind1) ind1el = b[j];
                if(cnt == ind2) ind2el = b[j];
                //than find next index
                cnt++;
                j++;
        }
        if(n%2 == 1){
            return ind2el;
        }
        return (double)((double)(ind1el + ind2el)) / 2.0;
    }
};