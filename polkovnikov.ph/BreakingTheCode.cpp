#include <string>
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
#include <iterator>
#include <tuple>
#include <regex>
#include <array>
#include <valarray>
#define all(v)begin(v),end(v)
#define dump(v)copy(all(v),ostream_iterator<decltype(*v.begin())>(cout,"\n"))
#define rg(i,a,b)for(int i=a,i##e=b;i<i##e;++i)
#define fr(i,n)for(int i=0,i##e=n;i<i##e;++i)
#define rf(i,n)for(int i=n-1;i>=0;--i)
#define ei(a,m)for(auto&a:m)if(int a##i=&a-&*begin(m)+1)if(--a##i,1)
#define sz(v)int(v.size())
#define sr(v)sort(all(v))
#define rs(v)sort(all(v),greater<int>())
#define rev(v)reverse(all(v))
#define eb emplace_back
#define stst stringstream
#define big numeric_limits<int>::max()
#define g(t,i)get<i>(t)
#define cb(v,w)copy(all(v),back_inserter(w))
#define uni(v)sort(all(v));v.erase(unique(all(v)),end(v))
#define vt(...)vector<tuple<__VA_ARGS__>>
#define smx(a,b)a=max(a,b)
#define smn(a,b)a=min(a,b)
#define words(w,q)vector<string>w;[&w](string&&s){stringstream u(s);string r;while(u>>r)w.eb(r);}(q);
#define digits(d,n,s)vector<int>d;[&d](int m){while(m)d.eb(m%s),m/=s;}(n);
typedef long long ll;
using namespace std;

struct BreakingTheCode {
	string decodingEncoding(string code, string m) {
		string r;
		if (isdigit(m[0])) {
			ei(a, m) if (ai % 2) {
				int p = m[ai - 1];
				r += code[(p - '0') * 10 + a - '0' - 1];
			}
		} else {
			stst ss;
			ei(a, m) {
				int x = code.find(a) + 1;
				ss << char(x / 10 + '0') << char(x % 10 + '0');
			}
			getline(ss, r);
		}
		return r;
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit-pf 2.3.0
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cmath>
using namespace std;
bool KawigiEdit_RunTest(int testNum, string p0, string p1, bool hasAnswer, string p2) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"" << "," << "\"" << p1 << "\"";
	cout << "]" << endl;
	BreakingTheCode *obj;
	string answer;
	obj = new BreakingTheCode();
	clock_t startTime = clock();
	answer = obj->decodingEncoding(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p2 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
	if (hasAnswer) {
		res = answer == p2;
	}
	if (!res) {
		cout << "DOESN'T MATCH!!!!" << endl;
	} else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
		cout << "FAIL the timeout" << endl;
		res = false;
	} else if (hasAnswer) {
		cout << "Match :-)" << endl;
	} else {
		cout << "OK, but is it right?" << endl;
	}
	cout << "" << endl;
	return res;
}
int main() {
	bool all_right;
	bool disabled;
	bool tests_disabled;
	all_right = true;
	tests_disabled = false;
	
	string p0;
	string p1;
	string p2;
	
	// ----- test 0 -----
	disabled = false;
	p0 = "abcdefghijklmnopqrstuvwxyz";
	p1 = "test";
	p2 = "20051920";
	all_right = (disabled || KawigiEdit_RunTest(0, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 1 -----
	disabled = false;
	p0 = "abcdefghijklmnopqrstuvwxyz";
	p1 = "20051920";
	p2 = "test";
	all_right = (disabled || KawigiEdit_RunTest(1, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 2 -----
	disabled = false;
	p0 = "qesdfvujrockgpthzymbnxawli";
	p1 = "mwiizkelza";
	p2 = "19242626171202251723";
	all_right = (disabled || KawigiEdit_RunTest(2, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 3 -----
	disabled = false;
	p0 = "faxmswrpnqdbygcthuvkojizle";
	p1 = "02170308060416192402";
	p2 = "ahxpwmtvza";
	all_right = (disabled || KawigiEdit_RunTest(3, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	if (all_right) {
		if (tests_disabled) {
			cout << "You're a stud (but some test cases were disabled)!" << endl;
		} else {
			cout << "You're a stud (at least on given cases)!" << endl;
		}
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// END KAWIGIEDIT TESTING
