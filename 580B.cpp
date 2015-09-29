#include<cstdio>
#include<cmath>
#include<vector>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
#define LL long long int
#include <utility>

int main()
	{
		LL n,i,d,tmp2,tmp1;
		cin>>n>>d;
		vector <pair <LL,LL> >pair_array(n);
		for(i=0;i<n;++i )
			{
				cin>>tmp1>>tmp2;
				pair_array[i] = make_pair(tmp1 ,tmp2);

			}

			sort(pair_array.begin() ,pair_array.end());


			std::vector<pair <LL,LL> >::iterator low,sit,it;
			pair <LL ,LL> tmp;
			LL sum=0,max_sum=0;

			for(it=pair_array.begin() ; it!=pair_array.end();it++)
				{	
					sum=0;

					tmp.first = (*it).first+d;
					tmp.second = 0;
					low=std::lower_bound (pair_array.begin(), pair_array.end(), tmp);
					
					for(sit =it ; sit!= low ;sit++ )
						{
							sum += (*sit).second;
						}
					
					max_sum = max(max_sum,sum);
				}

			


		cout<<max_sum<<endl;
	}
