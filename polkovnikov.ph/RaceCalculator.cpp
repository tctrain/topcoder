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

struct RaceCalculator {
	int bestRace(vector <int> distances, vector <int> times) {
		int mni = -1;
		double mnbadness = 0;
		fori(i, times) {
			double d = distances[i];
			double actualTime = times[i];
			double badness = 0; bool hasbadness = 0;
			fori(j, times) if (i != j) {
				fori(k, times) if (i != k && j != k) {
					double t1 = times[j];
					double t2 = times[k];
					double d1 = distances[j];
					double d2 = distances[k];
					if (t1 < t2) swap(t1, t2), swap(d1, d2);
					double expectedTime = t1 * exp(log(t2 / t1) * log(d1 / d) / log(d1 / d2));
					double nbadness = (actualTime - expectedTime) / expectedTime;
					badness = hasbadness ? max(badness, nbadness) : (hasbadness = true, nbadness);
				}
			}
			if (mni == -1 || mnbadness > badness) {
				mnbadness = badness;
				mni = i;
			}
		}
		return mni;
	}
};


double test0() {
	int t0[] = {1600,3200,16000};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {299,655,4020};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	RaceCalculator * obj = new RaceCalculator();
	clock_t start = clock();
	int my_answer = obj->bestRace(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	int t0[] = {1600,2000,3200,3000,5000,9600};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {234,306,499,462,802,1629};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	RaceCalculator * obj = new RaceCalculator();
	clock_t start = clock();
	int my_answer = obj->bestRace(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	int t0[] = {1000,2000,3000,4000};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {160,330,510,750};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	RaceCalculator * obj = new RaceCalculator();
	clock_t start = clock();
	int my_answer = obj->bestRace(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	int t0[] = {1000,50000,10000,5000};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {200,70010,2250,1080};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	RaceCalculator * obj = new RaceCalculator();
	clock_t start = clock();
	int my_answer = obj->bestRace(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
