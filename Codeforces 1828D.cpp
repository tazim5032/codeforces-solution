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

    while(t--)
    {
        cin>>n;

        vll a(n+1),b(n+1),c(n+1);

        for(i=1; i<=n; i++)
        {
            cin>>a[i];

            b[i]=a[i]+i;
            c[i]=a[i]-i;
        }

        for(i=2; i<=n; i++)b[i]=max(b[i],b[i-1]);
        for(i=n-1; i>0; i--)c[i]=max(c[i],c[i+1]);

        ll ans=0;

        for(i=2; i<n; i++)ans=max(ans,a[i]+b[i-1]+c[i+1]);

        cout<<ans<<endl;
    }

}




