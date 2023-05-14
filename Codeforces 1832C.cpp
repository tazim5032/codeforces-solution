
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

int main()
{
    ll n,m,i,j,k,x,y,z,t;

    cin>>t;

    while(t--)
    {

        cin>>n;

        vll a(n+1);

        for(i=1; i<=n; i++)cin>>a[i];

        vector<ll>v;
        v.pb(a[1]);

        for(i=2; i<=n; i++)if(a[i]!=a[i-1])v.push_back(a[i]);

        if(v.size()==1)
        {
            cout<<1<<endl;
            continue;
        }

        ll cnt=0;

        for(i=1; i<v.size()-1; i++)
        {
            if(v[i]>v[i - 1] && v[i]>v[i + 1])cnt++;
            else if(v[i]<v[i - 1] && v[i]<v[i + 1])cnt++;
        }

        cout<<cnt+2<<endl;

    }

}

