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

struct NameCheck {
	bool notname(string const & s) {
		if (s.size() < 2) return true;
		fori(i, s)
			if ('a' <= s[i] && s[i] <= 'z');
			else if ('A' <= s[i] && s[i] <= 'Z');
			else return true;
		return false;
	}
	bool notinit(string const & s) {
		if (s.size() != 2) return true;
		if (s[1] != '.') return true;
		if ('a' <= s[0] && s[0] <= 'z');
		else if ('A' <= s[0] && s[0] <= 'Z');
		else return true;
		return false;
	}
	string norm(string const & s) {
		bool f = true;
		string r = s;
		fori(i, s) {
			if ('A' <= r[i] && r[i] <= 'Z')
				r[i] = r[i] - 'A' + 'a';
			if (f && 'a' <= r[i] && r[i] <= 'z') {
				f = false;
				r[i] = r[i] - 'a' + 'A';
			}
		}
		return r;
	}
	vector <string> formatList(vector <string> n) {
		vector<string> ret;
		fori(i, n) {
			if (n[i].size() >= 1 && (n[i][0] == ' ' || n[i][n.size()-1] == ' ')) continue;
			int p1e = n[i].find(" ");
			if (p1e == string::npos) continue;
			string part1 = n[i].substr(p1e);
			if (notname(part1) && notinit(part1)) continue;
			int p2b = n[i].find_first_not_of(" ", p1e);
			if (p2b == string::npos) continue;
			int p2e = n[i].find(" ", p2b);
			if (p2e == string::npos) {
				string part2 = n[i].substr(p2b);
				if (notname(part2) && notinit(part2)) continue;
				ret.push_back(norm(part1) + " " + norm(part2));
			} else {
				string part2 = n[i].substr(p2b, p2e-p2b);
				if (notname(part2) && notinit(part2)) continue;
				int p3b = n[i].find_first_not_of(" ", p2e);
				if (p3b == string::npos) continue;
				if (n[i].find(" ", p3b) != string::npos) continue;
				string part3 = n[i].substr(p3b);
				if (notname(part3)) continue;
				ret.push_back(norm(part1) + " " + norm(part2) + " " + norm(part3));
			}
		}
		return ret;
	}
};


double test0() {
	string t0[] = {"Doug#as good","bArneY R.", "bArneY   Rubble"," Bob Stone", "Bob B. J. Toms","J. Lo"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	NameCheck * obj = new NameCheck();
	clock_t start = clock();
	vector <string> my_answer = obj->formatList(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = { "Barney Rubble",  "J. Lo" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"Doug G.","GG WALNUT DOUG", "AB. JONES", "A. BOB J.", "Gg DouG", "GG DOUG"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	NameCheck * obj = new NameCheck();
	clock_t start = clock();
	vector <string> my_answer = obj->formatList(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = { "Gg Walnut Doug",  "Gg Doug",  "Gg Doug" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"A BIG Mess", "A. Big Mess.Mess", "ABig","M.MESS"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	NameCheck * obj = new NameCheck();
	clock_t start = clock();
	vector <string> my_answer = obj->formatList(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	vector <string> p1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
