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

struct ReportAccess {
	vector <string> whoCanSee(vector <string> userNames, vector <string> allowedData, vector <string> reportData) {
		vector<string> r;
		fori(i, allowedData) {
			stringstream ss;
			ss << allowedData[i];
			set<string> e;
			for(;;) {
				string s;
				if (!(ss >> s)) break;
				e.insert(s);
			}
			bool f = true;
			fori(j, reportData)
				if (e.find(reportData[j]) == e.end())
					{ f = false; break; }
			if (f) r.push_back(userNames[i]);
		}
		srt(r);
		return r;
	}
};


double test0() {
	string t0[] = {"joe", "nick", "ted"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"clients products", "products orders", "clients orders"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	string t2[] = {"clients", "products"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	ReportAccess * obj = new ReportAccess();
	clock_t start = clock();
	vector <string> my_answer = obj->whoCanSee(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t3[] = {"joe" };
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
	string t0[] = {"kathy", "john", "dan", "steve", "cheryl", "tony"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"users data", "data orders", "users permissions", "system users controls", "default", "admin users"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	string t2[] = {"users"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	ReportAccess * obj = new ReportAccess();
	clock_t start = clock();
	vector <string> my_answer = obj->whoCanSee(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t3[] = {"dan", "kathy", "steve", "tony" };
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
	string t0[] = {"jim", "scott", "barbara"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"users order products", "products shipping", "tracking products orders"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	string t2[] = {"admin"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	ReportAccess * obj = new ReportAccess();
	clock_t start = clock();
	vector <string> my_answer = obj->whoCanSee(p0, p1, p2);
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
