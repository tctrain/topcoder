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

struct Twain {
	static bool cons(char c) {
		return 'a' <= c && c <= 'z' && string("aeiou").find(c) == string::npos;
	}
	static bool comp(char a, char b) {
		return cons(a) && cons(b) && a == b;
	}
	string getNewSpelling(int year, string w) {
		if (year == 0)
			return w;
		w = getNewSpelling(year - 1, w);
		int q = w.size();
		int c = 0;
		string r;
		switch (year) {
			case 1:
				fori(i, w) {
					if ((i == 0 || w[i-1] == ' ') && w[i] == 'x')
						r += 'z';
					else if (w[i] == 'x')
						r += "ks";
					else
						r += w[i];
				}
				break;
			case 2:
				fori(i, w) {
					if (w[i] == 'y')
						r += 'i';
					else
						r += w[i];
				}
				break;
			case 3:
				forn(i, q) {
					if (w[i] == 'c' && i+1 < q && (w[i+1] == 'e' || w[i+1] == 'i'))
						r += 's';
					else
						r += w[i];
				}
				break;
			case 4:
				fori(i, w) {
					if (w[i] == 'c')
						++c;
					else if (w[i] == 'k')
						r += 'k', c = 0;
					else
						r += string(c, 'c') + w[i], c = 0;
				}
				break;
			case 5:
				w = " " + w;
				q = w.size();
				forn(i, q) {
					if (i+3 < q && w.substr(i, 4) == " sch")
						r += " sk", i += 3;
					else r += w[i];
				}
				w = r;
				r = "";
				w = w.substr(1);
				q = w.size();
				fori(i, w) {
					if (i+2 < q && w.substr(i, 3) == "chr")
						i += 2, r += "kr";
					else
						r += w[i];
				}
				w = r;
				r = "";
				q = w.size();
				fori(i, w) {
					if (w[i] == 'c' && (i+1 == q || w[i+1] != 'h'))
						r += 'k';
					else
						r += w[i];
				}
				break;
			case 6:
				w = " " + w;
				++q;
				forn(i, q) {
					if (i+2<q && w.substr(i, 3) == " kn")
						r += " n", i += 2;
					else
						r += w[i];
				}
				r = r.substr(1);
				break;
			case 7:
				w.erase(unique(all(w), comp), w.end());
				r = w;
		}
		return r;
	}
};


double test0() {
	int p0 = 1;
	string p1 = "i fixed the chrome xerox by the cyclical church";
	Twain * obj = new Twain();
	clock_t start = clock();
	string my_answer = obj->getNewSpelling(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "i fiksed the chrome zeroks by the cyclical church";
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
	int p0 = 2;
	string p1 = "i fixed the chrome xerox by the cyclical church";
	Twain * obj = new Twain();
	clock_t start = clock();
	string my_answer = obj->getNewSpelling(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "i fiksed the chrome zeroks bi the ciclical church";
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
	int p0 = 0;
	string p1 = "this is unchanged";
	Twain * obj = new Twain();
	clock_t start = clock();
	string my_answer = obj->getNewSpelling(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "this is unchanged";
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
	int p0 = 7;
	string p1 = "sch kn x xschrx cknnchc cyck xxceci";
	Twain * obj = new Twain();
	clock_t start = clock();
	string my_answer = obj->getNewSpelling(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "sk n z zskrks nchk sik zksesi";
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
	int p0 = 7;
	string p1 = "  concoction   convalescence   cyclical   cello   ";
	Twain * obj = new Twain();
	clock_t start = clock();
	string my_answer = obj->getNewSpelling(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "  konkoktion   konvalesense   siklikal   selo   ";
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
	int p0 = 7;
	string p1 = "";
	Twain * obj = new Twain();
	clock_t start = clock();
	string my_answer = obj->getNewSpelling(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "";
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
double test6() {
	int p0 = 7;
	string p1 = "cck xzz aaaaa";
	Twain * obj = new Twain();
	clock_t start = clock();
	string my_answer = obj->getNewSpelling(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "k z aaaaa";
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
	
	time = test6();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//
