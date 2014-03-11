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

struct wnd {
	int x1, y1, x2, y2; char c;
};

struct WindowManager {
	vector <string> screen(int height, int width, vector <string> windows) {
		vector<wnd> ws(windows.size());
		fori(i, windows) {
			stringstream ss;
			ss << windows[i];
			wnd & w = ws[i];
			ss >> w.y1 >> w.x1 >> w.y2 >> w.x2;
			w.x2 += w.x1 - 1;
			w.y2 += w.y1 - 1;
			w.c = windows[i][windows[i].size()-1];
		}
		vector<string> m(height, string(width, ' '));
		forn(y, height) {
			forn(x, width) {
				for (int i = ws.size() - 1; i >= 0; --i) {
					wnd const & w = ws[i];
					if (w.x1 <= x && x <= w.x2 && w.y1 <= y && y <= w.y2) {
						int s1 = (x == w.x1) + (x == w.x2);
						switch (s1 + (y == w.y1) + (y == w.y2)) {
							case 0: m[y][x] = w.c; break;
							case 1: m[y][x] = s1 ? '|' : '-'; break;
							default: m[y][x] = '+'; break;
						} 
						break;
					}
				}
			}
		}
		return m;
	}
};


double test0() {
	int p0 = 4;
	int p1 = 6;
	string t2[] = {"-5 -5 20 20 O", "0 0 2 2 Y", "0 0 4 6 X"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	WindowManager * obj = new WindowManager();
	clock_t start = clock();
	vector <string> my_answer = obj->screen(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t3[] = { "+----+",  "|XXXX|",  "|XXXX|",  "+----+" };
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
	int p0 = 7;
	int p1 = 7;
	string t2[] = {"-5 -5 20 12 9", "2 2 15 15 @", "2 2 3 3 *"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	WindowManager * obj = new WindowManager();
	clock_t start = clock();
	vector <string> my_answer = obj->screen(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t3[] = { "999999|",  "999999|",  "99+-+--",  "99|*|@@",  "99+-+@@",  "99|@@@@",  "99|@@@@" };
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
	int p0 = 1;
	int p1 = 1;
	string t2[] = {"-20000 -20000 5 5 X"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	WindowManager * obj = new WindowManager();
	clock_t start = clock();
	vector <string> my_answer = obj->screen(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t3[] = { " " };
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
double test3() {
	int p0 = 5;
	int p1 = 5;
	string t2[] = {"-1000000 -1000000 2000000 2000000 L"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	WindowManager * obj = new WindowManager();
	clock_t start = clock();
	vector <string> my_answer = obj->screen(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t3[] = { "LLLLL",  "LLLLL",  "LLLLL",  "LLLLL",  "LLLLL" };
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
