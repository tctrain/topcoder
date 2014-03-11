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
#define all(a)(a).begin(),(a).end()
#define forn(i,n)for(int i=0,i##len=(n);i<i##len;++i)
#define fori(i,m)forn(i,(m).size())
#define each(it,m)for(typeof((m).begin())it=(m).begin(),it##end=(m).end();it!=it##end;++it)
#define sort(s)sort(all(s))
typedef long long ll;
using namespace std;

struct KingdomXCitiesandVillagesAnother {
	double determineLength(vector <int> cx, vector <int> cy, vector <int> vx, vector <int> vy) {
		vector<char> g(vx.size(), true);
		double ret = 0;
		fori (a, vx) {
			long long mn = numeric_limits<ll>::max(), d;
			int imn = 0;
			fori (b, cx) fori (c, vx) if (g[c])
				if ((d = dst(cx[b], cy[b], vx[c], vy[c])) < mn)
					mn = d, imn = c;
			cx.push_back(vx[imn]);
			cy.push_back(vy[imn]);
			g[imn] = false;
			ret += sqrt(double(mn));
		}
		return ret;
	}
	ll dst(int x1, int y1, int x2, int y2) {
		return ll(x2 - x1) * (x2 - x1) + ll(y2 - y1) * (y2 - y1);
	}
};


double test0() {
	int t0[] = {1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2,3};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {1,1};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	KingdomXCitiesandVillagesAnother * obj = new KingdomXCitiesandVillagesAnother();
	clock_t start = clock();
	double my_answer = obj->determineLength(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p4 = 2.0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {1,2};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1,2};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {2,2};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	KingdomXCitiesandVillagesAnother * obj = new KingdomXCitiesandVillagesAnother();
	clock_t start = clock();
	double my_answer = obj->determineLength(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p4 = 2.0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {2};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	KingdomXCitiesandVillagesAnother * obj = new KingdomXCitiesandVillagesAnother();
	clock_t start = clock();
	double my_answer = obj->determineLength(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p4 = 2.8284271247461903;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
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
