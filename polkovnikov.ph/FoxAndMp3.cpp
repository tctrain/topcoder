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
#include <iterator>
#define all(a)a.begin(),a.end()
#define forn(i,n)for(int i=0,i##e=n;i<i##e;++i)
#define fori(i,m)forn(i,m.size())
#define each(i,m)for(typeof(m.begin())i=m.begin(),i##e=m.end();i!=i##e;++i)
#define srt(s)sort(all(s))
using namespace std;

struct FoxAndMp3 {
	vector <string> playList(int n) {
		vector<int> r;
		int m = 1;
		if (n == 1000000000)
			r.push_back(1000000000);
		forn (i, 9) {
			forn (j, 10) forn (k, 50) {
				int x = j * m + k;
				if (1 <= x && x <= n)
					r.push_back(x);
			}
			m *= 10;
		}
		vector<string> ret(r.size());
		fori(i, r) {
			stringstream ss;
			ss << r[i] << ".mp3";
			ss >> ret[i];
		}
		srt(ret);
		ret.erase(unique(all(ret)), ret.end());
		ret.resize(min(50, int(ret.size())));
		return ret;
	}
};


//
