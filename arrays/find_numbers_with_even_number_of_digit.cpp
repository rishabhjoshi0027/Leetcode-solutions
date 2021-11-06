  int findNumbers(vector<int>& nums) {
        int n;
        int counter = 0;
        int evencounter = 0;
        for(int i=0;i<nums.size();i++){
            n = nums[i];
            while(n>0){
                int digit = n%10;
                n /= 10;
                counter++;
            }
            if(counter%2==0){
                evencounter++;
            }
            counter = 0;
        }
        return evencounter;
    }  