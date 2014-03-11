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

typedef vector< pair<char, int> > vii;

struct SpamDetector {
	static vii conv(string const & s) {
		int q = 0;
		char c = 0;
		vii ret;
		fori(i, s) {
			if (s[i] == c && c != 0) {
				++q;
			} else {
				if (q > 0)
					ret.push_back(make_pair(c, q));
				q = 1;
				c = s[i];
			}
		}
		if (q > 0)
			ret.push_back(make_pair(c, q));
		return ret;
	}
	static vector<string> split(string const & s) {
		vector<string> ret;
		string w;
		fori(i, s) {
			if (s[i] != ' ') {
				w += s[i];
			} else {
				if (!w.empty()) ret.push_back(w);
				w = "";
			}
		}
		if (!w.empty()) ret.push_back(w);
		return ret;
	}
	static char tolower(char c) {
		return 'A' <= c && c <= 'Z' ? c - 'A' + 'a' : c;
	}
	static string tolowers(string const & s) {
		string t = s;
		transform(all(t), t.begin(), tolower);
		return t;
	}
	int countKeywords(string subjectLine, vector <string> kw) {
		vector<string> res = split(subjectLine);
		transform(all(res), res.begin(), tolowers);
		transform(all(kw), kw.begin(), tolowers);
		vector<vii> rc(res.size()), kc(kw.size());
		fori(i, res) rc[i] = conv(res[i]);
		fori(i, kw) kc[i] = conv(kw[i]);
		int c = 0;
		fori(i, rc) {
			bool g = false;
			fori(j, kc) {
				if (rc[i].size() != kc[j].size()) continue;
				bool f = true;
				fori(k, rc[i]) {
					if (rc[i][k].first != kc[j][k].first || rc[i][k].second < kc[j][k].second) {
						f = false;
						break;
					}
				}
				if (f) {
					g = true;
					break;
				}
			}
			if (g) {
				++c;
			}
		}
		return c;
	}
};


double test0() {
	string p0 = "LoooW INTEREST RATES available dont BE slow";
	string t1[] = {"interest","rates","loan","available","LOW"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	SpamDetector * obj = new SpamDetector();
	clock_t start = clock();
	int my_answer = obj->countKeywords(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 4;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string p0 = "Dear Richard Get Rich Quick            no risk";
	string t1[] = {"rich","risk","Quicken","wealth","SAVE"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	SpamDetector * obj = new SpamDetector();
	clock_t start = clock();
	int my_answer = obj->countKeywords(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string p0 = "in debbtt againn and aAgain and AGAaiIN";
	string t1[] = {"AGAIN","again","Again","again"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	SpamDetector * obj = new SpamDetector();
	clock_t start = clock();
	int my_answer = obj->countKeywords(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string p0 = "PlAyy ThEE Lottto     get Loottoo feever";
	string t1[] = {"play","lotto","lottery","looser"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	SpamDetector * obj = new SpamDetector();
	clock_t start = clock();
	int my_answer = obj->countKeywords(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	string p0 = "                                   ";
	string t1[] = {"empty","space","does","not","match"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	SpamDetector * obj = new SpamDetector();
	clock_t start = clock();
	int my_answer = obj->countKeywords(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}

int main() {
	int time;
	bool errors = false;
	
	time = test0();
	if (time < 0)
		errors = true;
	
	time = test1();
	if (time < 0)
		errors = true;
	
	time = test2();
	if (time < 0)
		errors = true;
	
	time = test3();
	if (time < 0)
		errors = true;
	
	time = test4();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
