int r = image.size() ;
int c = image[0].length() ;
for(int i = 0 ; i < r ;i++)
{
    reverse(image[i].begin(), image[i].end()) ;
    for(int j = 0 ; j < c ; j++)
    {
        image[i][j] =!image[i][j] ;
    }
    return image ;
}