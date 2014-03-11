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

struct Iditarod {
	int avgMinutes(vector <string> times) {
		long long avg = 0;
		fori(i, times) {
			stringstream ss;
			ss << times[i];
			int h, m; char c, t; int d;
			ss >> h >> c >> m >> t >> c >> c >> c >> c >> c >> d;
			if (t == 'A' && h == 12) h = 0;
			if (t == 'P' && h != 12) h += 12;
			long long r = m + (h + (d - 1) * 24) * 60 - 8 * 60;
			avg += r;
		}
		const int q = times.size();
		return avg / q + (2 * (avg % q) >= q);
	}
};


double test0() {
	string t0[] = {"12:00 PM, DAY 1","12:01 PM, DAY 1"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	Iditarod * obj = new Iditarod();
	clock_t start = clock();
	int my_answer = obj->avgMinutes(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 241;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	string t0[] = {"12:00 AM, DAY 2"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	Iditarod * obj = new Iditarod();
	clock_t start = clock();
	int my_answer = obj->avgMinutes(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 960;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	string t0[] = {"02:00 PM, DAY 19","02:00 PM, DAY 20", "01:58 PM, DAY 20"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	Iditarod * obj = new Iditarod();
	clock_t start = clock();
	int my_answer = obj->avgMinutes(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 27239;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
