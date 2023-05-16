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
        cin>>n>>m;

        vll a(n+1),b(m+1);

        x=0,y=0;

        for(i=1; i<=n; i++)
        {
            cin>>a[i];

            if(a[i]==-1)x++;
            else if(a[i]==-2)y++;
            else b[a[i]]++;
        }

        ll cnt=0,r=0;

        for(i=1; i<=m; i++)
            if(b[i])cnt++;
            else r++;


        ll ans=max(x,y)+cnt;

        ll l=0;

        for(i=1; i<=m; i++)
            if(b[i])ans=max(ans,(min(x,l)+min(y,r)+cnt));
            else l++,r--;

        cout<<min(ans,m)<<endl;
    }

}




