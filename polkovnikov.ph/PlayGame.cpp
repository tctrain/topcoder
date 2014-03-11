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

struct PlayGame {
	int saveCreatures(vector <int> you, vector <int> comp) {
		sort(all(you), greater<int>());
		int s = 0;
		fori(i, you) {
			int mnj = -1;
			fori(j, comp)
				if (you[i] > comp[j] && (mnj == -1 || comp[j] > comp[mnj]))
					mnj = j;
			if (mnj != -1 && you[i] > comp[mnj]) {
				comp.erase(comp.begin() + mnj);
				s += you[i];
			}
		}
		return s;
	}
};


double test0() {
	int t0[] = {5, 15, 100, 1, 5};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {5, 15, 100, 1, 5};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PlayGame * obj = new PlayGame();
	clock_t start = clock();
	int my_answer = obj->saveCreatures(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 120;
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
	int t0[] = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 
 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000,
 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000,
 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000,
 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 
 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000,
 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000,
 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000,
 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PlayGame * obj = new PlayGame();
	clock_t start = clock();
	int my_answer = obj->saveCreatures(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 0;
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
	int t0[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PlayGame * obj = new PlayGame();
	clock_t start = clock();
	int my_answer = obj->saveCreatures(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 99;
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
	int t0[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PlayGame * obj = new PlayGame();
	clock_t start = clock();
	int my_answer = obj->saveCreatures(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 65;
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
double test4() {
	int t0[] = {651, 321, 106, 503, 227, 290, 915, 549, 660, 115,
 491, 378, 495, 789, 507, 381, 685, 530, 603, 394,
 7, 704, 101, 620, 859, 490, 744, 495, 379, 781,
 550, 356, 950, 628, 177, 373, 132, 740, 946, 609,
 29, 329, 57, 636, 132, 843, 860, 594, 718, 849};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {16, 127, 704, 614, 218, 67, 169, 621, 340, 319,
 366, 658, 798, 803, 524, 608, 794, 896, 145, 627,
 401, 253, 137, 851, 67, 426, 571, 302, 546, 225,
 311, 111, 804, 135, 284, 784, 890, 786, 740, 612,
 360, 852, 228, 859, 229, 249, 540, 979, 55, 82};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PlayGame * obj = new PlayGame();
	clock_t start = clock();
	int my_answer = obj->saveCreatures(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 25084;
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
	
	time = test4();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
