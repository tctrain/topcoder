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

struct ObjectPacking {
	int smallBox(int ow, int oh, vector <int> bw, vector <int> bh) {
		if (ow > oh) swap(ow, oh);
		const int big = numeric_limits<int>::max();
		int mn = big;
		ec(i, bw) {
			if (bw[i] > bh[i]) swap(bw[i], bh[i]);
			if (ow <= bw[i] && oh <= bh[i])
				mn = min(mn, bw[i] * bh[i]);
		}
		return mn == big ? -1 : mn;
	}
};


double test0() {
	int p0 = 7;
	int p1 = 3;
	int t2[] = {3};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {7};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	ObjectPacking * obj = new ObjectPacking();
	clock_t start = clock();
	int my_answer = obj->smallBox(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 21;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
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
	int p1 = 8;
	int t2[] = {6,9,3};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {7,4,5};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	ObjectPacking * obj = new ObjectPacking();
	clock_t start = clock();
	int my_answer = obj->smallBox(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = -1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int p0 = 17;
	int p1 = 5;
	int t2[] = {19,10,12,40};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {12,20,15,5};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	ObjectPacking * obj = new ObjectPacking();
	clock_t start = clock();
	int my_answer = obj->smallBox(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 200;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int p0 = 20;
	int p1 = 44;
	int t2[] = {36,42,18,37,33,5,30,10,29,9,11,16,48,50,34,44,33,12,31,41};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {42,45,46,24,23,21,21,8,26,25,48,12,10,45,18,6,12,22,42,45};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	ObjectPacking * obj = new ObjectPacking();
	clock_t start = clock();
	int my_answer = obj->smallBox(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 1845;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int p0 = 1;
	int p1 = 10;
	int t2[] = {9,1,10};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {10,6,4};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	ObjectPacking * obj = new ObjectPacking();
	clock_t start = clock();
	int my_answer = obj->smallBox(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 40;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	int p0 = 5;
	int p1 = 4;
	int t2[] = {2,3,3,3,3};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {2,7,7,4,2};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	ObjectPacking * obj = new ObjectPacking();
	clock_t start = clock();
	int my_answer = obj->smallBox(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = -1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test6() {
	int p0 = 3;
	int p1 = 3;
	int t2[] = {2,3,3,3,2};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {3,1,3,3,2};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	ObjectPacking * obj = new ObjectPacking();
	clock_t start = clock();
	int my_answer = obj->smallBox(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 9;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
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
	
	time = test5();
	if (time < 0)
		errors = true;
	
	time = test6();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
