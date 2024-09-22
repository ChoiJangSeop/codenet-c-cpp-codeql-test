/*																													   
 Templatka c++ Kacper Fis																							   																											   //
*/																													  
																													   
#include <iostream>       	
#include <cstdio>         
#include <limits>		  
#include <cstdlib>       
#include <utility>        
#include <iterator>       
#include <bitset>         
#include <list>           
#include <vector>
#include <map>
#include <unordered_map>
#include <set>            														   
#include <queue>          																							   
#include <deque>          																							   
#include <stack>																									   
#include <algorithm>																								   
#include <cmath>																									   
#include <string>      																								   
#include <time.h>																									   
#include <iomanip> 																									   
#include <sstream>																									   
#include <bits/stdc++.h>																							   
																													   
using namespace std; 																								   
																													   
const int INF = 1000000001;																						   
const float PI = 3.14;																								   
typedef long long LL;																								   
																													   
typedef vector<int> vi;																								   
typedef list<int> li;																								   
typedef queue<int> qi; 																								   
typedef pair<int,int> ii; 																							   
typedef map<string,int> msi; //np msi['nazwa'] = 'liczba'															   
typedef vector<ii> vii; //vector par<int>, do tworzenia tablicy dla grafów wagowych #dijkstra #Bellman_Ford			   
typedef priority_queue< ii, vector<ii>, greater<ii> > pq; //kolejka priorytetowa vectorów par(top()=min) #dijkstra	   
																													   
//list<int>::iterator it;																								   
list<int>::iterator it1;																							   
vector<int>::iterator it2;																							   
vector<int>::iterator it3;																							   
set<int>::iterator it4;																								   
map<string, int>::iterator it5; 																					   
vector<ii>::iterator iter;																							   
																													   																				   
#define print_list(x) for(it = (x).begin(); it != (x).end(); it++) {cout << *it << " ";}							   
#define print_vector(x) for(it2 = (x).begin(); it2 != (x).end(); it2++) {cout << *it2 << " ";}						   
#define search_list(x) for(it = (x).begin(); it != (x).end(); it++)													   
#define search_vector(x) for(it2 = (x).begin(); it2 != (x).end(); it2++);											   
#define pb(x) push_back(x) 																							   
#define pf(x) push_front(x)																							   
#define mp(x, y) make_pair(x, y)                                                                                       
///////////////////////////////////////////////GLOBAL DEFINITIONS////////////////////////////////////////////////////////

int counter[100005];
int counter2[100005];

int maxi1;
int maxi2;

int id1, id2;

///////////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])																					 
{ios_base::sync_with_stdio(false); cin.tie(NULL);    
	
	int n;
	cin >> n;
	int x;
	
	for(int i = 0; i < n; i++){
		cin >> x;
		if(i % 2 == 0){
			counter[x]++;
			if(maxi1 < counter[x]){
				maxi1 = counter[x];
				id1 = x;
			}
		}
		else{
			counter2[x]++;
			if(maxi2 < counter2[x]){
				maxi2 = counter2[x];
				id2 = x;
			}
		}
	}
	
	sort(counter, counter + 100003);
	sort(counter2, counter2 + 100003);
	
	if(id1 != id2){
		cout << n - maxi1 - maxi2;
	}
	else cout << n - max(maxi1 + counter2[100001], maxi2 + counter[100001]);
	
	
	
	
	
	
}              												       
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
