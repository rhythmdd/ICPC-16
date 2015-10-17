#include <bits/stdc++.h>
#include <cmath>
#include <vector>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <math.h>

#define LL long long int
#include <utility>
#include <map>
#include <bitset>
#define N 300000005

using namespace std;



int main()
	{

		cout<<"ddfgfd \n";
		LL l,r;
		bitset <N> mybits;
		mybits.set();
		mybits[0] = 0;
		mybits[1] = 0;


cout<<"ddfgfd djfhdshdsjdhogtnd \n";
		for(int j=3;j<1742;j+=2)

			{
			
				if(mybits[j])
				{
					for (int i = 2*j;i < N ;i=i+j)
					{
						if(mybits[i])
							mybits[i]=0;
					}
			
				}

			}

			cout<<"ddfgfd \n";

			cin>>l>>r;
			LL ans=0;
			for(int j=5 ; j<=r ; j+=4)
				{
					if (  j>= l  &&   mybits[j]   &&  j%4 ==1 )
					{
						ans++;
					}
				}

				if(l>=2 && r<=2)
					ans++;

				cout<<ans<<endl;

		return 0;
	}
