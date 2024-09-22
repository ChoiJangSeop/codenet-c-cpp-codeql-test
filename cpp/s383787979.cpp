# include <iostream>
# include <math.h>

using namespace std;

double ans;
float eps = pow(10,-9);

int main()
{   
    float w, h, x, y;
    int numWays = 0;
    
    cin >> w >> h >> x >> y;
    
    float halfX = x/2;
    float halfY = y/2;
        
    if ((fabs(halfX - x) <= eps)  && (fabs(halfY - y) <= eps))
    {
       ans = w*h/2.0;     
       numWays = 1;        
    }        
    else 
    {
        // ans = max((w - x) * h, (h - y)*x);  
        ans = w*h/2.0; 
    }    
    
    if (x*2 == w && y*2 == h)
    {
        numWays = 1;    
    }
    
    printf("%f %d\n",ans, numWays);    
    
    return 0;
}