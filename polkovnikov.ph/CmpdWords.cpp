#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <tuple>
#define fr(i,n)for(int i=0,i##e=n;i<i##e;++i)
#define ec(i,m)fr(i,m.size())
#define srt(v)sort(v.begin(),v.end())
using namespace std;

struct CmpdWords {
	int ambiguous(vector <string> d) {
		map<string, int> e;
		ec(i, d) ++e[d[i]];
		ec(i, d) ec(j, d) if (i != j) ++e[d[i] + d[j]];
		int to = 0;
		for (auto & i : e) if (i.second > 1) ++to;
		return to;
	}
};


//Powered by [KawigiEdit] 2.0!
