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
#define srt(s)sort(all(s))
using namespace std;

struct fun {
	bool operator () (string x, string y) {
		return x.size() > y.size();
	}
};

struct TheLotteryBothDivs {
	double find(vector <string> gs) {
		vector<char> bad(gs.size());
		fori(i, gs) reverse(all(gs[i]));
		sort(all(gs), fun());
		fori(i, gs) forn(j, i) if (!bad[j])
			if (gs[i].size() <= gs[j].size())
				if (gs[j].substr(0, gs[i].size()) == gs[i])
					bad[j] = true;
		int p[10]; forn(i, 10) p[i] = i == 0 ? 1 : p[i-1] * 10;
		int c = 0;
		fori(i, gs) if (!bad[i]) c += p[9 - gs[i].size()];
		return double(c) / 1e9;
	}
};


//
