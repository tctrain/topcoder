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

struct FruitTrees {
	static int gcd(int x, int y) {
		while (y) {
			int r = x % y;
			x = y;
			y = r;
		}
		return x;
	}
	int maxDist(int apple, int kiwi, int grape) {
		int m[] = {gcd(apple, kiwi), gcd(grape, kiwi), gcd(grape, apple)};
		forn(i, 3) if (m[i] == 1) return 0;
		if (apple == kiwi && kiwi == grape) return apple / 3;
		return min(m[0], min(m[1], m[2])) / 2;
	}
};


double test0() {
	int p0 = 1;
	int p1 = 5;
	int p2 = 8;
	FruitTrees * obj = new FruitTrees();
	clock_t start = clock();
	int my_answer = obj->maxDist(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int p0 = 3;
	int p1 = 3;
	int p2 = 6;
	FruitTrees * obj = new FruitTrees();
	clock_t start = clock();
	int my_answer = obj->maxDist(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int p0 = 40;
	int p1 = 30;
	int p2 = 20;
	FruitTrees * obj = new FruitTrees();
	clock_t start = clock();
	int my_answer = obj->maxDist(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 5;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int p0 = 899;
	int p1 = 1073;
	int p2 = 1147;
	FruitTrees * obj = new FruitTrees();
	clock_t start = clock();
	int my_answer = obj->maxDist(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 14;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int p0 = 2000;
	int p1 = 2000;
	int p2 = 2000;
	FruitTrees * obj = new FruitTrees();
	clock_t start = clock();
	int my_answer = obj->maxDist(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 666;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
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
