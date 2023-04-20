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

    while(t--){

        cin>>n;

        ll a[n];

        for(i=0;i<n;i++) cin>>a[i];

        for(i=1;i<n-1;i++){

            k=a[i-1]-a[i];
            a[i]+=k;
            a[i+1]+=k;
        }
        if(a[n-1]>=a[n-2]) cout<<"YES"<<endl;
        else{
            if(n%2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }

}


