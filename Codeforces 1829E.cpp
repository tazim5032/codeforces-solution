
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

bool sajao(string a,string b)
{

    return (a.size()<b.size());
}

int n, m;
bool vis[1005][1005];
int a[1005][1005];

int dfs(int i,int j)
{

    vis[i][j]=true;

    int ans=a[i][j];

    if(i!=0 && a[i-1][j]!=0 && !vis[i-1][j])ans+=dfs(i-1,j);
    if(i!=n-1 && a[i+1][j]!=0 && !vis[i+1][j])ans+=dfs(i+1,j);
    if(j!=0 && a[i][j-1]!=0 && !vis[i][j-1])ans+=dfs(i,j-1);
    if(j!=m-1 && a[i][j+1]!=0 && !vis[i][j+1])ans+=dfs(i,j+1);

    return ans;
}

int main()
{
    int i,j,k,x,y,z,t;

    cin>>t;

    while(t--)
    {

        cin>>n>>m;

        for(i=0; i<n; i++)
        {

            for(j=0; j<m; j++)
            {

                cin>>a[i][j];

                vis[i][j]=false;
            }
        }

        int ans=0;

        for(i=0; i<n; i++)
        {

            for(j=0; j<m; j++)
            {

                if(!vis[i][j] && a[i][j]!=0)ans=max(ans,dfs(i,j));
            }
        }

        cout<<ans<<endl;
    }



}




