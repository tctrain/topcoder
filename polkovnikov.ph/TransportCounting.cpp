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

struct TransportCounting {
	int countBuses(int speed, vector <int> p, vector <int> v, int t) {
		int d = 0;
		ec(i, p) {
			if (speed > v[i] && p[i] <= t * (speed - v[i]))
				++d;
			else if (speed <= v[i] && p[i] == 0)
				++d;
		}
		return d;
	}
};


double test0() {
	int p0 = 100;
	int t1[] = {0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {0};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int p3 = 0;
	TransportCounting * obj = new TransportCounting();
	clock_t start = clock();
	int my_answer = obj->countBuses(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 1;
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
	int t1[] = {10, 10};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {0, 1};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int p3 = 2;
	TransportCounting * obj = new TransportCounting();
	clock_t start = clock();
	int my_answer = obj->countBuses(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 1;
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
	int p0 = 5;
	int t1[] = {10, 10};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {0, 1};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int p3 = 3;
	TransportCounting * obj = new TransportCounting();
	clock_t start = clock();
	int my_answer = obj->countBuses(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 2;
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
	int p0 = 777;
	int t1[] = {10,20,30,40,50,60,70,80,90,100,
110,120,130,140,150,160,170,180,190,200,
210,220,230,240,250,260,270,280,290,300,
310,320,330,340,350,360,370,380,390,400,
410,420,430,440,450,460,470,480,490,500};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {10,20,30,40,50,60,70,80,90,100,
110,120,130,140,150,160,170,180,190,200,
210,220,230,240,250,260,270,280,290,300,
310,320,330,340,350,360,370,380,390,400,
410,420,430,440,450,460,470,480,490,500};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int p3 = 333;
	TransportCounting * obj = new TransportCounting();
	clock_t start = clock();
	int my_answer = obj->countBuses(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 50;
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
	int p0 = 5;
	int t1[] = {0,0,0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {4,5,6};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int p3 = 10;
	TransportCounting * obj = new TransportCounting();
	clock_t start = clock();
	int my_answer = obj->countBuses(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 3;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
