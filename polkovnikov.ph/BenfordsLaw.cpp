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

struct BenfordsLaw {
	int questionableDigit(vector <int> t, int thres) {
		vector<int> c(10);
		const int q = t.size();
		fori(i, t) {
			int ii = t[i], d = 0;
			while (ii) {
				d = ii % 10;
				ii /= 10;
			}
			++c[d];
		}
		forn(i, 10) {
			if (i == 0) continue;
			double mn, mx;
			mn = mx = log(1.0 + 1.0 / i) / log(10.0);
			mn /= thres;
			mx *= thres;
			//cout << i << ' ' << c[i] << ' ' << mn << ' ' << mx << endl;
			double g = double(c[i]) / q;
			if (g < mn || g > mx)
				return i;
		}
		return -1;
	}
};


double test0() {
	int t0[] = { 5236,7290,200,1907,3336,9182,17,4209,8746,7932,
  6375,909,2189,3977,2389,2500,1239,3448,6380,4812 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 2;
	BenfordsLaw * obj = new BenfordsLaw();
	clock_t start = clock();
	int my_answer = obj->questionableDigit(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 1;
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
	int t0[] = { 1,10,100,2,20,200,2000,3,30,300 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 2;
	BenfordsLaw * obj = new BenfordsLaw();
	clock_t start = clock();
	int my_answer = obj->questionableDigit(p0, p1);
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
	int t0[] = { 9,87,765,6543,54321,43219,321987,21987,1987,345,234,123 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 2;
	BenfordsLaw * obj = new BenfordsLaw();
	clock_t start = clock();
	int my_answer = obj->questionableDigit(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = -1;
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
	int t0[] = { 1,2,3,4,5,6,7,8,7,6,5,4,3,2,1 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 8;
	BenfordsLaw * obj = new BenfordsLaw();
	clock_t start = clock();
	int my_answer = obj->questionableDigit(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 9;
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
	int t0[] = { 987,234,1234,234873487,876,234562,17,
  7575734,5555,4210,678234,3999,8123 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 3;
	BenfordsLaw * obj = new BenfordsLaw();
	clock_t start = clock();
	int my_answer = obj->questionableDigit(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 8;
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

//
