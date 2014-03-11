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

struct SRMCards {
	int maxTurns(vector <int> cards) {
		srt(cards);
		int i = 0, ie = cards.size(), r = 0;
		while (i < ie) {
			int q = 1; ++i;
			while (cards[i] == cards[i-1] + 1 && i < ie)
				++q, ++i;
			r += q / 2 + !!(q % 2);
		}
		return r;
	}
};


//
