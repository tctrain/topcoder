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

struct CarrotJumping {
	string frth(int n) {
		string s;
		while (n) {
			s += '0' + n % 8;
			n /= 8;
		}
		reverse(all(s));
		return s;
	}
	int theJump(int init) {
		const int M = 1000000007;
		cout << frth(init) << endl;
		cout << frth(M) << endl;
		return 0;
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << p0;
	cout << "]" << endl;
	CarrotJumping *obj;
	int answer;
	obj = new CarrotJumping();
	clock_t startTime = clock();
	answer = obj->theJump(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p1 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p1;
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
	all_right = true;
	
	int p0;
	int p1;
	
	{
	// ----- test 0 -----
	p0 = 125000000;
	p1 = 1;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 281250001;
	p1 = 2;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 18426114;
	p1 = 58;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 4530664;
	p1 = 478;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 705616876;
	p1 = 100000;
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	p0 = 852808441;
	p1 = -1;
	all_right = KawigiEdit_RunTest(5, p0, true, p1) && all_right;
	// ------------------
	}
	
	if (all_right) {
		cout << "You're a stud (at least on the example cases)!" << endl;
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// PROBLEM STATEMENT
// Rabbits often feel hungry, so when they go out to eat carrots, they jump as quickly as possible.
// 
// 
// Initially, rabbit Hanako stands at position init. From position x, she can jump to either position 4*x+3 or 8*x+7 in a single jump. She can jump at most 100,000 times because she gets tired by jumping.
// 
// 
// Carrots are planted at position x if and only if x is divisible by 1,000,000,007 (i.e. carrots are planted at position 0, position 1,000,000,007, position 2,000,000,014, and so on). Return the minimal number of jumps required to reach a carrot. If it's impossible to reach a carrot using at most 100,000 jumps, return -1.
// 
// 
// 
// DEFINITION
// Class:CarrotJumping
// Method:theJump
// Parameters:int
// Returns:int
// Method signature:int theJump(int init)
// 
// 
// CONSTRAINTS
// -init will be between 1 and 1,000,000,006, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 125000000
// 
// Returns: 1
// 
// She can jump from 125000000 to 1000000007.
// 
// 1)
// 281250001
// 
// Returns: 2
// 
// 281250001 -> 1125000007 -> 9000000063
// 
// 2)
// 18426114
// 
// Returns: 58
// 
// 
// 
// 3)
// 4530664
// 
// Returns: 478
// 
// 
// 
// 4)
// 705616876
// 
// Returns: 100000
// 
// 5)
// 852808441
// 
// Returns: -1
// 
// She can't reach any carrot by making at most 100,000 jumps.
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!