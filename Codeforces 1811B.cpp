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

		ll a,b,c,d;

		cin>>a>>b>>c>>d;

		x=min(a-1,n-a);
		y=min(b-1,n-b);

		x=min(x,y);

		k=min(c-1,n-c);
		y=min(d-1,n-d);

		y=min(k,y);

		cout<<abs(x-y)<<endl;
    }

}


