#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <tuple>
#define fr(i,n)for(int i=0,i##e=n;i<i##e;++i)
#define ec(i,m)fr(i,m.size())
#define srt(v)sort(v.begin(),v.end())
using namespace std;

struct VolumeGuess {
	int correctVolume(vector <string> queries, int numberOfBoxes, int ithBox) {
		vector<tuple<int, int, int>> v;
		set<int> vals;
		ec(i, queries) {
			stringstream ss;
			ss << queries[i];
			int x, y, z;
			char c;
			ss >> x >> c >> y >> c >> z;
			v.push_back(make_tuple(x, y, z));
			vals.insert(z);
		}
		vector<int> w;
		for (set<int>::iterator it = vals.begin(), iend = vals.end(); it != iend; ++it)
			w.push_back(*it);
		srt(w);
		while (w.size() < numberOfBoxes) {
			w.push_back(w.back() + 1);
		}
		do {
			bool fits = true;
			ec(i, v) {
				if (min(w[get<0>(v[i]) - 1], w[get<1>(v[i]) - 1]) != get<2>(v[i])) {
					fits = false;
					break;
				}
			}
			if (fits) {
				return w[ithBox - 1];
			}
		} while (next_permutation(w.begin(), w.end()));
		return 0;
	}
};


//Powered by [KawigiEdit] 2.0!
