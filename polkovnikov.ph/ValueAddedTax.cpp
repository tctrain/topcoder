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

struct ValueAddedTax {
	double calculateFinalPrice(string product, int price, vector <string> food) {
		set<string> f; ei(a, food) f.insert(a);
		return f.find(product) != f.end() ? price * 1.10 : price * 1.18;
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
bool KawigiEdit_RunTest(int testNum, string p0, int p1, vector <string> p2, bool hasAnswer, double p3) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"" << "," << p1 << "," << "{";
	for (int i = 0; int(p2.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p2[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	ValueAddedTax *obj;
	double answer;
	obj = new ValueAddedTax();
	clock_t startTime = clock();
	answer = obj->calculateFinalPrice(p0, p1, p2);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p3 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == answer && fabs(p3 - answer) <= 1e-9 * max(1.0, fabs(p3));
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
	int p1;
	vector <string> p2;
	double p3;
	
	// ----- test 0 -----
	disabled = false;
	p0 = "milk";
	p1 = 1;
	p2 = {"bread","butter","milk"};
	p3 = 1.1;
	all_right = (disabled || KawigiEdit_RunTest(0, p0, p1, p2, true, p3) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 1 -----
	disabled = false;
	p0 = "car";
	p1 = 100;
	p2 = {"bread","butter","milk"};
	p3 = 118.0;
	all_right = (disabled || KawigiEdit_RunTest(1, p0, p1, p2, true, p3) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 2 -----
	disabled = false;
	p0 = "abc";
	p1 = 57;
	p2 = {"a","b","c"};
	p3 = 67.25999999999999;
	all_right = (disabled || KawigiEdit_RunTest(2, p0, p1, p2, true, p3) ) && all_right;
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
