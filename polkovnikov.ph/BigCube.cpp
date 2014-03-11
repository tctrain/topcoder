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

struct BigCube {
	string largestCube(vector <string> range) {
		long long mx = -1;
		ec(j, range) {
			stringstream ss;
			ss << range[j];
			long long x, y;
			char c;
			ss >> x >> c >> y;
			fr(i, 100001) {
				long long i3 = (long long)i * i * i;
				if (x <= i3 && i3 <= y) {
					mx = max(mx, i3);
				}
			}
		}
		stringstream ss;
		ss << mx;
		string mxs;
		getline(ss, mxs);
		return mx == -1 ? "" : mxs;
	}
};


double test0() {
	string t0[] = {"1-1000000000001"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BigCube * obj = new BigCube();
	clock_t start = clock();
	string my_answer = obj->largestCube(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "1000000000000";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = {"10-999999999999990","11-999999999999991","12-999999999999992",
 "13-999999999999993","14-999999999999994","15-999999999999995",
 "16-999999999999996","17-999999999999993","18-999999999999994",
 "19-999999999999999"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BigCube * obj = new BigCube();
	clock_t start = clock();
	string my_answer = obj->largestCube(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "999970000299999";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = {"0-3","10-20","30-60","80-120"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BigCube * obj = new BigCube();
	clock_t start = clock();
	string my_answer = obj->largestCube(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "1";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = {"999700030000-999999999999","999400119993-999700029998",
 "999100269974-999400119991","998800479937-999100269972"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BigCube * obj = new BigCube();
	clock_t start = clock();
	string my_answer = obj->largestCube(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = {"0-0","2-2","3-3","4-4","5-5","6-6","7-7","9-9","10-10","12-12",
 "14-14","16-16","18-18","20-20","22-22","24-24","26-26","28-28",
 "30-30","32-32","34-34","36-36","38-38","40-40","42-42","44-44",
 "46-46","48-48","50-50","52-52","54-54","56-56","58-58","60-60",
 "62-62","65-65","67-67","69-69","71-71","73-73","75-75","77-77",
 "79-79","81-81","83-83","85-85","87-87","89-89","99-99",
  "999970000300000-999999999999999" }
 ;
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BigCube * obj = new BigCube();
	clock_t start = clock();
	string my_answer = obj->largestCube(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "0";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
