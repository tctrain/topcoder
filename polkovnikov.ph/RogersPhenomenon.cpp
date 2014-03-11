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

struct RogersPhenomenon {
	int countTriggers(vector <int> set1, vector <int> set2) {
		vector<int> sets[] = {set1, set2};
		int sum[2] = {};
		fr(i, 2) ec(j, sets[i]) sum[i] += sets[i][j];
		int t = 0;
		fr(i, 2)
			if (sets[i].size() != 1)
				ec(j, sets[i])
					if (sum[i] * (int(sets[i].size()) - 1) <
							(sum[i] - sets[i][j]) * int(sets[i].size())
						&& sum[1-i] * (int(sets[1-i].size()) + 1) <
							(sum[1-i] + sets[i][j]) * int(sets[1-i].size()))
						++t;
		return t;
	}
};


double test0() {
	int t0[] = { 1, 2, 3 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = { 4, 5, 6 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	RogersPhenomenon * obj = new RogersPhenomenon();
	clock_t start = clock();
	int my_answer = obj->countTriggers(p0, p1);
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
	int t0[] = { 3, 100, 90 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = { 5, 1, 18, 29 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	RogersPhenomenon * obj = new RogersPhenomenon();
	clock_t start = clock();
	int my_answer = obj->countTriggers(p0, p1);
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
double test2() {
	int t0[] = { 1, 1, 1, 1, 1, 5 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = { -10, -9, -8, -7, -6 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	RogersPhenomenon * obj = new RogersPhenomenon();
	clock_t start = clock();
	int my_answer = obj->countTriggers(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 5;
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
	int t0[] = {-147, -7, -157, 59, 278, -206, -906, 79, 564, -368, -616, 121, -581, -705, 48, 607, 896, -557, 758, 489, -472, 948, -904, -86, -828, -378, -18, -444, -275};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {-982, 543, -726, 188, 254, 817, 637, 713, -604};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	RogersPhenomenon * obj = new RogersPhenomenon();
	clock_t start = clock();
	int my_answer = obj->countTriggers(p0, p1);
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
