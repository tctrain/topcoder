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

struct VolumeDiscount {
	int bestDeal(vector <string> p, int q) {
		vector<pair<int, int>> pp;
		int mx = 0;
		ec(i, p) {
			stringstream ss;
			int units, cost;
			ss << p[i];
			ss >> units >> cost;
			mx = max(mx, units);
			pp.emplace_back(units, cost);
		}
		const int big = numeric_limits<int>::max();
		vector<int> c(q + mx + 1, big);
		c[0] = 0;
		int mn = big;
		ec(i, c) {
			fr(j, i) {
				ec(k, pp) {
					if ((i - j) % pp[k].first != 0) continue;
					if (c[j] != big)
						c[i] = min(c[i], c[j] + (i - j) / pp[k].first * pp[k].second);
				}
			}
			if (i >= q) mn = min(mn, c[i]);
		}
		return mn;
	}
};


double test0() {
	string t0[] = {"1 10", "5 45"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 10;
	VolumeDiscount * obj = new VolumeDiscount();
	clock_t start = clock();
	int my_answer = obj->bestDeal(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 90;
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
	string t0[] = {"1 8", "5 45"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 10;
	VolumeDiscount * obj = new VolumeDiscount();
	clock_t start = clock();
	int my_answer = obj->bestDeal(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 80;
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
	string t0[] = {"99 913", "97 173", "50 464", "80 565"} 	;
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 18;
	VolumeDiscount * obj = new VolumeDiscount();
	clock_t start = clock();
	int my_answer = obj->bestDeal(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 173;
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
	string t0[] = {"2 272","1 166","10 993"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 81;
	VolumeDiscount * obj = new VolumeDiscount();
	clock_t start = clock();
	int my_answer = obj->bestDeal(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 8110;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
