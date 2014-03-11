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

struct TennisSet {
	string firstSet(vector <string> p) {
		string points;
		fori(i, p) points += p[i];
		int gr[2] = {};
		int sr[2] = {};
		bool gs = false;
		fori(i, points) {
			++gr[gs ^ (points[i] == 'S')];
			if (gr[0] >= 4 && gr[0] - gr[1] >= 2) {
				++sr[0];
				gr[0] = gr[1] = false;
				gs ^= true;
				if (sr[0] >= 6 && sr[0] - sr[1] >= 2 || sr[1] >= 6 && sr[1] - sr[0] >= 2) {
					stringstream ss;
					ss << sr[1] << '-' << sr[0] << endl;
					string s;
					ss >> s;
					return s;
				}
			} else if (gr[1] >= 4 && gr[1] - gr[0] >= 2) {
				++sr[1];
				gr[0] = gr[1] = false;
				gs ^= true;
				if (sr[0] >= 6 && sr[0] - sr[1] >= 2 || sr[1] >= 6 && sr[1] - sr[0] >= 2) {
					stringstream ss;
					ss << sr[1] << '-' << sr[0] << endl;
					string s;
					ss >> s;
					return s;
				}
			}
		}
		stringstream ss;
		ss << sr[1] << '-' << sr[0] << endl;
		string s;
		ss >> s;
		return s;
	}
};


double test0() {
	string t0[] = {"SSSSSSSSSSSSSSS"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TennisSet * obj = new TennisSet();
	clock_t start = clock();
	string my_answer = obj->firstSet(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "2-1";
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
	string t0[] = {"SS","SRSS","RRRRR"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TennisSet * obj = new TennisSet();
	clock_t start = clock();
	string my_answer = obj->firstSet(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "2-0";
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
	string t0[] = {"SSSSRRRRSSSSRR","RRSSSSRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR","R"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TennisSet * obj = new TennisSet();
	clock_t start = clock();
	string my_answer = obj->firstSet(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "6-0";
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
