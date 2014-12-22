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

struct BinaryCode {
	vector <string> decode(string m) {
		const int q = m.size();
		vector<string> r(2, m);
		if (q == 1) {
			vector<string> r2(2, "NONE");
			if (m[0] == '0')
				r2[0] = "0";
			else if (m[0] == '1')
				r2[1] = "1";
			return r2;
		}
		forn(i, 2) {
			bool f = true;
			fori(j, m) {
				int s;
				if (j == 0) {
					r[i][0] = '0' + i;
					continue;
				} else if (j == 1) {
					s = m[0] - r[i][0];
				} else {
					s = m[j-1] - r[i][j-1] - r[i][j-2] + '0';
				}
				if (s != 0 && s != 1) {
					f = false;
					break;
				}
				r[i][j] = s + '0';
			}
			if (q >= 2 && m[q-1] != r[i][q-1] + r[i][q-2] - '0')
				f = false;
			if (!f) r[i] = "NONE";
		}
		return r;
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, string p0, bool hasAnswer, vector <string> p1) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"";
	cout << "]" << endl;
	BinaryCode *obj;
	vector <string> answer;
	obj = new BinaryCode();
	clock_t startTime = clock();
	answer = obj->decode(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "{";
		for (int i = 0; int(p1.size()) > i; ++i) {
			if (i > 0) {
				cout << ",";
			}
			cout << "\"" << p1[i] << "\"";
		}
		cout << "}" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "{";
	for (int i = 0; int(answer.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << answer[i] << "\"";
	}
	cout << "}" << endl;
	if (hasAnswer) {
		if (answer.size() != p1.size()) {
			res = false;
		} else {
			for (int i = 0; int(answer.size()) > i; ++i) {
				if (answer[i] != p1[i]) {
					res = false;
				}
			}
		}
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
	vector <string> p1;
	
	if (all_right) {
		cout << "You're a stud (at least on the example cases)!" << endl;
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// PROBLEM STATEMENT
// Let's say you have a binary string such as the following:
// 
// 011100011
// 
// One way to encrypt this string is to add to each digit the sum of its adjacent digits.  For example, the above string would become:
// 
// 123210122
// 
// In particular, if P is the original string, and Q is the encrypted string, then Q[i] = P[i-1] + P[i] + P[i+1] for all digit positions i.  Characters off the left and right edges of the string are treated as zeroes.
// 
// An encrypted string given to you in this format can be decoded as follows (using 123210122 as an example):
// 
// Assume P[0] = 0.
// Because Q[0] = P[0] + P[1] = 0 + P[1] = 1, we know that P[1] = 1.
// Because Q[1] = P[0] + P[1] + P[2] = 0 + 1 + P[2] = 2, we know that P[2] = 1.
// Because Q[2] = P[1] + P[2] + P[3] = 1 + 1 + P[3] = 3, we know that P[3] = 1.
// Repeating these steps gives us P[4] = 0, P[5] = 0, P[6] = 0, P[7] = 1, and P[8] = 1.
// We check our work by noting that Q[8] = P[7] + P[8] = 1 + 1 = 2.  Since this equation works out, we are finished, and we have recovered one possible original string.
// 
// Now we repeat the process, assuming the opposite about P[0]:
// 
// Assume P[0] = 1.
// Because Q[0] = P[0] + P[1] = 1 + P[1] = 0, we know that P[1] = 0.
// Because Q[1] = P[0] + P[1] + P[2] = 1 + 0 + P[2] = 2, we know that P[2] = 1.
// Now note that Q[2] = P[1] + P[2] + P[3] = 0 + 1 + P[3] = 3, which leads us to the conclusion that P[3] = 2.  However, this violates the fact that each character in the original string must be '0' or '1'.  Therefore, there exists no such original string P where the first digit is '1'.
// 
// Note that this algorithm produces at most two decodings for any given encrypted string.  There can never be more than one possible way to decode a string once the first binary digit is set.
// 
// Given a string message, containing the encrypted string, return a vector <string> with exactly two elements.  The first element should contain the decrypted string assuming the first character is '0'; the second element should assume the first character is '1'.  If one of the tests fails, return the string "NONE" in its place.  For the above example, you should return {"011100011", "NONE"}.
// 
// DEFINITION
// Class:BinaryCode
// Method:decode
// Parameters:string
// Returns:vector <string>
// Method signature:vector <string> decode(string message)
// 
// 
// CONSTRAINTS
// -message will contain between 1 and 50 characters, inclusive.
// -Each character in message will be either '0', '1', '2', or '3'.
// 
// 
// EXAMPLES
// 
// 0)
// "123210122"
// 
// Returns: { "011100011",  "NONE" }
// 
// The example from above.
// 
// 1)
// "11"
// 
// Returns: { "01",  "10" }
// 
// We know that one of the digits must be '1', and the other must be '0'.  We return both cases.
// 
// 2)
// "22111"
// 
// Returns: { "NONE",  "11001" }
// 
// Since the first digit of the encrypted string is '2', the first two digits of the original string must be '1'.  Our test fails when we try to assume that P[0] = 0.
// 
// 3)
// "123210120"
// 
// Returns: { "NONE",  "NONE" }
// 
// This is the same as the first example, but the rightmost digit has been changed to something inconsistent with the rest of the original string.  No solutions are possible.
// 
// 4)
// "3"
// 
// Returns: { "NONE",  "NONE" }
// 
// 5)
// "12221112222221112221111111112221111"
// 
// Returns: { "01101001101101001101001001001101001",  "10110010110110010110010010010110010" }
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!