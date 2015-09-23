#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main() {
    int t;
    cin>>t;
    while(t--)
        {
            LL  l,r,i,j,ans=0;
            cin>>l>>r;
            i=2;
            for( ; i<=r;)
                {
                    j=i;
                    for(;j<=r;)
                        {
                            if(j >= l && j<=r)
                                ans++;
                        
                            j*=3;
                        }
                
                    i*=2;
                    
                }
            
        if(l == 1)
            ans++;
            
        cout<<ans<<endl;    
            
        }
    
	return 0;
}
 
