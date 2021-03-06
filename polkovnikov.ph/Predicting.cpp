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
#define forn2(i,a,b)for (i = a; i <= b; ++i)
using namespace std;

struct Predicting {
	double avgError(vector <double> data) {
		const int q = data.size();
		int v[5];
		double mn = numeric_limits<double>::max();
		forn2(v[0], -10, 10) forn2(v[1], -10, 10) forn2(v[2], -10, 10) forn2(v[3], -10, 10) {
			v[4] = 10;
			forn(i, 4) v[4] -= v[i];
			if (v[4] < -10 || v[4] > 10) continue;
			double mx = 0;
			for (int i = 5; i < q; ++i) {
				double s = 0;
				forn(j, 5) s += data[i - j - 1] * v[j];
				mx += abs(s - data[i] * 10);
			}
			mn = min(mn, mx);
		}
		return mn / 10.0 / (q - 5);
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <double> p0, bool hasAnswer, double p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}";
	cout << "]" << endl;
	Predicting *obj;
	double answer;
	obj = new Predicting();
	clock_t startTime = clock();
	answer = obj->avgError(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p1 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == answer && fabs(p1 - answer) <= 1e-9 * max(1.0, fabs(p1));
	}
	if (!res) {
		cout << "DOESN'T MATCH!!!!" << endl;
	} else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
		cout << "FAIL the timeout" << endl;
		res = false;
	} else if (hasAnswer) {
		cout << "Match :-)" << endl;
	} else {
		cout << "OK, but is it right?" << endl;
	}
	cout << "" << endl;
	return res;
}
int main() {
	bool all_right;
	all_right = true;
	
	vector <double> p0;
	double p1;
	
	{
	// ----- test 0 -----
	double t0[] = {10,10,10,10,10,10};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 0.0;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	double t0[] = {50,10,50,10,50,10,50,10,50,10,50,10};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 0.0;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	double t0[] = {50,60,50,60,50,60,60};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 5.0;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	double t0[] = {82.9102,70.6848,21.503,61.4588,54.7789,48.9889,57.6766,91.1859,26.3674,55.4601,53.9357,87.2005,78.4771,65.0102,18.619,90.296,26.3894,53.8588,91.8369,58.8028,74.0577,28.2406,65.609,59.4867,27.7544,54.6992,69.2428,22.6264,87.0083,58.5116,60.286,20.4318,65.6475,11.8348,36.3488,92.8092,60.7392,98.124,48.1292,39.5459,52.2657,34.3519,38.9279,93.0152,11.3157};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 22.0175905;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	if (all_right) {
		cout << "You're a stud (at least on the example cases)!" << endl;
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// PROBLEM STATEMENT
// We would like to be able to predict tomorrow's price of a share of stock.  We 
// have data on past daily prices. Based on that we will make a prediction.
// Our plan is to use a weighted average of the 5 most recent prices as the
// prediction.
// 
// We will choose the appropriate weights as the ones that would have best predicted 
// prices in the past.  The weights must
// add up to one to be a weighted average, but some of them may be negative. We
// will restrict consideration to weights that are chosen from the following 21 values:
// 
//      -1.0, -0.9, ... , -0.1, 0.0, 0.1, ..., 0.9, 1.0
// 
// We define the "error" of a prediction to be the absolute value of the difference 
// between the prediction and the
// price.We will evaluate a possible weighting by using it to predict each of the
// known prices (except for the first 5, which don't have enough predecessors).
// 
// We will then choose the weighting that has the smallest average error for its predictions.
// 
// Before we use our weighted averaging scheme to make our fortune on the stock
// market we need to have some idea of how well it predicted past data.  Create a 
// class Predicting that contains a method avgError that will be given a
// vector <double> data and will return the average error made by our best weighting.
// 
// 
// 
// DEFINITION
// Class:Predicting
// Method:avgError
// Parameters:vector <double>
// Returns:double
// Method signature:double avgError(vector <double> data)
// 
// 
// NOTES
// -The returned value must be accurate to within a relative or absolute value of 1E-9.
// 
// 
// CONSTRAINTS
// -data will contain between 6 and 50 elements inclusive.
// -Each element of data will be between 10.0 and 100.0 inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {10,10,10,10,10,10}
// 
// Returns: 0.0
// 
// 
// 
//    A weighting of .2,.2,.2,.2,.2 will exactly predict the only past price that
//    had 5 predecessors.
// 
// 
// 
// 1)
// {50,10,50,10,50,10,50,10,50,10,50,10}
// 
// Returns: 0.0
// 
// 
// 
//    A weighting of -1,0,0,1,1 predicts price correctly every time (in the past). 
//    For example, the prediction of the most recent price is 
//    -1*50 + 0*10 + 0*50 + 1*10 + 1*50 = 10 which was exactly right. 
// 
// 2)
// {50,60,50,60,50,60,60}
// 
// Returns: 5.0
// 
// The best choice of weights is -1.0,-1.0,1.0,1.0,1.0 which gives a
// prediction of 50 for the next to the last price (-1*50 + -1*60 + 1*50
//  + 1*60 + 1*50 = 50) and a prediction of 60 for the last price (-1*60
//  + -1*50 + 1*60 + 1*50 + 1*60 = 60). So the errors are 10 and 0 for the
// two predictions with an average error of 5.
// 
// 3)
// {82.9102, 70.6848, 21.503, 61.4588, 54.7789,
//  48.9889, 57.6766, 91.1859, 26.3674, 55.4601,
//  53.9357, 87.2005, 78.4771, 65.0102, 18.619,
//  90.296, 26.3894, 53.8588, 91.8369, 58.8028,
//  74.0577, 28.2406, 65.609, 59.4867, 27.7544,
//  54.6992, 69.2428, 22.6264, 87.0083, 58.5116,
//  60.286, 20.4318, 65.6475, 11.8348, 36.3488,
//  92.8092, 60.7392, 98.124, 48.1292, 39.5459,
//  52.2657, 34.3519, 38.9279, 93.0152, 11.3157}
// 
// Returns: 22.0175905
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
