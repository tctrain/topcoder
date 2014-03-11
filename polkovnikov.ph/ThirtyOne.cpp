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

struct ThirtyOne {
	int findWinner(vector <string> hands) {
		vector<pair<int, int>> sc;
		ec(i, hands) {
			stringstream ss;
			ss << hands[i];
			int score = 0;
			int ace = 0;
			vector<string> x;
			fr(i, 3) {
				string s;
				ss >> s;
				x.push_back(s);
				if (string("JQK").find(s) != string::npos) {
					score += 10;
				} else if (s == "A") {
					++ace;
				} else {
					stringstream ss;
					ss << s;
					int x;
					ss >> x;
					score += x;
				}
			}
			fr (i, ace)
				score += score + 11 > 31 ? 1 : 11;
			if (x[0] == x[1] && x[1] == x[2]) {
				score = 61;
			} else {
				score *= 2;
			}
			sc.push_back(make_pair(-score, i));
		}
		srt(sc);
		return sc[0].second;
	}
};


//Powered by [KawigiEdit] 2.0!
