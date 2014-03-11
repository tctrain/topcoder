#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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

using namespace std;

class KiloMan {
public:
	int hitsTaken(vector <int> pattern, string jumps) {
		int hits = 0;
		for (int i = 0, ilen = pattern.size(); i < ilen; ++i) {
			if ((pattern[i] == 1 || pattern[i] == 2) && jumps[i] == 'S')
				++hits;
			else if (pattern[i] > 2 && jumps[i] == 'J')
				++hits;
		}
		return hits;
	}
};



//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
//With unused code cleaner (beta) by ahmed_aly
