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
#define all(a)(a).begin(),(a).end()
#define forn(i,n)for(int i=0,i##len=(n);i<i##len;++i)
#define fori(i,m)forn(i,(m).size())
#define each(it,m)for(typeof((m).begin())it=(m).begin(),it##end=(m).end();it!=it##end;++it)
#define sort(s)sort(all(s))
using namespace std;

struct ToastXToast {
	int bake(vector <int> u, vector <int> o) {
		sort(u);
		sort(o);
		if (u.front() > o.front() || u.back() > o.back())
			return -1;
		else if (u.back() < o.front())
			return 1;
		else return 2;
	}
};


double test0() {
	int t0[] = {2,4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {5,6,3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	ToastXToast * obj = new ToastXToast();
	clock_t start = clock();
	int my_answer = obj->bake(p0, p1);
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
	int t0[] = {5};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	ToastXToast * obj = new ToastXToast();
	clock_t start = clock();
	int my_answer = obj->bake(p0, p1);
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
double test2() {
	int t0[] = {1,2,3};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {5,6,7};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	ToastXToast * obj = new ToastXToast();
	clock_t start = clock();
	int my_answer = obj->bake(p0, p1);
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
double test3() {
	int t0[] = {1,3,5};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2,4,6};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	ToastXToast * obj = new ToastXToast();
	clock_t start = clock();
	int my_answer = obj->bake(p0, p1);
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
