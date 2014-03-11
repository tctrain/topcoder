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

struct BoxUnion {
	int area(vector <string> r) {
		vector< vector<int> > R;
		vector<int> x, y;
		fori(i, r) {
			stringstream ss;
			ss << r[i];
			vector<int> m(4);
			forn(j, 4) ss >> m[j];
			R.push_back(m);
			forn(j, 4) (j & 1 ? y : x).push_back(m[j]);
		}
		srt(x); x.erase(unique(all(x)), x.end());
		srt(y); y.erase(unique(all(y)), y.end());
		int s = 0;
		fori(i, x) if (i != 0) fori(j, y) if (j != 0) {
			bool f = false;
			fori(k, R)
				if (2 * R[k][0] < x[i] + x[i-1] && x[i] + x[i-1] < 2 * R[k][2] &&
				    2 * R[k][1] < y[j] + y[j-1] && y[j] + y[j-1] < 2 * R[k][3])
				    f = true;
			if (f) s += (x[i] - x[i-1]) * (y[j] - y[j-1]);
		}
		return s;
	}
};


double test0() {
	string t0[] = { "200 300 203 304" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BoxUnion * obj = new BoxUnion();
	clock_t start = clock();
	int my_answer = obj->area(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 12;
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
	string t0[] = { "0 0 10 10",
  "20 20 30 30" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BoxUnion * obj = new BoxUnion();
	clock_t start = clock();
	int my_answer = obj->area(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 200;
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
	string t0[] = { "0 500 20000 501",
  "500 0 501 20000" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BoxUnion * obj = new BoxUnion();
	clock_t start = clock();
	int my_answer = obj->area(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 39999;
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
	string t0[] = { "4 6 18 24",
  "7 2 12 19",
  "0 0 100 100" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BoxUnion * obj = new BoxUnion();
	clock_t start = clock();
	int my_answer = obj->area(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 10000;
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
	string t0[] = { "1 3 5 6",
  "3 1 7 5",
  "4 4 9 7" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BoxUnion * obj = new BoxUnion();
	clock_t start = clock();
	int my_answer = obj->area(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 35;
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
double test5() {
	string t0[] = { "0 0 20000 20000",
  "0 0 20000 20000",
  "0 0 20000 20000" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BoxUnion * obj = new BoxUnion();
	clock_t start = clock();
	int my_answer = obj->area(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 400000000;
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
	
	time = test5();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
