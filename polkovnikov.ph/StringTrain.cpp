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
#define sz(x)((x).size())
using namespace std;

struct StringTrain {
	string buildTrain(vector <string> cars) {
		string tr = cars[0];
		fori(i, cars) {
			if (i == 0) continue;
			int d = min(sz(tr), sz(cars[i])) - 1, m = 0;
			forn(z, d)
				if (tr.substr(sz(tr)-z-1) == cars[i].substr(0, z+1))
					m = max(m, z+1);
			if (m == 0) continue;
			tr += cars[i].substr(m);
		}
		reverse(all(tr));
		string ntr;
		fori(i, tr)
			if (ntr.find(tr[i]) == string::npos)
				ntr += tr[i];
		reverse(all(ntr));
		cout << ntr << endl;
		stringstream ss;
		ss << sz(tr) << ' ' << ntr;
		string ret;
		getline(ss, ret);
		return ret;
	}
};


double test0() {
	string t0[] = {"ABCDE","CDFFF","CDE","CDEGG","GABC"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	StringTrain * obj = new StringTrain();
	clock_t start = clock();
	string my_answer = obj->buildTrain(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "10 DEGABC";
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
	string t0[] = {"AAAAA","AAAAA","AAAAA"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	StringTrain * obj = new StringTrain();
	clock_t start = clock();
	string my_answer = obj->buildTrain(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "7 A";
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
	string t0[] = {"CABABDABAB","CABAB","ABABDABAB","DABAB"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	StringTrain * obj = new StringTrain();
	clock_t start = clock();
	string my_answer = obj->buildTrain(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "15 CDAB";
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
	string t0[] = {"ABABAB","ABABAB","ABABABAB","BZZZZZ"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	StringTrain * obj = new StringTrain();
	clock_t start = clock();
	string my_answer = obj->buildTrain(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "15 ABZ";
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
	string t0[] = {"A","A","A","AA"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	StringTrain * obj = new StringTrain();
	clock_t start = clock();
	string my_answer = obj->buildTrain(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "1 A";
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

//
