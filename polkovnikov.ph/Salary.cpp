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

struct Salary {
	static long long toint(string st) {
		int h, m, s; char c;
		stringstream ss;
		ss << st;
		ss >> h >> c >> m >> c >> s;
		s += 60 * (m + 60 * h);
		if (s < 6 * 60 * 60) {
			return s * 3;
		} else if (s < 18 * 60 * 60) {
			return 6 * 60 * 60 * 3 + (s - 6 * 60 * 60) * 2;
		} else {
			return 6 * 60 * 60 * 3 + 12 * 60 * 60 * 2 + (s - 18 * 60 * 60) * 3;
		}
	}
	int howMuch(vector <string> in, vector <string> out, int wage) {
		long long s = 0;
		fori(i, in)	s += toint(out[i]) - toint(in[i]);
		return s * wage / 7200;
	}
};


double test0() {
	string t0[] = {"08:00:00","13:00:00","19:27:32"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"12:00:00","17:00:00","20:48:10"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int p2 = 1000;
	Salary * obj = new Salary();
	clock_t start = clock();
	int my_answer = obj->howMuch(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 10015;
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
	string t0[] = {"01:05:47","16:48:12"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"09:27:30","21:17:59"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int p2 = 2000;
	Salary * obj = new Salary();
	clock_t start = clock();
	int my_answer = obj->howMuch(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 33920;
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
	string t0[] = {"00:00:00"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"23:59:59"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int p2 = 10000;
	Salary * obj = new Salary();
	clock_t start = clock();
	int my_answer = obj->howMuch(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 299995;
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
	string t0[] = {"10:00:00"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"18:00:00"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int p2 = 10000;
	Salary * obj = new Salary();
	clock_t start = clock();
	int my_answer = obj->howMuch(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 80000;
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
	string t0[] = {"22:19:46"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"23:12:46"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int p2 = 5320;
	Salary * obj = new Salary();
	clock_t start = clock();
	int my_answer = obj->howMuch(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 7049;
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
