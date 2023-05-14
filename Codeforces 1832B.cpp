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
        cin>>n>>k;

        vll a(n);

        for(i=0;i<n;i++)cin>>a[i];

        sort(a.begin(),a.end());

        vll b(n+1);

        for(i=1;i<=n;i++)b[i]=b[i-1]+a[i-1];

        ll ans=0;

      //  1 2 3 4 5
      //  1 3 6 10 15

        // 6 2
        //15 22 12 10 13 11
        //10 11 12 13 15 22
        //10 21 33 46 61 83

        //5 1
        //2 5 1 10 6
        //1 2 5 6 10
        //1 3 8 14 24

        for(i=0;i<=k;i++){

            x=2*i;
            y=k-i;

            ans=max(ans,b[n-y]-b[x]);

            //cout<<i<<" "<<b[n-y]<<" "<<b[x]<<endl;
        }

        cout<<ans<<endl;
    }

}

