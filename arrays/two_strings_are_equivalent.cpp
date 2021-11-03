int m, n , i, j ;
bool flag ; 
string sum1 = "", sum2 = "" ;
m = word1.size() ;
for(i = 0 ; i < m ; i++)
    sum1+= word1[i] ;
for(j = 0 ; j < n ;j++)
    sum2 += word2[j] ;

if(sum1 == sum2)
    return flag = true ;
else
{
    return flag = false ;
}
return flag ;