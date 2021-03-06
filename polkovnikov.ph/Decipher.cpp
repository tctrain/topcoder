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

struct Decipher {
	vector <string> decipher(vector <string> encoded, string frequencyOrder) {
		map<int, int> c;
		fori(j, encoded)
			fori(i, encoded[j])
				if ('A' <= encoded[j][i] && encoded[j][i] <= 'Z')
					++c[encoded[j][i] - 'A'];
		vector< pair<int, char> > d;
		forn(i, 26)
			if (c[i])
				d.push_back(make_pair(-c[i], i + 'A'));
		srt(d);
		map<char, char> m;
		fori(i, frequencyOrder)
			m[d[i].second] = frequencyOrder[i];
		fori(i, encoded)
			fori(j, encoded[i])
				if ('A' <= encoded[i][j] && encoded[i][j] <= 'Z')
					encoded[i][j] = m[encoded[i][j]];
		return encoded;
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <string> p0, string p1, bool hasAnswer, vector <string> p2) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}" << "," << "\"" << p1 << "\"";
	cout << "]" << endl;
	Decipher *obj;
	vector <string> answer;
	obj = new Decipher();
	clock_t startTime = clock();
	answer = obj->decipher(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "{";
		for (int i = 0; int(p2.size()) > i; ++i) {
			if (i > 0) {
				cout << ",";
			}
			cout << "\"" << p2[i] << "\"";
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
		if (answer.size() != p2.size()) {
			res = false;
		} else {
			for (int i = 0; int(answer.size()) > i; ++i) {
				if (answer[i] != p2[i]) {
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
	
	vector <string> p0;
	string p1;
	vector <string> p2;
	
	{
	// ----- test 0 -----
	string t0[] = {"ABBBCC"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "XYZ";
	string t2[] = {"ZXXXYY"};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"RZLW"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "CEFD";
	string t2[] = {"EDCF"};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"XX YYY Z YYY XX","WWWWWZWWWWW"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "ETMQ";
	string t2[] = {"MM TTT Q TTT MM","EEEEEQEEEEE"};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {" X ",""," ","  ","   "};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "B";
	string t2[] = {" B ",""," ","  ","   "};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	string t0[] = {"RAZVLHAR KNW CNR","HEA HNFMNSAR NFAK"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "EORTPNFHSCDIWG";
	string t2[] = {"REGISTER NOW FOR","THE TOPCODER OPEN"};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
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
// 
// A substitution cipher is a simple method of encoding text in which all occurrences of each letter are replaced by another.  For example, consider the following substitution table:
// 
// 
// 
//     original: A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
//     encoded:  P X M S A C Z E V G I J D K N F O R L H T U W B Y Q
// 
// 
// 
// The message "REGISTER NOW FOR THE TOPCODER OPEN" would be encoded as "RAZVLHAR KNW CNR HEA HNFMNSAR NFAK" by finding each letter in the top row and replacing it with the letter directly beneath.
// 
// 
// 
// Substitution ciphers are relatively easy to break.  One method takes advantage of the fact that some letters are used more frequently than others.  For example, in English text, the letter 'E' occurs more often than any other.  It is reasonable to guess that the most common letter in the encoded text represents 'E'.
// 
// 
// 
// You will be given the encoded text as a vector <string> encoded.  You will also be given a string frequencyOrder containing all the letters that occur in the unencoded text sorted in decreasing order by frequency.
// 
// You are to attempt to decipher the encoded text by replacing the most frequent letter in encoded
// with frequencyOrder[0], the second-most frequent letter in encoded with frequencyOrder[1], and so on.  If some letters occur equally frequently in encoded, replace the letter that occurs first alphabetically with the lower-index character in frequencyOrder.
// 
// 
// 
// Your method should return a vector <string> with exactly the same number of elements, and characters in each element, as encoded.  Replace only letters, preserving spaces.
// 
// 
// DEFINITION
// Class:Decipher
// Method:decipher
// Parameters:vector <string>, string
// Returns:vector <string>
// Method signature:vector <string> decipher(vector <string> encoded, string frequencyOrder)
// 
// 
// CONSTRAINTS
// -encoded will contain between 1 and 50 elements, inclusive.
// -Each element of encoded will be between 0 and 50 characters long, inclusive.
// -Each element of encoded will contain only uppercase letters ('A'-'Z') and spaces.
// -encoded will contain at least one letter.
// -frequencyOrder will contain between 1 and 26 characters, inclusive.
// -frequencyOrder will contain only uppercase letters ('A'-'Z').
// -frequencyOrder will not have any duplicate letters.
// -encoded and frequencyOrder will contain the same number of distinct letters.
// 
// 
// EXAMPLES
// 
// 0)
// { "ABBBCC" }
// "XYZ"
// 
// Returns: {"ZXXXYY" }
// 
// The most common letter in the encoded text is 'B', so it gets replaced by 'X'.  The second-most common letter is 'C', so it gets replaced by 'Y'.  Finally, the lone 'A' gets replaced by 'Z'.
// 
// 1)
// { "RZLW" }
// "CEFD"
// 
// Returns: {"EDCF" }
// 
// All letters occur equally frequently.  So, the first letter alphabetically, 'L', gets replaced by the first letter in frequencyOrder, 'C'.
// 
// 2)
// { "XX YYY Z YYY XX",
//   "WWWWWZWWWWW" }
// "ETMQ"
// 
// Returns: {"MM TTT Q TTT MM", "EEEEEQEEEEE" }
// 
// 3)
// { " X ",
//   "",
//   " ",
//   "  ",
//   "   " }
// "B"
// 
// Returns: {" B ", "", " ", "  ", "   " }
// 
// 4)
// { "RAZVLHAR KNW CNR",
//   "HEA HNFMNSAR NFAK" }
// "EORTPNFHSCDIWG"
// 
// Returns: {"REGISTER NOW FOR", "THE TOPCODER OPEN" }
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
