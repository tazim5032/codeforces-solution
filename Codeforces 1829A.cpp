#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

bool sajao(string a,string b){

    return (a.size()<b.size());
}
int main()
{
    ll n,m,i,j,k,x,y,z,t;

    cin>>t;

    while(t--){

		string str;

		cin>>str;

		string cmp="codeforces";

		x=0;

		for(i=0;i<10;i++)if(str[i]!=cmp[i])x++;

		cout<<x<<endl;
    }

}

