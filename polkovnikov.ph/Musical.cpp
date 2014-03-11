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
#include <bitset>
#define sz(m)((m).size())
#define all(a)a.begin(),a.end()
#define forn(i,n)for(int i=0,i##e=n;i<i##e;++i)
#define fori(i,m)forn(i,sz(m))
#define each(i,m)for(typeof(m.begin())i=m.begin(),i##e=m.end();i!=i##e;++i)
#define srt(s)sort(all(s))
#define dump(m)copy(all(m),ostream_iterator<typeof(m[0])>(cout,"\n"));cout<<endl
using namespace std;

struct Musical {
	string loser(int n, double time) {
		double mx = 0;
		int mxi = 0;
		forn(i, n) {
			double pos = double(i) / n + time / 10;
			pos -= int(pos);
			double mn = 1;
			forn(j, n) {
				double pos2 = double(j) / (n - 1);
				mn = min(mn, abs(pos - pos2));
			}
			if (mn > mx) {
				mx = mn;
				mxi = i;
			}
		}
		mxi = mxi == 0 ? 0 : n - mxi;
		return string(1, mxi + 'A');
	}
};



//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
