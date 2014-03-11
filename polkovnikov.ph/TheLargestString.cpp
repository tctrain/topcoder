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

struct TheLargestString {
	string find(string s, string t) {
		vector<char> ex(s.size(), false);
		int x = 0;
		for (int i = 0, ilen = s.size(); i < ilen; ++i)  {
			char mx = 0; int mxi = -1;
			for (int i = 0, ilen = s.size(); i < ilen; ++i) if (i >= x && s[i] > mx) { mx = s[i]; mxi = i; }
			ex[mxi] = true;
			x = s.find(mx, mxi + 1);
			if (x == string::npos || x >= sz(s)) break;
		}
		string ret;
		for (int i = 0, ilen = s.size(); i < ilen; ++i) if (ex[i]) ret += s[i];
		for (int i = 0, ilen = s.size(); i < ilen; ++i) if (ex[i]) ret += t[i];
		for (int i = 0, ilen = t.size(); i < ilen; ++i)  {
			if (ex[i]) {
				ex[i] = false;
				string cand;
				for (int j = 0, jlen = s.size(); j < jlen; ++j) if (ex[j]) cand += s[j];
				for (int j = 0, jlen = s.size(); j < jlen; ++j) if (ex[j]) cand += t[j];
				if (cand > ret) ret = cand; else ex[i] = true;
			}
		}
		return ret;
	}
};


double test0() {
	string p0 = "ab";
	string p1 = "zy";
	TheLargestString * obj = new TheLargestString();
	clock_t start = clock();
	string my_answer = obj->find(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "by";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string p0 = "abacaba";
	string p1 = "zzzaaaa";
	TheLargestString * obj = new TheLargestString();
	clock_t start = clock();
	string my_answer = obj->find(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "cbaaaa";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string p0 = "x";
	string p1 = "x";
	TheLargestString * obj = new TheLargestString();
	clock_t start = clock();
	string my_answer = obj->find(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "xx";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string p0 = "abbabbabbababaaaabbababab";
	string p1 = "bababbaabbbababbbbababaab";
	TheLargestString * obj = new TheLargestString();
	clock_t start = clock();
	string my_answer = obj->find(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "bbbbbbbbbbbbbbbbbbaaab";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
