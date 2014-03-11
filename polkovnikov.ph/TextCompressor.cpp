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

struct TextCompressor {
	string longestRepeat(string s) {
		string r;
		ec(j, s) {
			fr(i, j + 1) {
				string t = s.substr(i, j - i + 1);
				if (s.substr(j + 1).find(t) != string::npos) {
					if (r.size() < t.size())
						r = t;
				}
			}
		}
		return r;
	}
};


//Powered by [KawigiEdit] 2.0!
