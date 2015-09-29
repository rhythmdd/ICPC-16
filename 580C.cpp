#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
#include<stack>
using namespace std;
int n,m;
typedef struct node{
    int val,visit,c;
    vector<int> arr;
}node;
stack<int> dd;
node a[100000];

int dfs(int k,int c){
    int i,ctr=0;
    a[k].visit=1;

    //cout<<k<<" "<<c<<endl;

    if(a[k].val){
        c++;
    }
    else c=0;
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
    int i,j,k;
    cin>>n>>m;
    for(i=0;i<n;i++){
        scanf("%d",&a[i].val);
    }
    for(i=0;i<n-1;i++){
        scanf("%d %d",&j,&k);
        (a[j-1].arr).push_back(k-1);
    }

    cout<<dfs(0,0)<<endl;

    return 0;
}
