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

struct InstantRunoff {
	string outcome(string ca, vector <string> ba) {
		int q = ca.size();
		fori(i, ca) {
			map<char, int> v;
			fori(j, ba)
				if (ba[j].size() > 0)
					++v[ba[j][0]];
			char mxj = v.begin()->first;
			char mnj = v.begin()->first;
			each(j, v) {
				cout << j->first << " has " << j->second << " votes\n";
				if (v[mxj] < j->second)
					mxj = j->first;
				if (v[mnj] > j->second)
					mnj = j->first;
			}
			cout << mnj << ' ' << mxj << endl;
			if (2 * v[mxj] > ba.size())
				return string(1, mxj);
			int qq = 0;
			each(j, v) if (j->second == v[mnj]) {
				--q;
				++qq;
				cout << "wiped " << j->first << ";\n";
				fori(k, ba) {
					string r;
					fori(l, ba[k])
						if (ba[k][l] != j->first)
							r += ba[k][l];
					ba[k] = r;
				}
				fori(k, ba) cout << ba[k] << ' '; cout << endl;
			}
			cout << q << endl;
			if (q == 0 || qq == int(v.size())) return "";
		}
	}
};


double test0() {
	string p0 = "ABC";
	string t1[] = {"ACB", "BCA", "ACB", "BCA", "CBA"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	InstantRunoff * obj = new InstantRunoff();
	clock_t start = clock();
	string my_answer = obj->outcome(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "B";
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
	string p0 = "DCBA";
	string t1[] = {"ACBD", "ACBD", "ACBD", "BCAD", "BCAD", "DBCA", "CBDA"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	InstantRunoff * obj = new InstantRunoff();
	clock_t start = clock();
	string my_answer = obj->outcome(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "B";
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
	string p0 = "ACB";
	string t1[] = {"ACB", "BCA", "ACB", "BCA", "ACB", "BCA", "CBA", "CAB"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	InstantRunoff * obj = new InstantRunoff();
	clock_t start = clock();
	string my_answer = obj->outcome(p0, p1);
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
double test3() {
	string p0 = "CAB";
	string t1[] = {"ACB", "BCA", "ACB", "BCA", "ACB", "BCA", "CAB", "CAB"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	InstantRunoff * obj = new InstantRunoff();
	clock_t start = clock();
	string my_answer = obj->outcome(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "A";
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
	string p0 = "PSNJTEHOWC";
	string t1[] = {"EJCNTSHOWP", "SJWNTHECOP", "HSJEWCNTPO", "ETJHSWPOCN", "HPEJTSWNCO", "JCNWOTHSPE", "NHSJCTOPWE", "ENWPTCHJSO", "JESOHCTNWP", "EHJNSOWTPC", "NWJCOEHTPS", "ONPWSHCEJT", "HONCSJPWTE", "JPEOTSNWCH", "NOCTEPSWHJ", "TCHOENSJWP"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	InstantRunoff * obj = new InstantRunoff();
	clock_t start = clock();
	string my_answer = obj->outcome(p0, p1);
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
