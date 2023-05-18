
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define mod 1000000007
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

int main()
{
    ll n,m,i,j,k,x,y,z,t;

    cin>>t;

    while(t--){

		cin>>n>>m;

		if(n==1){
            yes;
            continue;
		}
		if(n<=m){
            no;
            continue;
		}
		ll f=0;
		for(i=2;i*i<=n;i++){
            if(n%i==0){
                if(i<=m){
                    no;
                    f++;
                    break;
                }
            }
		}
		if(f)continue;
		else yes;
    }

}



