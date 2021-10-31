/*This is the brute force approach */
vector<int> v;
    int counter;
    for(int i=0;i<nums.size();i++){
        counter = 0;
        for(int j=0;j<nums.size();j++){
            if(i!=j){
                if(nums[i]>nums[j]){
                    counter++;
                }
            }
        }
        v.push_back(counter);
    }
    return v;

/*optimised solution */

vector<long long int> count(101) ;
for(int i: nums)
{
    count[i]++ ;
}
/*Running sum*/

for(int i = 1 ; i < count.size(); i++)
    count[i] += count[i -1] ;

for(int i = 0 ; i < nums.size() ; i++)
{
    if(nums[i] > 0){
        nums[i] = count[nums[i] -1] ;
    }
    else
    {
        nums[i] = 0 ;
    }
}