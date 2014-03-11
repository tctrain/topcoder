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

struct ComparerInator {
	int makeProgram(vector <int> A, vector <int> B, vector <int> wanted) {
		if (A == wanted || B == wanted)
			return 1;
		bool f1 = true, f2 = true;
		fori(i, A)
			if (A[i] < B[i])
				f1 = f1 && wanted[i] == A[i], f2 = f2 && wanted[i] == B[i];
			else
				f1 = f1 && wanted[i] == B[i], f2 = f2 && wanted[i] == A[i];
		return f1 || f2 ? 7 : -1;
	}
};


double test0() {
	int t0[] = {1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	ComparerInator * obj = new ComparerInator();
	clock_t start = clock();
	int my_answer = obj->makeProgram(p0, p1, p2);
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
double test1() {
	int t0[] = {1,3};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2,3};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	ComparerInator * obj = new ComparerInator();
	clock_t start = clock();
	int my_answer = obj->makeProgram(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 7;
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
	int t0[] = {1,3,5};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2,1,7};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2,3,5};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	ComparerInator * obj = new ComparerInator();
	clock_t start = clock();
	int my_answer = obj->makeProgram(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = -1;
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
	int t0[] = {1,3,5};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2,1,7};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1,3,5};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	ComparerInator * obj = new ComparerInator();
	clock_t start = clock();
	int my_answer = obj->makeProgram(p0, p1, p2);
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
double test4() {
	int t0[] = {1,2,3,4,5,6,7,8,9,10,11};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {5,4,7,8,3,1,1,2,3,4,6};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1,2,3,4,3,1,1,2,3,4,6};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	ComparerInator * obj = new ComparerInator();
	clock_t start = clock();
	int my_answer = obj->makeProgram(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 7;
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
double test5() {
	int t0[] = {1,5,6,7,8};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1,5,6,7,8};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1,5,6,7,8};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	ComparerInator * obj = new ComparerInator();
	clock_t start = clock();
	int my_answer = obj->makeProgram(p0, p1, p2);
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
