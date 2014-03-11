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

struct IsHomomorphism {
	vector <string> numBad(vector <string> source, vector <string> target, vector <int> mapping) {
		vector<string> r;
		fori(a, source) {
			forn(b, ae) {
				if (mapping[source[a][b] - '0'] != target[mapping[a]][mapping[b]] - '0') {
					stringstream ss;
					ss << '(' << a << ',' << b << ')';
					string s;
					getline(ss, s);
					r.push_back(s);
				}
			}
		}
		return r;
	}
};


double test0() {
	string t0[] = {"0000",
 "0123",
 "0202",
 "0321"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"0000",
 "0123",
 "0202",
 "0321"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int t2[] = {0,1,2,3};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	IsHomomorphism * obj = new IsHomomorphism();
	clock_t start = clock();
	vector <string> my_answer = obj->numBad(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	vector <string> p3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p3.size() > 0) {
		cout <<"\""<<p3[0]<<"\"";
		for (int i=1; i<p3.size(); i++)
			cout <<", \"" <<p3[i]<<"\"";
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
	if (my_answer != p3) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"0123456",
 "1234560",
 "2345601",
 "3456012",
 "4560123",
 "5601234",
 "6012345"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"0123456",
 "1234560",
 "2345601",
 "3456012",
 "4560123",
 "5601234",
 "6012345"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int t2[] = {1,3,2,1,2,1,1};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	IsHomomorphism * obj = new IsHomomorphism();
	clock_t start = clock();
	vector <string> my_answer = obj->numBad(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t3[] = { "(0,0)",  "(0,1)",  "(0,2)",  "(0,3)",  "(0,4)",  "(0,5)",  "(0,6)",  "(1,0)",  "(1,1)",  "(1,2)",  "(1,3)",  "(1,4)",  "(1,5)",  "(1,6)",  "(2,0)",  "(2,1)",  "(2,2)",  "(2,3)",  "(2,4)",  "(2,5)",  "(3,0)",  "(3,1)",  "(3,2)",  "(3,3)",  "(3,4)",  "(3,5)",  "(4,0)",  "(4,1)",  "(4,2)",  "(4,3)",  "(4,4)",  "(4,5)",  "(4,6)",  "(5,0)",  "(5,1)",  "(5,2)",  "(5,3)",  "(5,4)",  "(5,5)",  "(6,0)",  "(6,1)",  "(6,4)",  "(6,6)" };
	vector <string> p3(t3, t3+sizeof(t3)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p3.size() > 0) {
		cout <<"\""<<p3[0]<<"\"";
		for (int i=1; i<p3.size(); i++)
			cout <<", \"" <<p3[i]<<"\"";
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
	if (my_answer != p3) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"012",
 "120",
 "210"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"012",
 "120",
 "110"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int t2[] = {0,1,2};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	IsHomomorphism * obj = new IsHomomorphism();
	clock_t start = clock();
	vector <string> my_answer = obj->numBad(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t3[] = { "(2,0)" };
	vector <string> p3(t3, t3+sizeof(t3)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p3.size() > 0) {
		cout <<"\""<<p3[0]<<"\"";
		for (int i=1; i<p3.size(); i++)
			cout <<", \"" <<p3[i]<<"\"";
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
	if (my_answer != p3) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"012",
 "120",
 "210"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"012",
 "120",
 "210"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int t2[] = {1,2,0};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	IsHomomorphism * obj = new IsHomomorphism();
	clock_t start = clock();
	vector <string> my_answer = obj->numBad(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t3[] = { "(0,0)",  "(0,1)",  "(0,2)",  "(1,0)",  "(1,2)",  "(2,0)",  "(2,2)" };
	vector <string> p3(t3, t3+sizeof(t3)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p3.size() > 0) {
		cout <<"\""<<p3[0]<<"\"";
		for (int i=1; i<p3.size(); i++)
			cout <<", \"" <<p3[i]<<"\"";
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
	if (my_answer != p3) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	string t0[] = {"01","10"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"10","01"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int t2[] = {1,0};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	IsHomomorphism * obj = new IsHomomorphism();
	clock_t start = clock();
	vector <string> my_answer = obj->numBad(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	vector <string> p3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p3.size() > 0) {
		cout <<"\""<<p3[0]<<"\"";
		for (int i=1; i<p3.size(); i++)
			cout <<", \"" <<p3[i]<<"\"";
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
	if (my_answer != p3) {
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
