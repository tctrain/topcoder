#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <functional>
#include <utility>
#include <sstream>
#include <iostream>
#include <cmath>
#include <ctime>
#include <limits>
#define all(a)a.begin(),a.end()
#define forn(i,n)for(int i=0,i##e=n;i<i##e;++i)
#define fori(i,m)forn(i,m.size())
#define each(i,m)for(typeof(m.begin())i=m.begin(),i##e=m.end();i!=i##e;++i)
#define sort(s)sort(all(s))
using namespace std;

struct TheProgrammingContestDivTwo {
	vector <int> find(int x, vector <int> v) {
		sort(v);
		int s, c, e;
		s = c = e = 0;
		fori(i, v) {
			if (e + v[i] > x) break;
			e += v[i];
			s += e;
			++c;
		}
		vector<int> r(2);
		r[0] = c, r[1] = s;
		return r;
	}
};
