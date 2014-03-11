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

struct HealthFood {
	vector <int> selectMeals(vector <int> protein, vector <int> carbs, vector <int> fat, vector <string> dp) {
		vector< vector<int> > m(fat.size(), vector<int>(4));
		fori(i, fat) {
			m[i][0] = protein[i];
			m[i][1] = carbs[i];
			m[i][2] = fat[i];
			m[i][3] = 9 * fat[i] + 5 * (carbs[i] + protein[i]);
		}
		const string s = "pcftPCFT";
		vector<int> ret;
		fori(i, dp) {
			vector< pair< vector<int>, int > > x;
			fori(k, m) {
				vector<int> c;
				fori(j, dp[i]) {
					int d = s.find(dp[i][j]);
					c.push_back(m[k][d % 4] * (d / 4 ? -1 : 1));
				}
				x.push_back(make_pair(c, k));
			}
			srt(x);
			ret.push_back(x[0].second);
		}
		return ret;
	}
};
