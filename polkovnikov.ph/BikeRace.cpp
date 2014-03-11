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

int gcd(int a, int b) {
	while (b) {
		int r = a % b;
		a = b;
		b = r;
	} return a;
}

struct frac : pair<int, int> {
	frac(int a = 0, int b = 1) : pair<int, int>(a, b) {
		int g = gcd(a, b);
		if (g != 0) first /= g, second /= g;
	}
	friend bool operator < (frac a, frac b) {
		return a.first * b.second < b.first * a.second;
	}
	friend frac operator + (frac a, frac b) {
		return frac(a.first * b.second + b.first * a.second, a.second * b.second);
	}
};

struct BikeRace {
	vector <string> eliminated(int track, vector <string> name, vector <int> start, vector <int> speed) {
		// eliminated: when, eliminator, eliminatee
		map< frac, vector< pair<int, int> > > ee;
		fori(i, name) fori(j, name) {
			if (start[i] < start[j] && (start[j] - start[i]) * speed[i] >= track) {
				//cout << 1 << i << j << endl;
				ee[frac(start[i]) + frac(track, speed[i])].push_back(make_pair(i, j));
			} else if (speed[i] > speed[j] && start[i] > start[j]) {
				//cout << 2 << i << j << endl;
				ee[frac(start[i]) + frac(speed[j] * (start[i] - start[j]) % track, speed[i] - speed[j])].push_back(make_pair(i, j));
			} else if (speed[i] > speed[j] && start[i] <= start[j]) {
				//cout << 3 << i << j << endl;
				ee[frac(start[j]) + frac((speed[i] * (start[i] - start[j]) % track + track) % track, speed[i] - speed[j])].push_back(make_pair(i, j));
			}
		}
		vector< pair< frac, vector< pair<int, int> > > > e;
		each(i, ee) e.push_back(*i);
		srt(e);
		vector<char> ed(name.size(), false);
		vector<string> r;
		fori(i, e) {
			vector<string> pr;
			fori(j, e[i].second) {
				pair<int, int> & p = e[i].second[j];
				//cout << double(e[i].first.first)/e[i].first.second << ' ' << name[p.first] << ' ' << name[p.second] << endl;
				if (ed[p.first] || ed[p.second]) continue;
				ed[p.second] = true;
				pr.push_back(name[p.second]);
			}
			srt(pr);
			fori(j, pr) r.push_back(pr[j]);
		}
		return r;
	}
};


double test0() {
	int p0 = 4800;
	string t1[] = {"A","B","C"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int t2[] = { 0, 100,180} ;
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {30, 30, 30} ;
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	BikeRace * obj = new BikeRace();
	clock_t start = clock();
	vector <string> my_answer = obj->eliminated(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t4[] = { "C" };
	vector <string> p4(t4, t4+sizeof(t4)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p4.size() > 0) {
		cout <<"\""<<p4[0]<<"\"";
		for (int i=1; i<p4.size(); i++)
			cout <<", \"" <<p4[i]<<"\"";
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
	if (my_answer != p4) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int p0 = 3000;
	string t1[] = {"BO","JO", "AL"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int t2[] = { 10,  0,    15 } ;
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = { 12,  2,    10 } ;
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	BikeRace * obj = new BikeRace();
	clock_t start = clock();
	vector <string> my_answer = obj->eliminated(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t4[] = { "JO",  "AL" };
	vector <string> p4(t4, t4+sizeof(t4)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p4.size() > 0) {
		cout <<"\""<<p4[0]<<"\"";
		for (int i=1; i<p4.size(); i++)
			cout <<", \"" <<p4[i]<<"\"";
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
	if (my_answer != p4) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int p0 = 3000;
	string t1[] = {"BOBO","JOHNNY","ANNA"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int t2[] = {67,0,15};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {50,45,3};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	BikeRace * obj = new BikeRace();
	clock_t start = clock();
	vector <string> my_answer = obj->eliminated(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t4[] = { "BOBO",  "ANNA" };
	vector <string> p4(t4, t4+sizeof(t4)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p4.size() > 0) {
		cout <<"\""<<p4[0]<<"\"";
		for (int i=1; i<p4.size(); i++)
			cout <<", \"" <<p4[i]<<"\"";
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
	if (my_answer != p4) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int p0 = 3000;
	string t1[] = {"B","J","A"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int t2[] = {66,0,15};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {50,45,3};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	BikeRace * obj = new BikeRace();
	clock_t start = clock();
	vector <string> my_answer = obj->eliminated(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t4[] = { "A",  "J" };
	vector <string> p4(t4, t4+sizeof(t4)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p4.size() > 0) {
		cout <<"\""<<p4[0]<<"\"";
		for (int i=1; i<p4.size(); i++)
			cout <<", \"" <<p4[i]<<"\"";
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
	if (my_answer != p4) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int p0 = 5000;
	string t1[] = {"TOM","TOMMY","BILL","SPEEDY","JIMMY"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	int t2[] = {100,120,110,0,1000};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {50,50,50,50,50};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	BikeRace * obj = new BikeRace();
	clock_t start = clock();
	vector <string> my_answer = obj->eliminated(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t4[] = { "BILL",  "JIMMY",  "TOM",  "TOMMY" };
	vector <string> p4(t4, t4+sizeof(t4)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p4.size() > 0) {
		cout <<"\""<<p4[0]<<"\"";
		for (int i=1; i<p4.size(); i++)
			cout <<", \"" <<p4[i]<<"\"";
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
	if (my_answer != p4) {
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
