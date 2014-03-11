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

struct CountriesRanklist {
	static const int total = 0;
	static const int conts = 1;
	static const int maxim = 2;
	vector <string> findPlaces(vector <string> knownPoints) {
		map<string, tuple<int, int, int>> v;
		vector<string> ctrys;
		int mn = 900;
		ec(i, knownPoints) {
			stringstream ss;
			ss << knownPoints[i];
			string ctry, name;
			int score;
			ss >> ctry >> name >> score;
			ctrys.push_back(ctry);
			get<total>(v[ctry]) += score;
			++get<conts>(v[ctry]);
			get<maxim>(v[ctry]) = get<maxim>(v[ctry])
				? min(get<maxim>(v[ctry]), score)
				: score;
			mn = min(mn, score);
		}
		srt(ctrys);
		ctrys.erase(unique(ctrys.begin(), ctrys.end()), ctrys.end());
		vector<string> ret;
		ec(i, ctrys) {
			int res[2] = {};
			fr(ty, 2) {
				vector<pair<int, string>> y;
				ec(j, ctrys) {
					auto & a = v[ctrys[j]];
					if ((i != j) ^ ty) {
						y.push_back(make_pair(
							-get<total>(a),
							ctrys[j]
						));
					} else {
						y.push_back(make_pair(
							-(get<total>(a) +
							max(4 - get<conts>(a), 0) *
							(min(get<maxim>(a), mn) - 1)),
							ctrys[j]
						));
					}
				}
				srt(y);
				int p = 1, q = 1;
				ec(j, y) {
					if (j != 0 && y[j].first != y[j-1].first) p = q;
					if (y[j].second == ctrys[i]) break;
					++q;
				}
				res[ty] = p;
			}
			stringstream ss;
			ss << ctrys[i] << ' ' << res[0] << ' ' << res[1];
			string str;
			getline(ss, str);
			ret.push_back(str);
		}
		return ret;
	}
};


double test0() {
	string t0[] = {"Poland Krzysztof 101", "Ukraine Evgeni 30", "Ukraine Ivan 24"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	CountriesRanklist * obj = new CountriesRanklist();
	clock_t start = clock();
	vector <string> my_answer = obj->findPlaces(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"Poland 1 1", "Ukraine 2 2" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
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
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"Poland Krzysztof 100", "CzechRep Martin 30", "CzechRep Jirka 25"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	CountriesRanklist * obj = new CountriesRanklist();
	clock_t start = clock();
	vector <string> my_answer = obj->findPlaces(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"CzechRep 1 2", "Poland 1 2" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
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
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"Slovakia Marian 270", "Hungary Istvan 24", "Poland Krzysztof 100", 
 "Hungary Gyula 30", "Germany Tobias 27", "Germany Juergen 27"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	CountriesRanklist * obj = new CountriesRanklist();
	clock_t start = clock();
	vector <string> my_answer = obj->findPlaces(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"Germany 2 4", "Hungary 2 4", "Poland 2 2", "Slovakia 1 1" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
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
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"usa Jack 14", "USA Jim 10", "USA Jim 10", "USA Jim 10", 
 "USA Jim 10", "usa Jack 14", "usa Jack 14", "Zimbabwe Jack 10"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	CountriesRanklist * obj = new CountriesRanklist();
	clock_t start = clock();
	vector <string> my_answer = obj->findPlaces(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"USA 2 2", "Zimbabwe 3 3", "usa 1 1" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
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
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	string t0[] = {"A a 9", "A b 9", "A c 9", "A d 9", 
 "B e 9", "B f 9", "B g 8", "B h 8",
 "C i 9", "C j 9", "C k 9", "C l 7",
 "D m 1", "D n 1", "D o 1", "D p 1"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	CountriesRanklist * obj = new CountriesRanklist();
	clock_t start = clock();
	vector <string> my_answer = obj->findPlaces(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"A 1 1", "B 2 2", "C 2 2", "D 4 4" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
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
	if (my_answer != p1) {
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

//Powered by [KawigiEdit] 2.0!
