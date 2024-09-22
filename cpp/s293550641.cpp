#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n,arr[200] ;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n; i++)
    {
        if (n==2)
        {
            cout<<arr[i]<<endl<<arr[i+1]<<"as:";
            break;
        }
        else if (n==1)
        {


            cout<<arr[i]<<endl;
            break;
        }
        else
        {
            if(i==0)
            {
                if(arr[i+1]>arr[i+2])
                    cout<<arr[i+1]<<endl;
                else
                    cout<<arr[i+2]<<endl;
            }
            else if (i==(n-1))
            {
                if(arr[i-1]>arr[i-2])
                    cout<<arr[i-1]<<endl;
                else
                    cout<<arr[i-2]<<endl;
            }
            else
            {
                if(arr[i-1]>arr[i+1])
                    cout<<arr[i-1]<<endl;
                else
                    cout<<arr[i+1]<<endl;

            }
        }
    }
}
