#include<bits/stdc++.h>
using namespace std;
#define N 100005
long long arr[N];

long long solve(long long *arr, int n)
{
    long long leftMax[N],rightMax[N];
    leftMax[0]=0;
    rightMax[n+1]=0;

    for(int i=1;i<=n;i++)
        leftMax[i]=max(leftMax[i-1],arr[i]);

    for(int i=n;i>=1;i--)
        rightMax[i]=max(rightMax[i+1],arr[i]);

    long long res=0;

    for(int i=1;i<=n;i++)
    {
        res+=min(leftMax[i],rightMax[i])-arr[i]; //water stored at this position
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ifstream cin("inputRainwater.txt");
    ofstream cout("outputRainwater.txt");

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        cout<<solve(arr,n)<<'\n';

    }




    return 0;
}

