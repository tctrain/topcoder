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

struct SortBooks {
	bool title(string & s) {
		vector<string> ws;
		string w;
		bool f = false;
		fori(i, s) {
			if ('A' <= s[i] && s[i] <= 'Z')
				s[i] = s[i] - 'A' + 'a';
			if ('a' <= s[i] && s[i] <= 'z') {
				w += s[i];
			} else {
				if (!w.empty()) ws.push_back(w);
				w = "";
			}
		}
		if (!w.empty()) ws.push_back(w);
		if (ws.size() > 3) return true;
		fori(i, ws)
			if (ws[i] == "the" || ws[i] == "and" || ws[i] == "of")
				{ f = true; break; }
		return f;
	}
	vector <int> checkManually(vector <string> field1, vector <string> field2) {
		vector<int> r;
		fori(i, field1) {
			int c = title(field1[i]) + title(field2[i]);
			if (c != 1)
				r.push_back(i);
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
bool KawigiEdit_RunTest(int testNum, vector <string> p0, vector <string> p1, bool hasAnswer, vector <int> p2) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}" << "," << "{";
	for (int i = 0; int(p1.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p1[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	SortBooks *obj;
	vector <int> answer;
	obj = new SortBooks();
	clock_t startTime = clock();
	answer = obj->checkManually(p0, p1);
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
			cout << p2[i];
		}
		cout << "}" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "{";
	for (int i = 0; int(answer.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << answer[i];
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
	vector <string> p1;
	vector <int> p2;
	
	{
	// ----- test 0 -----
	string t0[] = {"J R R Tolkien","THE Jungle BOOK"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"THE HOBBIT","RUDYARD KIPLING"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {0};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"Scaramouche","Dan Brown","War and Peace"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"Rafael Sabatini","The Da Vinci Code","Leo Tolstoy"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {0};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"Aesop","Little Women","Hans Christian Anderson","The Arabian Nights","Peter Christian Asbornsen","Mr Poppers Penguins","Enid Bagnold","Miss Hickory","Sir James Barrie","The Wizard of OZ","Ludwig Bemelmans","The Five Chinese Brothers","Edith Nesbit Bland","The Enchanted Castle","Edith Nesbit Bland","Five Children and It","Michael Bond","The Children of Green Knowe","James Boyd","Caddie Woodlawn","Walter Brooks","The Runaway Bunny","Margaret Wise Brown","Big Red Barn","Jean De Brunhoff","Old Mother West Wind","Frances Hodgson Burnett","A Little Princess","Frances Hodgson Burnett","Mike Mulligan and His Steam Shovel","Virginia Lee Burton","The Enormous Egg","Eleanor Cameron","The Happy Orpheline","Natalie Savage Carlson","Through the Looking Glass","Miguel Cervantes","Secret of the Andes","Beverly Cleary","Henry Huggins","Elizabeth Coatsworth","The Adventures of Pinocchio","Barbara Cooney","The Little Lame Prince","Paul Creswick","The Courage of Sarah Noble","Alice Dagliesh"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"Aesops Fables","Louisa May Alcott","Fairy Tales","Hans Christian Anderson","East of the Sun and West of the Moon","Richard and Florence Atwater","National Velvet","Carolyn Bailey","Peter Pan","Frank L Baum","Madeline","Claire Huchet Bishop","The Railway Children","Edith Nesbit Bland","The Story of the Treasure Seekers","Edith Nesbit Bland","A Bear Called Paddington","Lucy Boston","Drums","Carol Rylie Brink","Freddy the Detective","Margaret Wise Brown","The Little Fur Family","Moon Goodnight","The Story of Babar","Thornton W Burgess","Little Lord Fauntleroy","Frances Hodgson Burnett","The Secret Garden","Virginia Lee Burton","The Little House","Oliver Butterworth","The Wonderful Flight to the Mushroom Planet","Natalie Savage Carlson","The Family Under the Bridge","Lewis Carroll","Don Quixote","Ann Nolan Clark","Beezus and Ramona","Beverly Cleary","The Cat Who Went to Heaven","Carlo Collodi","Chanticleer and the Fox","Dinah Mulock Craik","Robin Hood","Alice Dagliesh","The Bears on Hemloc"
			"k Mountain"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {0,1,2,6,7,8,10,18,19,23,26,27,36,39,44};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"Lost     Horizon"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"James Hilton"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {0};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	string t0[] = {"andy rooney","joe lofthouse","Theodore Taylor"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"love of life","the arrest","Softly Wandering"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {2};
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
// You are an avid book collector, and you have dutifully catalogued your books on your computer.  You had just entered your last book when you discovered that sometimes you put the author in the first field and the title in the second field, and sometimes you put the title in the first field and the author in the second field.  You decide to write a program to sort out the list such that the author comes first, then the title of the book.
// To sort your list, you decide to mark a field as the title if it satisfies at least one of the following criteria:
// 
// - It contains at least one of the following words: "the", "and", or "of".
// - It contains more than 3 space-delimited words.
// 
// You figure that following these rules will sort most of your books, but you need a routine to check the rest of them manually so you can sort them yourself.
// You are given a vector <string> field1, and a vector <string> field2.  Corresponding elements of field1 and field2 refer to the two catalogued fields of a single book.  You are to return a vector <int> containing the 0-based indexes of the books in ascending order that need to be checked manually.  A book must be checked manually if either both of its fields are titles or neither of its fields are titles according to the rules.
// 
// DEFINITION
// Class:SortBooks
// Method:checkManually
// Parameters:vector <string>, vector <string>
// Returns:vector <int>
// Method signature:vector <int> checkManually(vector <string> field1, vector <string> field2)
// 
// 
// NOTES
// -When checking for "the", "and", and "of", note that they are case insensitive.Thus "the" = "tHE" = "THE", etc.
// 
// 
// CONSTRAINTS
// -field1 will contain between 1 and 50 elements, inclusive.
// -field2 will contain an equal number of elements as field1.
// -Each element in field1 and field2 will contain between 1 and 50 characters, inclusive.
// -field1 and field2 will consist only of letters ('a'-'z', 'A'-'Z') and spaces.
// -field1 and field2 will have no leading or trailing spaces.
// 
// 
// EXAMPLES
// 
// 0)
// { "J R R Tolkien", "THE Jungle BOOK" }
// { "THE HOBBIT", "RUDYARD KIPLING" }
// 
// Returns: {0 }
// 
// Both "J R R Tolkien" and "THE HOBBIT" are considered titles because "J R R Tolkien" is 4 words and "THE HOBBIT" contains "THE".  Therefore it needs to be checked manually.
// 
// 1)
// { "Scaramouche", "Dan Brown", "War and Peace" }	
// { "Rafael Sabatini", "The Da Vinci Code", "Leo Tolstoy" }
// 
// Returns: {0 }
// 
// The first book needs to be checked, because there is not enough information to tell which one is the title.
// 
// 2)
// { "Aesop", "Little Women", "Hans Christian Anderson", "The Arabian Nights", 
//   "Peter Christian Asbornsen", "Mr Poppers Penguins", "Enid Bagnold", "Miss Hickory",
//   "Sir James Barrie", "The Wizard of OZ", "Ludwig Bemelmans", "The Five Chinese Brothers",
//   "Edith Nesbit Bland", "The Enchanted Castle", "Edith Nesbit Bland",
//   "Five Children and It", "Michael Bond", "The Children of Green Knowe",
//   "James Boyd", "Caddie Woodlawn", "Walter Brooks", "The Runaway Bunny",
//   "Margaret Wise Brown", "Big Red Barn", "Jean De Brunhoff",
//   "Old Mother West Wind", "Frances Hodgson Burnett", "A Little Princess",
//   "Frances Hodgson Burnett", "Mike Mulligan and His Steam Shovel",
//   "Virginia Lee Burton", "The Enormous Egg", "Eleanor Cameron",
//   "The Happy Orpheline", "Natalie Savage Carlson", "Through the Looking Glass",
//   "Miguel Cervantes", "Secret of the Andes", "Beverly Cleary", "Henry Huggins",
//   "Elizabeth Coatsworth", "The Adventures of Pinocchio", "Barbara Cooney",
//   "The Little Lame Prince", "Paul Creswick", "The Courage of Sarah Noble",
//   "Alice Dagliesh" }
// { "Aesops Fables", "Louisa May Alcott", "Fairy Tales", "Hans Christian Anderson",
//   "East of the Sun and West of the Moon", "Richard and Florence Atwater",
//   "National Velvet", "Carolyn Bailey", "Peter Pan", "Frank L Baum", "Madeline",
//   "Claire Huchet Bishop", "The Railway Children", "Edith Nesbit Bland",
//   "The Story of the Treasure Seekers", "Edith Nesbit Bland", "A Bear Called Paddington",
//   "Lucy Boston", "Drums", "Carol Rylie Brink", "Freddy the Detective",
//   "Margaret Wise Brown", "The Little Fur Family", "Moon Goodnight", "The Story of Babar",
//   "Thornton W Burgess", "Little Lord Fauntleroy", "Frances Hodgson Burnett",
//   "The Secret Garden", "Virginia Lee Burton", "The Little House", "Oliver Butterworth",
//   "The Wonderful Flight to the Mushroom Planet", "Natalie Savage Carlson",
//   "The Family Under the Bridge", "Lewis Carroll", "Don Quixote", "Ann Nolan Clark",
//   "Beezus and Ramona", "Beverly Cleary", "The Cat Who Went to Heaven", "Carlo Collodi",
//   "Chanticleer and the Fox", "Dinah Mulock Craik", "Robin Hood", "Alice Dagliesh",
//   "The Bears on Hemlock Mountain" }
// 
// 
// Returns: {0, 1, 2, 6, 7, 8, 10, 18, 19, 23, 26, 27, 36, 39, 44 }
// 
// 3)
// { "Lost     Horizon" }
// { "James Hilton" }
// 
// Returns: {0 }
// 
// Words in titles and/or authors may be separated by more than one space.
// 
// 4)
// { "andy rooney", "joe lofthouse", "Theodore Taylor" }
// { "love of life", "the arrest", "Softly Wandering" }
// 
// Returns: {2 }
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
