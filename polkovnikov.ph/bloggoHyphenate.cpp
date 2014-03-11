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

struct bloggoHyphenate {
	vector <string> correct(vector <string> d, vector <string> c) {
		map< string, vector<int> > m;
		fori(i, d) {
			stringstream ss;
			ss << d[i];
			vector<int> v;
			string t;
			int p = 0;
			for (;;) {
				string s;
				if (!(ss >> s)) break;
				p += s.size();
				v.push_back(p);
				t += s;
			}
			m[t] = v;
		}
		vector<string> ret(c.size());
		fori(i, c) {
			int pos = c[i].find("-");
			c[i].erase(c[i].begin() + pos);
			vector<int> const & v = m[c[i]];
			int d = c[i].size();
			fori(j, v)
				if (j != je - 1 && abs(v[j] - pos) < abs(d))
					d = v[j] - pos;
			if (d == 0) {
				ret[i] = "correct";
			} else {
				ret[i] = c[i];
				if (v.size() != 1)
					ret[i].insert(pos + d, "-");
			}
		}
		return ret;
	}
};


double test0() {
	string t0[] = {"syl la ble", "dic tion a ry", "mole"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"mo-le", "syl-lable"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	bloggoHyphenate * obj = new bloggoHyphenate();
	clock_t start = clock();
	vector <string> my_answer = obj->correct(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t2[] = { "mole",  "correct" };
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p2.size() > 0) {
		cout <<"\""<<p2[0]<<"\"";
		for (int i=1; i<p2.size(); i++)
			cout <<", \"" <<p2[i]<<"\"";
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
	if (my_answer != p2) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"syl la ble", "dic tion a ry", "mole"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"dictio-nary", "syll-able"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	bloggoHyphenate * obj = new bloggoHyphenate();
	clock_t start = clock();
	vector <string> my_answer = obj->correct(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t2[] = { "diction-ary",  "syl-lable" };
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p2.size() > 0) {
		cout <<"\""<<p2[0]<<"\"";
		for (int i=1; i<p2.size(); i++)
			cout <<", \"" <<p2[i]<<"\"";
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
	if (my_answer != p2) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"syl la ble", "dic tion a ry", "mole"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"dictionary-", "-syllable"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	bloggoHyphenate * obj = new bloggoHyphenate();
	clock_t start = clock();
	vector <string> my_answer = obj->correct(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t2[] = { "dictiona-ry",  "syl-lable" };
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p2.size() > 0) {
		cout <<"\""<<p2[0]<<"\"";
		for (int i=1; i<p2.size(); i++)
			cout <<", \"" <<p2[i]<<"\"";
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
	if (my_answer != p2) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"zsx kd ds jply rf", "auca wb ill", "kvqm kpd p kqi xpbk j",
 "cqf ccr ewq", "srl vu m u d b", "h qae qzge", "jdn qqjf y",
 "zpa hbr", "d uft ctsm qjg", "l hgcp ik twuy bsi nlmu iyx",
 "cjjz jn td zg", "h bd q hi", "obsr kci hjdm h yar zsq q xyr hxb",
 "izq iibd yuh tgx nkq", "cjgd wfns", "ohc bn duc",
 "pydv a geki s bo avdi wd", "zygp gqt p", "xq pqqb ufoe",
 "cvm yamq moqj vl zoig w", "ahz b lf ixjv d", "qpg ven d",
 "m cbxz yf tv djf", "kti wacd uvgb kmr ew r", "ng tfb unw ndl",
 "qruv ctw a", "d hk v pcxh zoxy", "etbo wabk", "x hxiu n",
 "wp qq u dvpi tclh ac l", "f am brs lk uss uyb pg",
 "dtfx h ict if koe jhj", "nl shp yeji b rw vrg", "bz qfnc u",
 "t ceoy eb ss myoe zaaj z jey", "j d uju mb irvu",
 "anmo emjs syam ta bfiy kk", "gl ej egla tha jbug",
 "zk u sz raij d", "kw lbya atdb pd", "no id hqum u wny qcy",
 "phv nv l f oq m", "b xup tnq fziw yth sn", "pvc hnr oky lzj",
 "ew wtwt gyty s uu pfe kif my", "t cw fsau",
 "esk gqtd o yh jbx wed fl z", "vvr hqw wo gxwm",
 "lei akz nzz bumb", "bc hlmw"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"-duftctsmqjg", "-leiakznzzbumb", "-xhxiun", "-zpahbr",
 "ahzbl-fixjvd", "anmo-emjssyamtabfiykk", "aucawb-ill",
 "bchlmw-", "bxuptnqfziwyth-sn", "bzq-fncu", "c-vmyamqmoqjvlzoigw",
 "cjg-dwfns", "cjjzjn-tdzg", "cqfccre-wq", "dhkvpcxhzox-y",
 "dtfx-hictifkoejhj", "eskgqtdoyhjbx-wedflz", "etbowab-k",
 "ewwtwtgytysuupfe-kifmy", "fambrslkuss-uybpg", "glejegl-athajbug",
 "hbdqhi-", "hq-aeqzge", "izqiibd-yuhtgxnkq", "jd-nqqjfy",
 "jdujumb-irvu", "ktiwacduvgbkmr-ewr", "kv-qmkpdpkqixpbkj",
 "kwlbya-atdbpd", "lhgcpiktwuybsi-nlmuiyx", "mcbx-zyftvdjf",
 "ngtf-bunwndl", "nlshpyejibrwvrg-", "no-idhqumuwnyqcy", "o-hcbnduc",
 "obsr-kcihjdmhyarzsqqxyrhxb", "ph-vnvlfoqm", "pvchnrok-ylzj",
 "pydvageki-sboavdiwd", "qpgv-end", "qruvctw-a", "srlvumu-db",
 "tceoyebssmyo-ezaajzjey", "tcwfsau-", "vvrhqwwo-gxwm",
 "wpqqudvpit-clhacl", "xqpq-qbufoe", "zku-szraijd",
 "zsxkddsjp-lyrf", "zygpgqt-p"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	bloggoHyphenate * obj = new bloggoHyphenate();
	clock_t start = clock();
	vector <string> my_answer = obj->correct(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t2[] = { "d-uftctsmqjg",  "lei-akznzzbumb",  "x-hxiun",  "zpa-hbr",  "ahzb-lfixjvd",  "correct",  "correct",  "bc-hlmw",  "correct",  "bz-qfncu",  "cvm-yamqmoqjvlzoigw",  "cjgd-wfns",  "correct",  "cqfccr-ewq",  "dhkvpcxh-zoxy",  "correct",  "correct",  "etbo-wabk",  "correct",  "correct",  "glejegla-thajbug",  "hbdq-hi",  "h-qaeqzge",  "correct",  "jdn-qqjfy",  "correct",  "correct",  "kvqm-kpdpkqixpbkj",  "correct",  "correct",  "mcbxz-yftvdjf",  "ngtfb-unwndl",  "nlshpyejibrw-vrg",  "correct",  "ohc-bnduc",  "correct",  "phv-nvlfoqm",  "pvchnroky-lzj",  "correct",  "qpg-vend",  "correct",  "correct",  "tceoyebssmyoe-zaajzjey",  "tcw-fsau",  "correct",  "wpqqudvpi-tclhacl",  "xq-pqqbufoe",  "correct",  "zsxkdds-jplyrf",  "correct" };
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p2.size() > 0) {
		cout <<"\""<<p2[0]<<"\"";
		for (int i=1; i<p2.size(); i++)
			cout <<", \"" <<p2[i]<<"\"";
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
	if (my_answer != p2) {
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
