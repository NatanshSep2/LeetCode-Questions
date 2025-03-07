//NATANSH KAPIL
class Solution {
    public int[] closestPrimes(int left, int right) {
        //Sieve algorithm to find prime numbers between[1,right]
        boolean prime[] = new boolean[right + 1];//make index upto 20 becz 19 is theindex we follow
        //make all initially true except 0,1 index
        Arrays.fill(prime,true);
        prime[0] = false;
        prime[1] = false;
        //check with square becz its previous one is already solved
        //these two loops ensure that you mark all composite numebers
        //only prime numbers are true
        for(int p = 2; p*p <= right;p++)
        {
            if (prime[p]){
                //mark p*p and than +p like 2*2 = 4,4+2=6,8,10
                for(int i = p*p;i<=right;i+=p)
                {
                    prime[i] = false;//make them all false
                }
            }
        }

        //find min difference between pair of prime numebrs
        int res[] = new int[]{-1,-1};
        int minDiff = Integer.MAX_VALUE;
        int prev = -1;
        //iterate left to right & both are inclusive than use = operator
        for(int i = left ;i<=right;i++){
            if(prime[i]){
                //if number is prime than check it and mark it
                if(prev == -1){
                    //if not mark and make current numebr as prev
                    prev = i;
                }else{
                    //now find the difference if difference is less than store it in ans and update it
                    if(i-prev < minDiff){
                        res[0] = prev;
                        res[1] = i;
                        minDiff = i-prev;
                    }
                    //update that min. difference and store it 
                    prev = i;
                }
            }
        }
        return res;

    }
}