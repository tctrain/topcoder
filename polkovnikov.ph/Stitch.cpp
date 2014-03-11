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

struct Stitch {
	vector <string> stitch(vector <string> A, vector <string> B, int overlap) {
		vector<string> r(A.size());
		fori(i, A) {
			int d = A[i].size() - overlap;
			r[i] += A[i].substr(0, d);
			forn(j, overlap) {
				int a = A[i][d + j];
				int b = B[i][j];
				int R = (overlap-j)*a+(j+1)*b;
				R = R / (overlap+1) + (R % (overlap+1) * 2 >= overlap+1);
				r[i] += char(R);
			}
			r[i] += B[i].substr(overlap);
		}
		return r;
	}
};


double test0() {
	string t0[] = {"AAAAAA"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"JJJJJ"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int p2 = 4;
	Stitch * obj = new Stitch();
	clock_t start = clock();
	vector <string> my_answer = obj->stitch(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t3[] = { "AACEFHJ" };
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
double test1() {
	string t0[] = {"14ABCD",
 "25EFGH",
 "36IJKL"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"ABCD14",
 "EFGH25",
 "IJKL36"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int p2 = 4;
	Stitch * obj = new Stitch();
	clock_t start = clock();
	vector <string> my_answer = obj->stitch(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t3[] = { "14ABCD14",  "25EFGH25",  "36IJKL36" };
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
	string t0[] = {" 32ygfd",
 "3uh53G:",
 ")O83gh3"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"hsd$*(PH",
 "3G:$)(*P",
 "gh86$PBB"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int p2 = 3;
	Stitch * obj = new Stitch();
	clock_t start = clock();
	vector <string> my_answer = obj->stitch(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t3[] = { " 32ygmd$*(PH",  "3uh53G:$)(*P",  ")O83gh76$PBB" };
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
	string t0[] = {"A"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"A"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int p2 = 0;
	Stitch * obj = new Stitch();
	clock_t start = clock();
	vector <string> my_answer = obj->stitch(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t3[] = { "AA" };
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
