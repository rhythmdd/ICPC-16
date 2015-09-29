#include<cstdio>
#include<cmath>
#include<vector>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
long long c[20][20];
long long  a[20];
long long  dp[500000][20];
int main(){
    long long i,n,m,k,x,y,sat,j,l,mask,ctr=0;
    long long  sum;
    cin>>n>>m>>k;
    memset(c,0,sizeof(c));
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(i=0;i<k;i++){
        scanf("%lld %lld %lld",&x,&y,&sat);
        c[x-1][y-1]=sat;
    }
    for(i=0;i<n;i++)
        dp[1<<i][i]=a[i];
    dp[0][0]=0;
    sum=0;
    for(mask=1;mask<(1<<n);mask++){
        for(i=0;i<n;i++){
            if(mask&(1<<i)){
                for(j=0;j<n;j++){
                    if(!(mask&(1<<j))){
                        //cout<<mask<<" "<<i<<" "<<dp[mask][i]<<endl;
                        //cout<<dp[mask|1<<j][j]<<endl;
                        dp[mask|1<<j][j]=max(dp[mask|1<<j][j],dp[mask][i]+a[j]+c[i][j]);
                    }
                }
                ctr++;
            }
        }
        if(ctr==m){
            for(i=0;i<n;i++){
                sum=max(sum,dp[mask][i]);
            }
        }
        ctr=0;

        /*for(i=0;i<n;i++){
            if(mask&1<<i){
                sum[mask]=min(sum[mask],dp[mask][i]);
            }
        }*/
    }
    /*
    mask=(1<<n)-1;
    sum=0;
    for(i=0;i<n;i++){
    cout<<i<<"    "<<dp[mask][i]<<endl;
        sum=max(sum,dp[mask][i]);
    }*/
    cout<<sum<<endl;
    return 0;
}
