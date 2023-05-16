#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

ll fun(ll x){

    ll sum=0;

    while(x){

        sum+=x%10;

        x/=10;
    }

    return sum;
}

bool sajao(string a,string b){

    return (a.size()<b.size());
}
int main()
{
    ll n,m,i,j,k,x,y,z,t;

    cin>>t;

    while(t--){

		cin>>n;

        vll a(n+1);

        for(i=1;i<=n;i++)cin>>a[i];

        ll ans=0;

        for(i=1;i<=n;i++)ans=__gcd(ans,abs(a[i]-i));

        cout<<ans<<endl;
    }

}


