/*
             CodEcstasy
            SUST SWE-19
*/
#include <bits/stdc++.h>
#define ll long long

//Linear time frequency count

int main() 
{
    ll t, n;
    t = 1;
    std::cin >> t;
    while( t-- ) {
        std::cin >> n;
        ll x;
        std::unordered_map <ll,ll> mp;
        for(ll i=0 ; i<n ; i++) {
        	std::cin >> x;
        	mp[x]++;
        }
        for(auto it:mp) {
        	std::cout << it.first << " " << it.second << std::endl;
        }
    }
    return 0;
}