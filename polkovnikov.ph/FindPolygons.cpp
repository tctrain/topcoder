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

struct FindPolygons {
	double minimumPolygon(int L) {
		const int invalid = numeric_limits<int>::max();
		int diff = invalid;
		for (int c = 1; c <= L; ++c) {
			for (int b = 1; b <= L; ++b) {
				int a = L - b - c;
				if (a <= 0)
					continue;
				if (a < b && b < c)
					if (a * a + b * b == c * c)
						diff = min(diff, c - a);
				if (c % 2 != 0)
					continue;
				if (b + b + c == L) {
					a = b * b - c * c / 4;
					if (a <= 0)
						continue;
					int z = int(sqrt(double(a)));
					if (z * z != a)
						continue;
					a = z;
					cout << a << ' ' << b << ' ' << c << endl;
					if (a <= 0)
						continue;
				    if (a * a + b * b == c * c / 4)
				    	diff = min(diff, abs(c - b));
				}
			}
		}
		if (diff == invalid)
		for (int a = 1; a <= L; ++a) {
			int b = L - 2 * a;
			if (b % 2 == 1) continue;
			b /= 2;
			if (a > b) break;
			diff = min(diff, b - a);
		}
		return diff == invalid ? -1.0 : double(diff);
	}
};


double test0() {
	int p0 = 4;
	FindPolygons * obj = new FindPolygons();
	clock_t start = clock();
	double my_answer = obj->minimumPolygon(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p1 = 0.0;
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
	int p0 = 5;
	FindPolygons * obj = new FindPolygons();
	clock_t start = clock();
	double my_answer = obj->minimumPolygon(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p1 = -1.0;
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
	int p0 = 16;
	FindPolygons * obj = new FindPolygons();
	clock_t start = clock();
	double my_answer = obj->minimumPolygon(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p1 = 2.0;
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
double test3() {
	int p0 = 4984;
	FindPolygons * obj = new FindPolygons();
	clock_t start = clock();
	double my_answer = obj->minimumPolygon(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p1 = 819.0;
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
	
	time = test3();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
