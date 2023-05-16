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

		cin>>n;

        vll a(n),b(n);

        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n;i++)cin>>b[i];

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        ll ans=1;

        for(i=0;i<n;i++){

            j=lower_bound(b.begin(),b.end(),a[i])-b.begin();

            ans=(ans*(j-i))%mod;
        }

        cout<<ans<<endl;
    }

}



