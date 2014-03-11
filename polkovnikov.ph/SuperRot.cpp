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

struct SuperRot {
	string decoder(string m) {
		fori(i, m) {
			if ('0' <= m[i] && m[i] <= '9')
				m[i] = (m[i] - '0' + 5) % 10 + '0';
			else if ('A' <= m[i] && m[i] <= 'Z')
				m[i] = (m[i] - 'A' + 13) % 26 + 'A';
			else if ('a' <= m[i] && m[i] <= 'z')
				m[i] = (m[i] - 'a' + 13) % 26 + 'a';
		}
		return m;
	}
};


//
