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

struct Hyphenated {
	static bool lett(char c) {
		return 'a' <= c && c <= 'z' || 'A' <= c && c <= 'Z';
	}
	double avgLength(vector <string> lines) {
		string s;
		fori(i, lines) {
			int b = lines[i].size()-1;
			if (b > 0 && lett(lines[i][b-1]) && lines[i][b] == '-')
				lines[i][b] = '@';
			else lines[i] += '/';
			s += lines[i];
		}
		int wl = 0, wc = 0, cl = 0;
		fori(i, s) {
			if (lett(s[i])) {
				++cl;
			} else if (s[i] == '@') {
				// Same words, but doesn't count as a letter
			} else {
				if (cl > 0) {
					wl += cl;
					++wc;
					cl = 0;
				}
			}
		}
		if (cl > 0) {
			wl += cl;
			++wc;
		}
		return double(wl) / wc;
	}
};
