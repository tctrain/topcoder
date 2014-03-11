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

struct DiskSpace {
	int minDrives(vector <int> used, vector <int> total) {
		int s = 0;
		fori(i, used) s += used[i];
		srt(total);
		int c = 0;
		for (int i = total.size() - 1; i >= 0; --i) {
			int d = min(total[i], s);
			if (d > 0) ++c; else break;
			s -= d;
		}
		return c;
	}
};


double test0() {
	int t0[] = {300,525,110};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {350,600,115};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	DiskSpace * obj = new DiskSpace();
	clock_t start = clock();
	int my_answer = obj->minDrives(p0, p1);
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
double test1() {
	int t0[] = {1,200,200,199,200,200};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1000,200,200,200,200,200};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	DiskSpace * obj = new DiskSpace();
	clock_t start = clock();
	int my_answer = obj->minDrives(p0, p1);
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
double test2() {
	int t0[] = {750,800,850,900,950};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {800,850,900,950,1000};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	DiskSpace * obj = new DiskSpace();
	clock_t start = clock();
	int my_answer = obj->minDrives(p0, p1);
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
	int t0[] = {49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,
 49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
 50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	DiskSpace * obj = new DiskSpace();
	clock_t start = clock();
	int my_answer = obj->minDrives(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 49;
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
	int t0[] = {331,242,384,366,428,114,145,89,381,170,329,190,482,246,2,38,220,290,402,385};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {992,509,997,946,976,873,771,565,693,714,755,878,897,789,969,727,765,521,961,906};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	DiskSpace * obj = new DiskSpace();
	clock_t start = clock();
	int my_answer = obj->minDrives(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 6;
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
