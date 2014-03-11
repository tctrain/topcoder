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

struct Cafeteria {
	string latestTime(vector <int> offset, vector <int> walkingTime, vector <int> drivingTime) {
		int mn = -100000;
		fori(i, offset) {
			int t = 150 - drivingTime[i];
			while (offset[i] != (t % 10 + 10) % 10) --t;
			t -= walkingTime[i];
			mn = max(mn, t);
		}
		mn = (mn % 720 + 720) % 720;
		stringstream ss;
		int h = mn / 60;
		if (h == 0) h = 12;
		mn %= 60;
		if (h < 10) ss << '0'; ss << h << ':';
		if (mn < 10) ss << '0'; ss << mn;
		string s;
		getline(ss, s);
		return s;
	}
};
