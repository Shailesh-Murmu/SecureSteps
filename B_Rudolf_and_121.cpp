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
    int  n;
    cin>> n; 
    vtri vec; 
    f(i,0,n) {
        int x; 
        cin>> x; 
        vec.eb(x) ;
    }
    int x = vec[1] / 2 ;
    int y = vec[n-2] / 2 ;

    if (vec[0] > x || vec[n-1] > y) {
        cout<<"NO"<<endl;
    }
    else {
        bool flag = true ;
        f(i,1,n-1) {
            int z = vec[i] / 2 ;
            if (vec[i-1] > z) {

                break ;
            }
            else {
                vec[i] -= vec[i-1] *2 ;
                vec[i+1] -= vec[i-1] ;
                vec[i-1] = 0 ;
            }
        }
        f(i,0,n) {
            if (vec[i] != 0) {
                flag = false ;
                break;
            }
        }
        if (flag ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}
return 0;
}