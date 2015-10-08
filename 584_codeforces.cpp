#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <assert.h> 
#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <cmath>
using namespace std;
#define LL long long int
#define m89 1000000007
int main()
	{

		LL n;
		cin>>n;
		LL ans=(n* 20* (pow(27,n-1)) - (n-1) * ( pow (20,n) ) ) % m89;
		cout<< ans<<endl;
	}
