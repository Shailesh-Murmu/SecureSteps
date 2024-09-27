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
    int n,k ;
    cin>>n>>k ;
    int sum = 1 ;
    map<int,int> mpp ;
    mpp[1+k] = 1 ;
    f(i,2,n+1) {
        mpp[i+k] = pow(i,i) ;
        sum+=mpp[i+k] ;
        if (mpp[i] != 0) {
            sum -= mpp[i] ;
        }
    }
    if (sum % 2 == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}