 int l=0,h=nums.size()-1;
    while(l<h)
    {
        if(nums[l]%2==0)l++;
        else if(nums[h]%2!=0)h--;
        else if(nums[l]%2!=0&&nums[h]%2==0){
            swap(nums[l],nums[h]);
            l++;
            h--;
        }
    }
    return nums;
}
