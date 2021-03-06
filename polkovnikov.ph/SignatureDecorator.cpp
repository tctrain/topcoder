#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <tuple>
#define fr(i,n)for(int i=0,i##e=n;i<i##e;++i)
#define ec(i,m)fr(i,m.size())
#define srt(v)sort(v.begin(),v.end())
using namespace std;

struct SignatureDecorator {
	string applyDecoration(string name, vector <string> commands, vector <string> dec) {
		ec(i, commands) {
			int c = 0;
			switch (commands[i][0]) {
				case 'p': c = 1; break;
				case 'a': c = 2; break;
				case 's': c = 3; break;
			}
			if (c == 1) name = dec[i] + name;
			string rev = dec[i];
			reverse(rev.begin(), rev.end());
			if (c == 2) name = name + dec[i];
			if (c == 3) name = dec[i] + name + rev;
		}
		return name;
	}
};


double test0() {
	string p0 = "Bob";
	string t1[] = {"surround", "append", "prepend"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	string t2[] = {"-=", "(", ")"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	SignatureDecorator * obj = new SignatureDecorator();
	clock_t start = clock();
	string my_answer = obj->applyDecoration(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = ")-=Bob=-(";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string p0 = "Super_Man_01";
	vector <string> p1;
	vector <string> p2;
	SignatureDecorator * obj = new SignatureDecorator();
	clock_t start = clock();
	string my_answer = obj->applyDecoration(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "Super_Man_01";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string p0 = "4BcD3FgHIjklMN0pqrS7uVWxYZ_";
	string t1[] = {"append", "prepend", "surround"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	string t2[] = {"`{[(", ")]}'", ",.;<>?:|-=_+!@#$%^&*~"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	SignatureDecorator * obj = new SignatureDecorator();
	clock_t start = clock();
	string my_answer = obj->applyDecoration(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = ",.;<>?:|-=_+!@#$%^&*~)]}'4BcD3FgHIjklMN0pqrS7uVWxYZ_`{[(~*&^%$#@!+_=-|:?><;.,";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string p0 = "RacEcaR";
	string t1[] = {"surround"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	string t2[] = {"([{/"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	SignatureDecorator * obj = new SignatureDecorator();
	clock_t start = clock();
	string my_answer = obj->applyDecoration(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "([{/RacEcaR/{[(";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
