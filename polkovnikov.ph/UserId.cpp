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

struct UserId {
	bool check(string s) {
		fori(i, s) {
			if ('a' <= s[i] && s[i] <= 'z') {
			} else if ('A' <= s[i] && s[i] <= 'Z') {
			} else if (s[i] == ' ') {
			} else if (s[i] == '\'') {
			} else {
				return true;
			}
		}
		return false;
	}
	bool check2(string s) {
		return int(s.size()) < 2;
	}
	string tostr(int d) {
		if (d < 10)
			return string(1, '0') + string(1, d + '0');
		else
			return string(1, d / 10 + '0') + string(1, d % 10 + '0');
	}
	void norm(string & s) {
		string r;
		fori(i, s)
			if (s[i] != ' ' && s[i] != '\'') {
				if ('A' <= s[i] && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
				r += s[i];
			}
		s = r;
	}
	string id(vector <string> inUse, string first, string middle, string last) {
		norm(first); norm(middle); norm(last);
		if (check(first) || check(middle) || check(last) || check2(first) || check2(last))
			return "BAD DATA";
		set<string> u;
		fori(i, inUse)
			u.insert(inUse[i]);
		string s = first[0] + last.substr(0, 7);
		if (u.find(s) == u.end())
			return s;
		if (!middle.empty()) {
			s = first[0] + string(1, middle[0]) + last.substr(0, 6);
			if (u.find(s) == u.end())
				return s;
		}
		for (int i = 1; i < 99; ++i) {
			s = first[0] + last.substr(0, 5) + tostr(i);
			if (u.find(s) == u.end())
				return s;
		}
		return "BAD DATA";
	}
};


double test0() {
	string t0[] = {"bjones","bjones03","bmjones","old34id"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string p1 = "Bob";
	string p2 = "";
	string p3 = "Jones";
	UserId * obj = new UserId();
	clock_t start = clock();
	string my_answer = obj->id(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p4 = "bjones01";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p4 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"bjones","bjones03","bmjones","old34id"}
;
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string p1 =  "Bob Mack";
	string p2 = "Hertobise";
	string p3 = "Jone's" ;
	UserId * obj = new UserId();
	clock_t start = clock();
	string my_answer = obj->id(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p4 = "bhjones";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p4 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"bjonesto","bjones01","bjonesto","old34id"}
;
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string p1 = "BoB-Mack";
	string p2 = "Mo";
	string p3 = "Jonestone" ;
	UserId * obj = new UserId();
	clock_t start = clock();
	string my_answer = obj->id(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p4 = "BAD DATA";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p4 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"momorris","mmmm","momorr01"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string p1 = "'m m";
	string p2 = "";
	string p3 = "O'Morrisy";
	UserId * obj = new UserId();
	clock_t start = clock();
	string my_answer = obj->id(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p4 = "momorr02";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p4 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	vector <string> p0;
	string p1 = "'m m";
	string p2 = "J.J";
	string p3 = "O'Morrisy";
	UserId * obj = new UserId();
	clock_t start = clock();
	string my_answer = obj->id(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p4 = "BAD DATA";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p4 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p4 != my_answer) {
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
