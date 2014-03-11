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

struct StepperMotor {
	int rotateToNearest(int n_, int c_, vector <int> t) {
		long long n = n_, c = c_;
		#define fix(a) a = (a % n + n) % n
		fix(c);
		vector< pair<int, bool> > v;
		fori(i, t) {
			fix(t[i]);
			v.push_back(make_pair(abs(c - t[i]), t[i] < c));
			v.push_back(make_pair(n - abs(c - t[i]), t[i] >= c));
		}
		srt(v);
		return v[0].first * (v[0].second ? -1 : 1);
	}
};


double test0() {
	int p0 = 10;
	int p1 = 0;
	int t2[] = {-2, -3, 4, 5, 6, 9999999};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	StepperMotor * obj = new StepperMotor();
	clock_t start = clock();
	int my_answer = obj->rotateToNearest(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = -1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	int p0 = 2;
	int p1 = 314159;
	int t2[] = {10, 8, 6, 4, 2};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	StepperMotor * obj = new StepperMotor();
	clock_t start = clock();
	int my_answer = obj->rotateToNearest(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	int p0 = 1;
	int p1 = -2147483648;
	int t2[] = {-2147483648, -2147483648, 2147483647, 2147483647};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	StepperMotor * obj = new StepperMotor();
	clock_t start = clock();
	int my_answer = obj->rotateToNearest(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	int p0 = 23;
	int p1 = 10;
	int t2[] = {64077, -567273, 105845, -279980, 35557,
-286190, -652879, -431665, -634870, -454044};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	StepperMotor * obj = new StepperMotor();
	clock_t start = clock();
	int my_answer = obj->rotateToNearest(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = -11;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int p0 = 1934820548;
	int p1 = -605865686;
	int t2[] = {415501376, -1701013064, -1905491487, -378543610, 142898498, 697590879, 533252332, 1389016634, -578962518, -138524734, 1624971525, -1549923231, 967056534, 1423628648, 1019529178, -952357432, -1730424236, 1801059004, -2037611635, -624999386, -847907760, -1095399441, -1140475224, 1331837183, 590988606, -1090935755, -1679002785, -803625706};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	StepperMotor * obj = new StepperMotor();
	clock_t start = clock();
	int my_answer = obj->rotateToNearest(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 2882321;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	
	time = test4();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
