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

struct CeyKaps {
	string decipher(string typed, vector <string> switches) {
		string w;
		forn(i, 26) w += 'A' + i;
		fori(i, switches) {
			stringstream ss;
			char f, t;
			ss << switches[i];
			ss >> f >> t >> t;
			swap(w[f-'A'], w[t-'A']);
		}
		string q = w;
		forn(i, 26)
			q[w[i]-'A'] = i+'A';
		fori(i, typed)
			typed[i] = q[typed[i]-'A'];
		return typed;
	}
};


double test0() {
	string p0 = "AAAAA";
	string t1[] = {"A:B","B:C","A:D"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	CeyKaps * obj = new CeyKaps();
	clock_t start = clock();
	string my_answer = obj->decipher(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "CCCCC";
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
	string p0 = "ABCDE";
	string t1[] = {"A:B","B:C","C:D","D:E","E:A"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	CeyKaps * obj = new CeyKaps();
	clock_t start = clock();
	string my_answer = obj->decipher(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "AEBCD";
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
	string p0 = "IHWSIOTCHEDMYKEYCAPSARWUND";
	string t1[] = {"W:O","W:I"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	CeyKaps * obj = new CeyKaps();
	clock_t start = clock();
	string my_answer = obj->decipher(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "WHOSWITCHEDMYKEYCAPSAROUND";
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//
