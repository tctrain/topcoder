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

struct ParameterSubstitution {
	string processParams(string code, vector <string> params) {
		string r;
		const int q = params.size();
		fori(i, code) {
			if (code[i] != '$') {
				r += code[i];
			} else {
				int n = 0;
				while (i + 1 < ie && (n == 0 ? '1' : '0') <= code[i + 1] && code[i + 1] <= '9' && 10 * n + code[i + 1] - '0' <= q) {
					n = 10 * n + code[i + 1] - '0';
					++i;
				}
				if (n == 0) {
					r += '$';
				} else {
					r += params[n - 1];
				}
			}
		}
		return r;
	}
};


double test0() {
	string p0 = "if ($1 == $2) $3;";
	string t1[] = {"12", "12", "doWhatIWant()"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	ParameterSubstitution * obj = new ParameterSubstitution();
	clock_t start = clock();
	string my_answer = obj->processParams(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "if (12 == 12) doWhatIWant();";
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
	string p0 = "$3+$1*$2-$7=$10";
	string t1[] = {"myvar", "490jri", "e09jd9", "dlkjfoiej"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	ParameterSubstitution * obj = new ParameterSubstitution();
	clock_t start = clock();
	string my_answer = obj->processParams(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "e09jd9+myvar*490jri-$7=myvar0";
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
	string p0 = "12342123$13231232$2123211242$a$dlkj$";
	string t1[] = {"$2", "$1"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	ParameterSubstitution * obj = new ParameterSubstitution();
	clock_t start = clock();
	string my_answer = obj->processParams(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "12342123$23231232$1123211242$a$dlkj$";
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
	string p0 = "{[(+.*-,/\\:;<=>?@)]}_`~|$$1";
	string t1[] = {"1{[(+.*-,/\\:;<=>?@)]}_`~|"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	ParameterSubstitution * obj = new ParameterSubstitution();
	clock_t start = clock();
	string my_answer = obj->processParams(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "{[(+.*-,/\\:;<=>?@)]}_`~|$1{[(+.*-,/\\:;<=>?@)]}_`~|";
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
	string p0 = "$01";
	string t1[] = {"abc"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	ParameterSubstitution * obj = new ParameterSubstitution();
	clock_t start = clock();
	string my_answer = obj->processParams(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "$01";
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
