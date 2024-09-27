#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vtri vector<int>
#define eb emplace_back
#define pb pop_back
#define vtrp vector<pair<int,int>>
#define w(i,a) while(i<a)
#define pari pair<int,int>
#define f(i,a,b) for (int i = a ; i < b ; i++)


// s.substr(4,10) ; //get string from index 4 to length 4
// s.erase(remove(s.begin(), s.end(), '@'), s.end()); //remove A from string


int32_t main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t = 1;
cin >> t;
while (t--){
    int n, k ;
    cin>>n>>k ;
    vtri vec; 
    f(i,0,n) {
        int x ; 
        cin>>x ;
        vec.eb(x) ;
    }
    int sum = 0,count = 0 ;
    f(i,0,n) {
        if (vec[i] >= k) {
            sum+=vec[i] ;
        }
        else if (vec[i] == 0 && sum!=0) {
            sum-=1 ;
            count++ ;
        }
    }
    cout<<count<<endl;
}
return 0;
}