class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        
        int count=0,maxlength=0,k=0;
        for(int i=0;i<rectangles.size();i++){
            
            int j=0;
            
            //find which is smaller length or width
            if(rectangles[i][j]<rectangles[i][j+1])
            k= rectangles[i][j];

            else if(rectangles[i][j+1]<rectangles[i][j])
            k= rectangles[i][j+1];           
 
            if(maxlength<k){
                maxlength=k;
                count=1;
            }
            else if(maxlength==k)
                count++;   
        }
      return count;  
    }
};