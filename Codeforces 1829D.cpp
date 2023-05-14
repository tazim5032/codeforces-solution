#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

bool sajao(string a,string b){

    return (a.size()<b.size());
}
bool ok(ll n,ll m){

    if(n==m)return 1;

    if(n%3)return 0;

    return ok(n/3,m) || ok(n/3 * 2,m);
}
int main()
{
    ll n,m,i,j,k,x,y,z,t;

    cin>>t;

    while(t--){

		cin>>n>>m;

        if(ok(n,m))yes;
        else no;
    }

}




