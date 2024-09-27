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
    int n,m,x ;
    cin>>n>>m>>x ;
    vector<pair<int,char>> q ;
    f(i,0,m) {
        pair<int,char> p ;
        int x,y ;
        cin>>x>>y ;
        p.first = x; 
        p.second = y ;
        q.eb(p) ;
    }
    queue<vector<int>> qu;
    vtri vec;
    vec.eb(x) ;
    qu.push(vec) ;
        f(j,0,m) {
            int x = qu.front().size() ;
            f(i,0,x) {
                vtri vec;
                int temp = qu.front()[i];
                qu.pop() ;
                int val1 = temp + q[j].first;
                int val2 = temp - q[j].second ;
                if (val1 > n) val1 -= 1; 
                if (val2 < 1) val2 = abs(val2) +1 ;
                if (q[j].second == '?') {
                    vec.eb(val1) ;
                    vec.eb(val2) ;
                }
                else if (q[j].second == '1') {
                    vec.eb(val2) ;
                }
                else vec.eb(val1) ; 
                qu.push(vec) ;
            }
        }
    int c = qu.front().size() ;
    f(i,0,c) {
        cout<<qu.front()[i]<<" " ;
    }
    cout<<endl;
}
return 0;
}