
//http://www.codechef.com/MTRX2014/problems/APPUZZLE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <assert.h>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,1,sizeof(x))
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define ll long long
#define MOD 1000000007
#define gc getchar_unlocked
struct Edge{ int v, w; };

int main(){

	ll int t,l,r,sum,a,d,n;
	scanf("%lld", &t);
	REP(tc, t){
		scanf("%lld%lld%lld", &l,&r,&sum);
		n = 2 * sum / (l + r);
		d = (r - l) / (n - 5);
		a = l - 2 * d;
		printf("%lld\n", n);
		REP(i, n) printf("%lld ", a + i*d);
		puts("");
	}
	return 0;
}

//Solved