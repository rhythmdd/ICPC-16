#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
#include<stack>
using namespace std;
long long int n,m;
typedef struct node{
    long long int val;
    vector<long long int> arr;
}node;
//stack<long long int> dd;
node a[100005];

long long int dfs(long long int k,long long int c){
    long long int i,ctr=0;

    if(a[k].val){
        c++;
    }
    else c=0;

    //cout<<k<<" "<<c<<endl;
    if(c>m)
    return 0;

    //stack.push(k);
    for(i=0;i<a[k].arr.size();i++){
            ctr+=dfs(a[k].arr[i],c);
    }
    if(!a[k].arr.size()){
        ctr=1;
    }
    //cout<<"ctr= "<<ctr<<endl<<endl;
    return ctr;

}


int main(){
    long long int i,j,k;
    cin>>n>>m;
    for(i=0;i<n;i++){
        scanf("%lld",&a[i].val);
    }
    for(i=0;i<n-1;i++){
        scanf("%lld %lld",&j,&k);
        a[j-1].arr.push_back(k-1);
    }

    cout<<dfs(0,0)<<endl;

    return 0;
}
