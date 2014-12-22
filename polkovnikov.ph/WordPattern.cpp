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

struct WordPattern {
	long long countWords(string word) {
		long long m = 1;
		forn(i, word.size()+1) m *= 2;
		m -= 4;
		return word.size() == 1 ? 1 : m;
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, string p0, bool hasAnswer, long long p1) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"";
	cout << "]" << endl;
	WordPattern *obj;
	long long answer;
	obj = new WordPattern();
	clock_t startTime = clock();
	answer = obj->countWords(p0);
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
	
	string p0;
	long long p1;
	
	{
	// ----- test 0 -----
	p0 = "HELLO";
	p1 = 60ll;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = "TC";
	p1 = 4ll;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = "ABCDEFGHIJKLMNOPQRST";
	p1 = 2097148ll;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJ";
	p1 = 137438953468ll;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
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
// One day, I started writing out the following patterns (The procedure for constructing the pattern is deliberately not given, you must infer the procedure through the examples):
// 
// Input string: "HELLO" (quotes for clarity only)
// 
// Pattern:      O
//              OLO
//             OLLLO
//            OLLELLO
//           OLLEHELLO
//            OLLELLO
//             OLLLO
//              OLO
//               O
// 
// 
// Input string: "TC" (quotes for clarity only)
// 
// Pattern:      C
//              CTC
//               C   
// 
// 
// Input string: "ABCD" (quotes for clarity only)
// 
// Pattern:      D
//              DCD
//             DCBCD
//            DCBABCD
//             DCBCD
//              DCD
//               D
// 
// 
// After constructing the patterns, I noticed something interesting. Starting with the first letter of the input string (which appears only once in the very center of the pattern), I can trace a path outwards toward the edges, spelling out the original input string. Of course, I only move Up, Down, Left and Right from any letter. I'm now perplexed because I want to know how many ways the original input string can be spelled out in the pattern. I must always end at an edge, and I can't go over one letter more than once while spelling a word.
// 
// 
// Create a class WordPattern containing the method countWords which takes a string word as input. The method should return a long long which is the number of ways the original input can be spelled out in the pattern according to my rules.
// 
// DEFINITION
// Class:WordPattern
// Method:countWords
// Parameters:string
// Returns:long long
// Method signature:long long countWords(string word)
// 
// 
// NOTES
// -Remember, I only move Up, Down, Left and Right from any letter to the next letter and never use a letter twice.
// 
// 
// CONSTRAINTS
// -word will contain between 1 and 50 characters inclusive.
// -word will contain only uppercase letters ('A'-'Z').
// 
// 
// EXAMPLES
// 
// 0)
// "HELLO"
// 
// Returns: 60
// 
// 1)
// "TC"
// 
// Returns: 4
// 
// 2)
// "ABCDEFGHIJKLMNOPQRST"
// 
// Returns: 2097148
// 
// 3)
// "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJ"
// 
// Returns: 137438953468
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!