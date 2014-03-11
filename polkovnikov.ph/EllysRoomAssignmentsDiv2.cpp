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

struct EllysRoomAssignmentsDiv2 {
	double getProbability(vector <string> r) {
		stringstream ss;
		fori(i, r) ss << r[i];
		vector<int> u;
		for (;;) {
			int p;
			if (!(ss >> p)) break;
			u.push_back(p);
		}
		int q = u.size();
		int roomc = q / 20 + !!(q % 20);
		int elly = u[0];
		sort(all(u), greater<int>());
		int ellyi = find(all(u), elly) - u.begin();
		if (ellyi == 0 || roomc == 1) return 1;
		int egroup = ellyi / roomc;
		if (egroup == 0) return 0;
		return 1.0 / roomc;
	}
};


double test0() {
	string t0[] = {"724 42 13 17 1199 577 1001 1101 483 845 196 1163 3", "60 985 296 1044 917 1007 898 119 1016 23 56 1159 1",
 "194 372 951 991 947 1053 433 1017 1011 391 110 9 2", "30 245 788 830 747 2 3"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	EllysRoomAssignmentsDiv2 * obj = new EllysRoomAssignmentsDiv2();
	clock_t start = clock();
	double my_answer = obj->getProbability(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p1 = 0.3333333333333333;
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
	string t0[] = {"42 911 666 17 13 1 1155 1094 815 5 1000 540"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	EllysRoomAssignmentsDiv2 * obj = new EllysRoomAssignmentsDiv2();
	clock_t start = clock();
	double my_answer = obj->getProbability(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p1 = 1.0;
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
	string t0[] = {"1168 196 440 643 227 1194 1149 372 878 23 767 296 ", "110 52 840 367 790 884 620 676 380 1007 304 262 10",
 "63 917 230 951 635 898 894 319 724 597 470 1143 62", "7 1175 436 484 457 991 433 747 8 94 830 1044 1053 ",
 "360 1167 391 364 1120 192 56 528 366 712 480 83 11", "59 483 949 356 1163 9 845 750 781 784 1016 985 346",
 " 466 947 73 911 690 630 609 866 788 98 1017 410 11", "9 617 245 801 205"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	EllysRoomAssignmentsDiv2 * obj = new EllysRoomAssignmentsDiv2();
	clock_t start = clock();
	double my_answer = obj->getProbability(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p1 = 0.0;
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
	string t0[] = {"539 457 277 929 180 296 820 319 839 199 210 989 88", "5 1033 1132 479 1023 425 340 828 843 934 1124 434 ", "264 206 1117 569 388 351 972 348 176 1182 832"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	EllysRoomAssignmentsDiv2 * obj = new EllysRoomAssignmentsDiv2();
	clock_t start = clock();
	double my_answer = obj->getProbability(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p1 = 0.037037037037037035;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
