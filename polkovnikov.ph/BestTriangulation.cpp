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

struct BestTriangulation {
	double dist(double x1, double y1, double x2, double y2) {
		return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	}
	double maxArea(vector <string> v) {
		vector<pair<int, int>> w;
		ec(i, v) {
			stringstream ss;
			ss << v[i];
			int x, y;
			ss >> x >> y;
			w.emplace_back(x, y);
		}
		double mx = 0;
		ec(i, w) fr(j, i) fr(k, j) {
			int arr[] = {i, j, k};
			double len[3] = {}, p = 0;
			fr(t, 3) {
				int u = (t + 1) % 3; 
				len[t] = dist(
					w[arr[t]].first, w[arr[t]].second,
					w[arr[u]].first, w[arr[u]].second
				);
				p += len[t];
			}
			p /= 2;
			double s = sqrt(p * (p - len[0]) * (p - len[1]) * (p - len[2]));
			mx = max(mx, s);
		}
		return mx;
	}
};


double test0() {
	string t0[] = {"1 1", "2 3", "3 2"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BestTriangulation * obj = new BestTriangulation();
	clock_t start = clock();
	double my_answer = obj->maxArea(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p1 = 1.5;
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
	string t0[] = {"1 1", "1 2", "3 3", "2 1"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BestTriangulation * obj = new BestTriangulation();
	clock_t start = clock();
	double my_answer = obj->maxArea(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p1 = 1.5;
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
	string t0[] = {"1 2", "1 3", "2 4", "3 4", "4 3", "4 2", "3 1", "2 1"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BestTriangulation * obj = new BestTriangulation();
	clock_t start = clock();
	double my_answer = obj->maxArea(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p1 = 3.0;
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
	string t0[] = {"6 2", "2 1", "1 2", "1 4", "2 6", "5 6", "6 5"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BestTriangulation * obj = new BestTriangulation();
	clock_t start = clock();
	double my_answer = obj->maxArea(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p1 = 10.0;
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
double test4() {
	string t0[] = {"10000 3469", "9963 712", "9957 634", "9834 271", "9700 165",
 "9516 46", "8836 4", "1332 57", "229 628", "171 749",
 "52 1269", "30 1412", "7 4937", "35 8676", "121 9917",
 "2247 9960", "3581 9986", "6759 9995", "9486 9998", "9888 9890",
 "9914 9318", "9957 8206", "9998 6402"} ;
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BestTriangulation * obj = new BestTriangulation();
	clock_t start = clock();
	double my_answer = obj->maxArea(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p1 = 4.8292483E7;
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
	
	time = test4();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
