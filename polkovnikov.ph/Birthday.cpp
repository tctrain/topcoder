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

struct Birthday {
	int to_date(string s) {
		stringstream ss;
		ss << s;
		int m, d; char c;
		ss >> m >> c >> d;
		--m; --d;
		return m * 31 + d;
	}
	string from_date(int x) {
		stringstream ss;
		int m = (x / 31) % 12 + 1, d = x % 31 + 1;
		if (m < 10) ss << '0';
		ss << m << '/';
		if (d < 10) ss << '0';
		ss << d;
		string s;
		ss >> s;
		return s;
	}
	string getNext(string d, vector <string> b) {
		int mn = -1, x = to_date(d);
		fori(i, b) {
			int n = to_date(b[i]);
			if (n >= x)
				mn = mn == -1 ? n : min(mn, n);
			else
				mn = mn == -1 ? n + 12 * 31 : min(mn, n + 12 * 31);
		}
		return from_date(mn);
	}
};


double test0() {
	string p0 = "06/17";
	string t1[] = {"02/17 Wernie", "10/12 Stefan"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Birthday * obj = new Birthday();
	clock_t start = clock();
	string my_answer = obj->getNext(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "10/12";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string p0 = "06/17";
	string t1[] = {"10/12 Stefan"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Birthday * obj = new Birthday();
	clock_t start = clock();
	string my_answer = obj->getNext(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "10/12";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string p0 = "02/17";
	string t1[] = {"02/17 Wernie", "10/12 Stefan"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Birthday * obj = new Birthday();
	clock_t start = clock();
	string my_answer = obj->getNext(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "02/17";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string p0 = "12/24";
	string t1[] = {"10/12 Stefan"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Birthday * obj = new Birthday();
	clock_t start = clock();
	string my_answer = obj->getNext(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "10/12";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string p0 = "01/02";
	string t1[] = {"02/17 Wernie",
 "10/12 Stefan",
 "02/17 MichaelJordan",
 "10/12 LucianoPavarotti",
 "05/18 WilhelmSteinitz"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Birthday * obj = new Birthday();
	clock_t start = clock();
	string my_answer = obj->getNext(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "02/17";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
