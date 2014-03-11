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

struct StreetParking {
	int freeParks(string s) {
		const int q = s.size();
		int c = 0;
		fori(i, s) {
			if (s[i] != '-') continue;
			if (i > 0 && s[i-1] == 'S') continue;
			if (i+1 < q && (s[i+1] == 'B' || s[i+1] == 'S')) continue;
			if (i+2 < q && s[i+2] == 'B') continue;
			++c;
		}
		return c;
	}
};


//
