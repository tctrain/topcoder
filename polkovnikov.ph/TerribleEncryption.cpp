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

struct TerribleEncryption {
	string decrypt(string pool, vector <int> data, vector <int> keys) {
		string s;
		fori(i, data) {
			int r = 0;
			forn(j, keys[i])
				if ((data[i] * j) % keys[i] == 1) {
					r = j;
					break;
				}
			s += pool[r % int(pool.size())];
		}
		return s;
	}
};


double test0() {
	string p0 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int t1[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {17,17,17,17,17,17,17,17,17,17,17,17,17,17,17};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	TerribleEncryption * obj = new TerribleEncryption();
	clock_t start = clock();
	string my_answer = obj->decrypt(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "BJGNHDFPCMOKELI";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string p0 = "AEIOUAEIOUaeiouaeiou";
	int t1[] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2,3,4,5,6,7,8,9,10,11,13,15,16,17,18};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	TerribleEncryption * obj = new TerribleEncryption();
	clock_t start = clock();
	string my_answer = obj->decrypt(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "EIOUAEIOUaEOeoe";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string p0 = "abcdeffedcbaABCDEFFEDCBA";
	int t1[] = {10,10,10,10,10,10,10,10,10,10,10};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {3,7,11,13,17,19,23,29,31,37,41};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	TerribleEncryption * obj = new TerribleEncryption();
	clock_t start = clock();
	string my_answer = obj->decrypt(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "bfbeAcedecB";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string p0 = "abcdefghijklmnopqrstuvwxyz";
	int t1[] = {11,11,11,11,11,11,11,11,11,11,11,11,11,11,11};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2,3,4,5,6,7,8,9,10,12,13,14,15,16,17};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	TerribleEncryption * obj = new TerribleEncryption();
	clock_t start = clock();
	string my_answer = obj->decrypt(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "bcdbfcdfblgjldo";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string p0 = "HmmBlahHmmBlah";
	int t1[] = {1,1,1,1,1,1,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {10,9,8,7,6,5,4};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	TerribleEncryption * obj = new TerribleEncryption();
	clock_t start = clock();
	string my_answer = obj->decrypt(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p3 = "mmmmmmm";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p3 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
