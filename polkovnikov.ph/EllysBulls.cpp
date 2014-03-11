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

struct EllysBulls {
	vector <string> G;
	vector <int> B;
	string ret, ret2;
	int c, Bs;
	void rec(int k) {
		if (k == G[0].size()) {
			if (Bs == 0) {
				ret2 = ret;
				++c;
				if (c >= 2) throw string("Ambiguity");
			}
			return;
		}
		forn (i, 10) {
			char D = '0' + i;
			bool f = true;
			fori(j, G) if (B[j] == 0 && G[j][k] == D) { f = false; break; }
			if (!f) continue;
			fori(j, G) if (G[j][k] == D) --B[j], --Bs;
			ret += D;
			rec(k + 1);
			ret.resize(ret.size() - 1);
			fori(j, G) if (G[j][k] == D) ++B[j], ++Bs;
		}
	}
	string getNumber(vector <string> guesses, vector <int> bulls) {
		G = guesses;
		B = bulls;
		Bs = 0;
		fori(i, B) Bs += B[i];
		c = 0;
		ret = "";
		try { rec(0); } catch (string & s) { return s; }
		return ret2.empty() ? "Liar" : ret2;
	}
};


double test0() {
	string t0[] = {"1234", "4321", "1111", "2222", "3333", "4444", "5555", "6666", "7777", "8888", "9999"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int t1[] = {2, 1, 1, 0, 2, 0, 0, 0, 1, 0, 0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	EllysBulls * obj = new EllysBulls();
	clock_t start = clock();
	string my_answer = obj->getNumber(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "1337";
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
	string t0[] = {"0000", "1111", "2222"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int t1[] = {2, 2, 2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	EllysBulls * obj = new EllysBulls();
	clock_t start = clock();
	string my_answer = obj->getNumber(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Liar";
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
	string t0[] = {"666666", "666677", "777777", "999999"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int t1[] = {2, 3, 1, 0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	EllysBulls * obj = new EllysBulls();
	clock_t start = clock();
	string my_answer = obj->getNumber(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Ambiguity";
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
	string t0[] = {"000", "987", "654", "321", "100", "010"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int t1[] = {2, 1, 0, 0, 1, 1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	EllysBulls * obj = new EllysBulls();
	clock_t start = clock();
	string my_answer = obj->getNumber(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "007";
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
	string t0[] = {"28", "92", "70", "30", "67", "63", "06", "65",
 "11", "06", "88", "48", "09", "65", "48", "08"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int t1[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	EllysBulls * obj = new EllysBulls();
	clock_t start = clock();
	string my_answer = obj->getNumber(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "54";
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
double test5() {
	string t0[] = {"0294884", "1711527", "2362216", "7666148", "7295642",
 "4166623", "1166638", "2767693", "8650248", "2486509",
 "6138934", "4018642", "6236742", "2961643", "8407361",
 "2097376", "6575410", "6071777", "3569948", "2606380"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int t1[] = {1, 0, 1, 3, 4, 4, 3, 2, 1, 1, 0, 4, 4, 3, 0, 0, 0, 0, 2, 1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	EllysBulls * obj = new EllysBulls();
	clock_t start = clock();
	string my_answer = obj->getNumber(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "4266642";
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
	
	time = test5();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//
