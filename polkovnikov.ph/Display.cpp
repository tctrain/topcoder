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
#define all(v)v.begin(),v.end()
using namespace std;

int min1(int a, int b) {
	return a < b ? a : b;
}
int max1(int a, int b) {
	return a > b ? a : b;
}
struct Display {
	int divup(long long x, long long y) {
		return x / y + (2 * (x % y) >= y);
	}
	vector <string> transform(vector <int> x, vector <int> y) {
		int xmn = accumulate(all(x), x[0], min1);
		int xmx = accumulate(all(x), x[0], max1);
		int ymn = accumulate(all(y), y[0], min1);
		int ymx = accumulate(all(y), y[0], max1);
		vector<string> ret;
		ec(i, x) {
			stringstream ss;
			ss << divup((long long)(x[i] - xmn) * 1000, xmx - xmn);
			ss << ' ';
			ss << divup((long long)(y[i] - ymn) * 1000, ymx - ymn);
			string s;
			getline(ss, s);
			ret.push_back(s);
		}
		return ret;
	}
};


double test0() {
	int t0[] = {-100, 0, 50, 100};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {-100, 0, 50, 100};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	Display * obj = new Display();
	clock_t start = clock();
	vector <string> my_answer = obj->transform(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t2[] = { "0 0",  "500 500",  "750 750",  "1000 1000" };
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p2.size() > 0) {
		cout <<"\""<<p2[0]<<"\"";
		for (int i=1; i<p2.size(); i++)
			cout <<", \"" <<p2[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p2) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {0,2000,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0,2001,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	Display * obj = new Display();
	clock_t start = clock();
	vector <string> my_answer = obj->transform(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t2[] = { "0 0",  "1000 1000",  "1 0" };
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p2.size() > 0) {
		cout <<"\""<<p2[0]<<"\"";
		for (int i=1; i<p2.size(); i++)
			cout <<", \"" <<p2[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p2) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {-1000000000,1000000000,500000,499999};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {-1000000000,1000000000,500000,499999};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	Display * obj = new Display();
	clock_t start = clock();
	vector <string> my_answer = obj->transform(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t2[] = { "0 0",  "1000 1000",  "500 500",  "500 500" };
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p2.size() > 0) {
		cout <<"\""<<p2[0]<<"\"";
		for (int i=1; i<p2.size(); i++)
			cout <<", \"" <<p2[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p2) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {-53,652,-6132,673,74,-473,373,736363,234,234,234};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {-6464,36464,-43,373,363,-37633,2022,-644,2520,2520,2520};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	Display * obj = new Display();
	clock_t start = clock();
	vector <string> my_answer = obj->transform(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t2[] = { "8 421",  "9 1000",  "0 507",  "9 513",  "8 513",  "8 0",  "9 535",  "1000 499",  "9 542",  "9 542",  "9 542" };
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p2.size() > 0) {
		cout <<"\""<<p2[0]<<"\"";
		for (int i=1; i<p2.size(); i++)
			cout <<", \"" <<p2[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p2) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int t0[] = {0,1001,2000};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0,999,2000};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	Display * obj = new Display();
	clock_t start = clock();
	vector <string> my_answer = obj->transform(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t2[] = { "0 0",  "501 500",  "1000 1000" };
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p2.size() > 0) {
		cout <<"\""<<p2[0]<<"\"";
		for (int i=1; i<p2.size(); i++)
			cout <<", \"" <<p2[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p2) {
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
