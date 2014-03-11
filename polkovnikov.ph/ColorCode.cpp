#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <tuple>
#define fr(i,n)for(int i=0,i##e=n;i<i##e;++i)
#define ec(i,m)fr(i,m.size())
#define srt(v)sort(v.begin(),v.end())
using namespace std;

struct ColorCode {
	long long getOhms(vector <string> code) {
		struct { string s; int a; int b; } arr[] = {
			"black",         0,                1,
			"brown",         1,               10,
			"red",           2,              100,
			"orange",        3,             1000,
			"yellow",        4,            10000,
			"green",         5,           100000,
			"blue",          6,          1000000,
			"violet",        7,         10000000,
			"grey",          8,        100000000,
			"white",         9,       1000000000,
		};
		map<string, int> a, b;
		fr(i, 10) a[arr[i].s] = arr[i].a, b[arr[i].s] = arr[i].b;
		return (long long)(a[code[0]] * 10 + a[code[1]]) * b[code[2]];
	}
};


double test0() {
	string t0[] = { "yellow", "violet", "red" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ColorCode * obj = new ColorCode();
	clock_t start = clock();
	long long my_answer = obj->getOhms(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p1 = 4700LL;
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
	string t0[] = { "orange", "red", "blue" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ColorCode * obj = new ColorCode();
	clock_t start = clock();
	long long my_answer = obj->getOhms(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p1 = 32000000LL;
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
	string t0[] = { "white", "white", "white" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ColorCode * obj = new ColorCode();
	clock_t start = clock();
	long long my_answer = obj->getOhms(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p1 = 99000000000LL;
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

//Powered by [KawigiEdit] 2.0!
