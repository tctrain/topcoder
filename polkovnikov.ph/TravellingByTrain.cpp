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

struct TravellingByTrain {
	string printt(int c) {
		stringstream ss;
		int m = c % 60;
		int h = (c / 60) % 24;
		int d = c / 60 / 24 + 1;
		if (h < 10) ss << '0'; ss << h;
		ss << ':';
		if (m < 10) ss << '0'; ss << m;
		ss << ", day ";
		ss << d;
		string st;
		getline(ss, st);
		return st;
	}
	string earliestArrival(vector <string> tt) {
		int c = 9 * 60;
		fori(i, tt) {
			stringstream ss;
			ss << tt[i];
			int mc = -1;
			for (;;) {
				string s;
				if (!(ss >> s)) break;
				stringstream ss1;
				ss1 << s;
				char cc;
				int h1, h2, m1, m2;
				ss1 >> h1 >> cc >> m1 >> cc >> h2 >> cc >> m2;
				m1 += 60 * h1;
				m2 += 60 * h2;
				if (m1 >= m2)
					m2 += 24 * 60;
				int c1 = c % (24 * 60);
				int d = m1 - c1;
				if (d < 0) d = 24 * 60 + d;
				int nc = c + d + (m2 - m1);
				if (mc == -1 || nc < mc)
					mc = nc;
			}
			c = mc;
		}
		return printt(c);
	}
};


double test0() {
	string t0[] = {"10:00-13:00 12:00-15:00","11:00-16:00 14:00-19:00"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TravellingByTrain * obj = new TravellingByTrain();
	clock_t start = clock();
	string my_answer = obj->earliestArrival(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "19:00, day 1";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"09:00-13:57","13:56-17:00"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TravellingByTrain * obj = new TravellingByTrain();
	clock_t start = clock();
	string my_answer = obj->earliestArrival(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "17:00, day 2";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"10:00-08:00"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TravellingByTrain * obj = new TravellingByTrain();
	clock_t start = clock();
	string my_answer = obj->earliestArrival(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "08:00, day 2";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"09:10-11:00 09:05-10:05","10:10-12:00 11:00-11:05","17:00-08:00","09:00-08:00"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TravellingByTrain * obj = new TravellingByTrain();
	clock_t start = clock();
	string my_answer = obj->earliestArrival(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "08:00, day 3";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p1 != my_answer) {
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
