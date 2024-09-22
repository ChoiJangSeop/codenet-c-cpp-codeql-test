#include <bits/stdc++.h>

using namespace std ;

int main()
{
	ios_base::sync_with_stdio(0) ;
	cin.tie(0) ;
	int n ;
	cin>>n ;
	int arr[n] , arr1[n];
	for(int i = 0 ; i < n ; ++i)
	{
		cin>>arr[i] ;
		arr1[i] = arr[i] ;
	}
	sort(arr , arr + n) ;
	for(int i = 0 ; i < n ; ++i)
	{
		if(arr1[i] == arr[n-1])
			cout<<arr[n-2]<<"\n";
		else
			cout<<arr[n-1]<<"\n";
	}
	return 0 ;
}