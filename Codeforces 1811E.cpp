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

		cin>>k;

		vll a(50);

		m=0;
		while(k)
		{
			x=k%9;
			a[++m]=x+(x>=4);
			k/=9;
		}
		for(int i=m;i>=1;i--)cout<<a[i];
		cout<<endl;


    }

}


