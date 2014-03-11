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

struct OldestOne {
	static string trim(string s) {
		int p1 = s.find_first_not_of(" ");
		int p2 = s.find_last_not_of(" ");
		return s.substr(p1, p2-p1+1);
	}
	string oldest(vector <string> data) {
		vector< pair< int, pair<int, string> > > r;
		fori(i, data) {
			string & d = data[i];
			string num = "0123456789";
			int p1 = d.find_first_of(num);
			int p2 = d.find_first_not_of(num, p1+1);
			string a = trim(d.substr(0, p1));
			string b = d.substr(p1, p2 - p1);
			string c = trim(d.substr(p2));
			stringstream ss;
			ss << b;
			int age;
			ss >> age;
			r.push_back(make_pair(-age, make_pair(i, a)));
		}
		srt(r);
		return r[0].second.second;
	}
};


double test0() {
	string t0[] = {"DOUG JONES 22 213 ALDEN LANE","   BOB     A SMITH  102 CLARK ST"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	OldestOne * obj = new OldestOne();
	clock_t start = clock();
	string my_answer = obj->oldest(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "BOB     A SMITH";
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
	string t0[] = {"DOUG JONES 102 213 ALDEN LANE","   BOB     A SMITH  102 CLARK ST",
 "A 1 999ELM"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	OldestOne * obj = new OldestOne();
	clock_t start = clock();
	string my_answer = obj->oldest(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "DOUG JONES";
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
	string t0[] = {"DOUG JONES 122 213 ALDEN LANE","   BOB     A SMITH  102 CLARK ST",
 "A 199 ELM"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	OldestOne * obj = new OldestOne();
	clock_t start = clock();
	string my_answer = obj->oldest(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "A";
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
	string t0[] = {"   DOUG                 JONES   122 213 ALDEN LANE",
"   BOB     A SMITH                       102  3",
 " J O H N N Y           199 ELM"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	OldestOne * obj = new OldestOne();
	clock_t start = clock();
	string my_answer = obj->oldest(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "J O H N N Y";
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//
