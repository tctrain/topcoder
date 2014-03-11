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

struct TheCoffeeTimeDivOne {
	long long find(int n, vector <int> tea) {
		set<int> s;
		fori(i, tea) s.insert(tea[i]);
		long long c[] = {0, 0}, t = 4 * n;
		for (int i = n; i >= 1; --i) {
			bool x = s.find(i) == s.end();
			if (c[x] % 7 == 0)
				t += 47 + 2 * i;
			++c[x];
		}
		return t;
	}
};



//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
