#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int const M = 1e9 + 7;
int const mod = 998244353;
double eps = 1e-6;
using namespace std;


void case_solve(){

    double x;
    cin >> x;
    double lo = 1 , hi = x;
    while( hi - lo > eps ){
        double mid = ( hi + lo ) / 2;
        if( mid * mid  * mid < x ) lo = mid;
        else hi = mid; 
    }
    cout << hi << endl;
    cout << endl;
}
int main(){
    int Tc ;  cin >> Tc;
    for( int cs = 1; cs <= Tc; cs++ ){
        case_solve();
    }
    return 0;
}