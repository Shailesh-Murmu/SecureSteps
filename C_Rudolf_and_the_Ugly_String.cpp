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
    map<int,int> vis;
    int n;
    cin>>n;
    string s ;
    cin>>s ;
    int count = 0 ;
    f(i,0,n-2) {
        if (s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p' && vis[i+2] != 1) {
            vis[i+2] = 1;
            count++ ;
        }
        else if (s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e' && vis[i] != 1) {
            vis[i+2] = 1 ;
            count++ ;
        }
    }
    cout<<count<<endl;
}
return 0;
}