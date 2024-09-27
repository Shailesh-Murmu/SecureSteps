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
    int a,b,k ;
    cin>>a>>b>>k ;
    vtri vec1;
    vtri vec2 ;
    f(i,0,a) {
        int x ;
        cin>>x ;
        vec1.eb(x) ;
    }
    f(j,0,b) {
        int x ;
        cin>>x ;
        vec2.eb(x) ;
    }
    sort(vec1.begin(),vec1.end()) ;
    sort(vec2.begin(),vec2.end()) ;
    int sum  = 0 ;
    f(i,0,a) {
        int index = -1 ;
        f(j,0,b) {
            if (vec2[j] > k || vec1[i] > k) break ;
            else if (vec2[j] + vec1[i] > k) break ;
            else index++ ;
        }
        if (index != -1) sum += (index+1) ;
    }
    cout<<sum<<endl;
}
return 0;
}