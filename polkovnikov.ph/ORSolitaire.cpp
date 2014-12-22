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

#define fr(i,n)for(int i=0,i##e=n;i<i##e;++i)

#define ei(a,m)for(auto&a:m)if(int a##i=&a-&*begin(m)+1)if(--a##i,1)

#define big numeric_limits<int>::max()

using namespace std;

struct ORSolitaire {
	int getMinimum(vector <int> numbers, int goal) {
		int q[32] = {};
		ei(n, numbers) {
			if (~goal & n) continue;
			int nn = n, c = 0;
			while (nn) {
				if (nn % 2) ++q[c];
				nn /= 2;
				++c;
			}
		}
		int mn = big;
		vector<int> gg(32);
		int c = 0;
		while (goal) {
			gg[c++] = goal % 2;
			goal /= 2;
		}
		fr(i, 32) if (gg[i]) {
			mn = min(mn, q[i]);
		}
		return mn;
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
bool KawigiEdit_RunTest(int testNum, vector <int> p0, int p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}" << "," << p1;
	cout << "]" << endl;
	ORSolitaire *obj;
	int answer;
	obj = new ORSolitaire();
	clock_t startTime = clock();
	answer = obj->getMinimum(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p2 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
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
	
	vector <int> p0;
	int p1;
	int p2;
	
	// ----- test 0 -----
	disabled = false;
	p0 = {1,2,4};
	p1 = 7;
	p2 = 1;
	all_right = (disabled || KawigiEdit_RunTest(0, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 1 -----
	disabled = false;
	p0 = {1,2,4,7,8};
	p1 = 7;
	p2 = 2;
	all_right = (disabled || KawigiEdit_RunTest(1, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 2 -----
	disabled = false;
	p0 = {12571295,2174218,2015120};
	p1 = 1;
	p2 = 0;
	all_right = (disabled || KawigiEdit_RunTest(2, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 3 -----
	disabled = false;
	p0 = {5,2,4,52,62,9,8,3,1,11,6};
	p1 = 11;
	p2 = 3;
	all_right = (disabled || KawigiEdit_RunTest(3, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 4 -----
	disabled = false;
	p0 = {503,505,152,435,491,512,1023,355,510,500,502,255,63,508,509,511,60,250,254,346};
	p1 = 510;
	p2 = 5;
	all_right = (disabled || KawigiEdit_RunTest(4, p0, p1, true, p2) ) && all_right;
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
// PROBLEM STATEMENT
// Note that the memory limit for all tasks in this SRM is 256 MB.
// This problem statement contains subscripts that may not display properly if viewed outside of the applet.
// 
// Manao is playing a solitaire game called OR-solitaire. In this game, the player starts with a number X = 0 and should obtain the number goal in one or more moves. The set of valid moves is determined by a vector <int> numbers. In each move, the player chooses some element of numbers and replaces X with the bitwise OR of X and the chosen element.
// 
// Fox Ciel wants Manao to stop playing OR-solitaire and move on with his life. She decided to erase some of the elements from numbers in such a way that it becomes impossible to complete the game. Return the minimum number of elements that need to be removed to achieve this.
// 
// DEFINITION
// Class:ORSolitaire
// Method:getMinimum
// Parameters:vector <int>, int
// Returns:int
// Method signature:int getMinimum(vector <int> numbers, int goal)
// 
// 
// NOTES
// -If a and b are single bits then a | b is defined as max(a, b). For two integers, A and B, in order to calculate A | B, they need to be represented in binary: A = (an...a1)2, B = (bn...b1)2 (if the lengths of their representations are different, the shorter one is prepended with the necessary number of leading zeroes). Then A | B = C = (cn...c1)2, where ci = ai | bi. For example, 10 | 3 = (1010)2 | (0011)2 = (1011)2 = 11.
// 
// 
// CONSTRAINTS
// -numbers will contain between 1 and 50 elements, inclusive.
// -Each element of numbers will be between 1 and 1,000,000,000.
// -The elements in numbers will be distinct.
// -goal will be between 1 and 1,000,000,000.
// 
// 
// EXAMPLES
// 
// 0)
// {1, 2, 4}
// 7
// 
// Returns: 1
// 
// The goal of the game is to obtain X = 7 from X = 0. The possible moves are to replace X with bitwise OR of X and 1, bitwise OR of X and 2 and bitwise OR of X and 4. X = 7 can be obtained only by using each of the three moves at least once, so removing any single element from numbers will make the game impossible to finish.
// 
// 1)
// {1, 2, 4, 7, 8}
// 7
// 
// Returns: 2
// 
// In this example, Fox Ciel should remove the number 7 and one of the numbers 1, 2, 4.
// 
// 2)
// {12571295, 2174218, 2015120}
// 1
// 
// Returns: 0
// 
// There is no need to remove elements from numbers, since the game cannot be completed in its initial version.
// 
// 3)
// {5,2,4,52,62,9,8,3,1,11,6}
// 11
// 
// Returns: 3
// 
// 
// 
// 4)
// {503, 505, 152, 435, 491, 512, 1023, 355, 510, 500, 502, 255, 63, 508, 509, 511, 60, 250, 254, 346}
// 510
// 
// Returns: 5
// 
// 
// 
// END KAWIGIEDIT TESTING//Powered by KawigiEdit-pf 2.3.0
//With unused code cleaner (beta) by ahmed_aly