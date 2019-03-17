#include <map>
#include <set>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
//#include <string.h>

#define INF 99999

using namespace std;

int mapTest() {
	cout << "mapTest()" << endl;
	map<int, int> m1, m2;
	map<int, int>::iterator m1Iter;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	cout << "m1:" << endl;
	for (m1Iter = m1.begin(); m1Iter != m1.end(); m1Iter++) {
		cout << m1Iter->second << endl;
	}
}

struct student {
	char name[10];
	int score;
};

bool comp(const student &a, const student &b) {
	return a.score < b.score;
}

void sortTest() {
	cout << "sortTest()" << endl;
	vector<student> vectorStudents;
	int n = 5;
	while (n--) {
		student testStu;
		string name;
		int score;
		cin >> name >> score;
		strcpy(testStu.name, name.c_str());
		testStu.score = score;
		vectorStudents.push_back(testStu);
	}
	cout << "before sort:" << endl;
	for (vector<student>::iterator it = vectorStudents.begin(); it != vectorStudents.end(); it++) {
		cout << "name: " << it->name << " score: " << it->score << endl;
	}
	sort(vectorStudents.begin(), vectorStudents.end(), comp);
	cout << "after sort:" << endl;
	for (vector<student>::iterator it = vectorStudents.begin(); it != vectorStudents.end(); it++) {
		cout << "name: " << it->name << " score: " << it->score << endl;
	}
}

void vectorTest() {
	cout << "vectorTest()" << endl;
	vector<int> test;
	test.push_back(1);
	test.push_back(2);
	test.push_back(3);
	cout << "size:" << test.size() << endl;
	for (vector<int>::iterator it = test.begin(); it != test.end(); it++) {
		cout << "value:" << *it << endl;
	}
	cout << "1st:" << test.front() << endl;
	cout << "2nd:" << test.at(1) << endl;
	cout << "3rd:" << test.back() << endl;
	cout << "is empty:" << test.empty() << endl;
	cout << "" << endl;
	test.clear();
}

void stackTest() {
	cout << "stackTest()" << endl;
	stack<int> stk;
	stk.push(1);
	stk.push(2);
	cout << "top:" << stk.top() << endl;
	stk.pop();
	cout << "size:" << stk.size() << endl;
	cout << "empty:" << stk.empty() << endl;
}//FILO

void queueTest() {
	cout << "queueTest()" << endl;
	queue<int> que;
	que.push(1);
	que.push(2);
	que.push(3);
	cout << "front:" << que.front() << endl;
	cout << "back:" << que.back() << endl;
	cout << "size:" << que.size() << endl;
	cout << "empty:" << que.empty() << endl;
	que.pop();

}//FIFO

void dequeTest() {
	cout << "queueTest()" << endl;
	deque<int> deq;
	deq.push_back(2);
	deq.push_back(3);
	deq.push_front(1);
	cout << deq.size() << endl;
	cout << deq.front() << endl;
	deq.pop_front();
	cout << deq.back() << endl;
	deq.pop_back();
	for (auto i:deq) {
		cout << "value:" << i << endl;
	}
}

void stringFunc() {
//    isalnum(c)  如果c是字母或数字，返回 true
//    isalpha(c)  如果c是字母，返回true
//    iscntrl(c)  c是控制符，返回true
//    isdigit(c)  如果c是数字，返回true
//    isgraph(c)  如果c不是空格，则可打印，，则为true
//    islower(c)  如果c是小写字母，则为true
//    isupper(c)  如果c是大写字符，则为true
//    isprint(c)  如果c是可打印的字符，则为true
//    ispunct(c)  如果c是标点符号，则为true
//    isspace(c) 如果c是空白字符，则为true
//    isxdigit(c) 如果c是十六进制数，则为true
//    tolower(c) 如果c是大写字符，则返回其小写字母，否则直接返回c
//    toupper(c)  跟tolower相反
}

void stringTest() {
	string s1;
	string s2(s1);
	string s3("value");
	string s4(4, 'c');//4个c
	string s5, s6, s7;
//    cin>>s5;//空格截止
//    getline(cin,s6);//换行截止
//    getline(cin,s7,'a');//读到指定字符
	cout << s1.empty() << endl;
	cout << s4.size() << endl;
	cout << s3[3] << endl;
	cout << s3 + s4 << endl;
	s1 = s3;
	cout << (s1 == s3) << endl;

}

void stringOper() {
	string s1("hello");
	string s2("world");
	//cout<<s1.insert(3,s2)<<endl;//helworldlo
	//s1.insert(s1.begin(),3,'a');//aaahelworldlo
	s1.reserve(10);
	s1.assign(s1, 3);//lo


}

int C(int a, int b) {
	int up = 1, down = 1;
	for (int i = 0; i < b; i++) {
		up *= (a - i);
		down *= i;
	}
	return up / down;
}

int test() {
	int length;
	int a_len, a_count;
	int b_len, b_count;
	int sum = 0;
	cin >> length;
	cin >> a_len >> a_count >> b_len >> b_count;
	for (int i = 0; i <= a_count; i++) {
		for (int j = 0; j <= b_count; j++) {
			cout << i << j << endl;
			if (a_len * i + b_len * j == length) {
				sum += C(a_count, i) * C(b_count, j);
			}
		}
	}
	cout << sum;
}

void mult() {
	double a;
	int b;
	double sum = 1;
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		sum *= a;
	}
	cout << sum;
}

void stringLen() {
	string str;
	getline(cin, str);
	int pos = str.rfind(" ");
	int len = str.length() - pos - 1;
	cout << len;
}

void stringLen2() {
	string str;
	getline(cin, str);
	//string cha=str.substr(str.length()-1,1);
	string cha;
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	transform(cha.begin(), cha.end(), cha.begin(), ::tolower);
	cin >> cha;

	int count = 0;
	//cout<<cha<<endl;
//    for(int i=0;i<str.length()-1;i++){
//     //   cout<<str.substr(i,1)<<endl;
//        if(str.substr(i,1).compare(cha)==0){
//            count++;
//        }
//    }
	for (int i = 0; i < str.length(); i++) {
		if (str.substr(i, 1).compare(cha) == 0) {
			count++;
		}
	}
	cout << count;
}

bool comp2(const int &a, const int &b) {
	return a < b;
}

void MapSort() {
	int count;
	bool flag;
	vector<int> stu;
	cin >> count;
	for (int i = 0; i < count; i++) {
		int temp;
		cin >> temp;
		flag = true;
		for (vector<int>::iterator it = stu.begin(); it != stu.end(); it++) {
			if (*it == temp) {
				flag = false;
			}
		}
		if (flag) {
			stu.push_back(temp);
		}
	}
	sort(stu.begin(), stu.end(), comp2);
	for (vector<int>::iterator it = stu.begin(); it != stu.end(); it++) {
		cout << *it << " ";
	}
} //Map排序

void prem(int start, int end, int a[]) {
	if (start == end) {
		for (int i = 0; i < end; i++)
			cout << a[i] << ' ';
		cout << endl;
	}
	for (int i = start; i < end; i++) {
		swap(a[start], a[i]);
		prem(start + 1, end, a);
		swap(a[i], a[start]);
	}
} //排列

void initPrem() {
	int a[] = {0, 1, 2, 3, 4};
	prem(0, 5, a);
}

void combine(int arr[], int n, int k, int idx, int N) {
	//cout<<":"<<n<<" "<<k<<" "<<idx<<" "<<N<<endl;
	if (k == 0) {
		for (int i = 0; i < N; i++)
			cout << arr[i] << " ";
		cout << endl;
		return;
	}
	for (int i = idx; i <= n - k; i++) {
		arr[N - k] = i;
		combine(arr, n, k - 1, i + 1, N);
	}
}

void initComb(int n, int k) {
	int *arr = new int[n];
	combine(arr, n, k, 0, k);
} //组合 递归

void combine2() {
	int n = 5;
	int k = 3;
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			for (int k = j + 1; k < 5; k++) {
				cout << i << " " << j << " " << k << endl;
			}
		}
	}
} //组合 循环

int find(int pre[], int x) {
	int r = x;
	while (pre[r] != r)
		r = pre[r];
	int i = x, j;
	while (i != r) {
		j = pre[i];
		pre[i] = r;
		i = j;
	}
	return r;
}

int join(int pre[], int x, int y, int &total) {
	int fx = find(pre, x), fy = find(pre, y);
	if (fx != fy) {
		pre[fx] = fy;
		total--;
	}
}

void findJoin() {
/*
test data:
5 7
0 2
0 4
1 2
1 4
2 3
3 4
2 4
 */
	int n, m;
	cin >> n >> m;
	int *pre = new int[n];
	int total = n;
	for (int i = 0; i < n; i++)
		pre[i] = i;
	for (int i = 0; i < m; i++) {
		int p, q;
		cin >> p >> q;
		p = find(pre, p);
		q = find(pre, q);
		join(pre, p, q, total);
		cout << endl << "--" << i << "--" << endl;
		for (int i = 0; i < n; i++)
			cout << i << "->" << pre[i] << endl;
	}
	cout << "end:" << total << endl;
} //并查集

void dijkstra(int **map, int dis[], int n) {
	//每次寻找最近的点,贪心算法,不能解决负权边
	int *vis = new int[n];
	for (int i = 1; i < n; i++)
		dis[i] = map[0][i];
	vis[0] = 1;
	for (int i = 1; i <= n; i++) {
		int min = INF, pos;
		for (int j = 0; j <= n; j++)
			if (!vis[j] && dis[j] < min)
				min = dis[j], pos = j;
		vis[pos] = 1;
		for (int j = 1; j < n; j++)
			if (!vis[j] && min + map[pos][j] < dis[j])
				dis[j] = min + map[pos][j];
	}
	return;
}

//  0 1 2 3
//0   2
//1
//2
//3
//
//void dijTest(){
//    int n,k;
//    cin>>n>>k;
//    int **map=new int*[n];
//    for(int i=0;i<n;i++){
//        map[i]=new int[n];
//        for(int j=0;j<n;j++)
//            map[i][j]=INF;
//    }
//    for(int i=0;i<k;k++){
//        int x,y,len;
//        cin>>x>>y>>len;
//        map[x][y]=len;
//        map[y][x]=len;
//    }
//    int *dis=new int[n];
//    dijkstra(map,dis,n);
//    for(int i=0;i<n;i++){
//        cout<<i<<":"<<dis[n];
//    }
//}

void stringReverse() {
	string line;
	size_t position;
	vector<string> list;

	getline(cin, line);
	size_t pos = line.find(" ");
	size_t size = line.size();
	while (pos != string::npos) {
		string substr = line.substr(0, pos);
		list.push_back(substr);
		line = line.substr(pos + 1, size);
		pos = line.find(" ");
	}
	list.push_back(line);
	for (vector<string>::iterator it = list.begin(); it != list.end(); it++) {
		string t = *it;
		reverse(t.begin(), t.end());
		cout << t << " ";
	}
	cout << endl;
}

void bignum(char *num1, char *num2) {
	int length1 = strlen(num1);
	int length2 = strlen(num2);
	int i, l;
	char *res = (char *) malloc(sizeof(char) * (length1 + length2));
	memset(res, 0, sizeof(char) * (length1 + length2));
	for (i = length1 - 1; i >= 0; i--)
		for (l = length2 - 1; l >= 0; l--) {
			res[i + l + 1] += (num1[i] - '0') * (num2[l] - '0');
			res[i + l] += res[i + l + 1] / 10;
			res[i + l + 1] %= 10;
		}
	int count = 0;
	while (res[count] == 0) {
		count++;
	}
	char *ret = (char *) malloc(sizeof(char) * (length1 + length2 + 2));
	memset(ret, 0, sizeof(char) * (length1 + length2 + 2));
	for (l = 0, i = count; i < length1 + length2; l++, i++) {
		ret[l] = res[i] + '0';
	}
	cout << ret;
	free(res);
	free(ret);
}


int mul() {
	char num1[100];
	char num2[100];
	cin >> num1;
	cin >> num2;
	bignum(num1, num2);
	return 0;
}

void lastOneTime() {
	int times[26];
	string temp;

	cin >> temp;
	for (int i = 0; i < 26; i++)
		times[i] = 0;
	for (int i = 0; i < temp.length(); i++) {
		temp[i] = temp[i] - 'A';
		times[temp[i]]++;
	}
	for (int i = 0; i < 26; i++)
		cout << i << ":" << times[i] << endl;
	for (int i = temp.length() - 1; i != 0; i--) {
		if (times[temp[i]] == 1) {
			cout << char(temp[i] + 'A') << endl;
			break;
		}
	}
}

void route() {
	vector<string> stack;
	string inp;
	getline(cin, inp);
	string temp;
	size_t pos = inp.find("/");
	while (pos != string::npos) {
		stack.push_back(inp.substr(0, pos));
		//cout << pos << inp.substr(0, pos) << endl;
		inp = inp.substr(pos + 1, inp.length());
		pos = inp.find("/");
	}
	stack.push_back(inp);
	vector<string> stack2;
	for (vector<string>::iterator it = stack.begin(); it != stack.end(); it++) {
		//cout << *it << endl;
		if ((*it).compare("") == 0) {

		} else if ((*it).compare(".") == 0) {

		} else if ((*it).compare("..") == 0) {
			//cout << "777" << endl;
			stack2.pop_back();
		} else {
			//cout << "888" << endl;
			stack2.push_back(*it);
		}
	}
	//cout << "666" << endl;
	bool flag = true;
	for (vector<string>::iterator it2 = stack2.begin(); it2 != stack2.end(); it2++) {
		cout << "/" << (*it2);
		flag = false;
	}
	if (flag) {
		cout << "/";
	}
	cout << endl;
}

void test666() {
	int count;
	cin >> count;
	string *arr = new string[count];
	int *len = new int[count];
	for (int i = 0; i < count; i++) {
		string temp;
		cin >> temp;
		arr[i] = temp;
		len[i] = 0;
	}
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			if (i != j) {
				int temp = 0;
				for (int k = 0; k < arr[i].length() && k < arr[j].length(); k++) {
					if (arr[i][k] != arr[j][k]) {
						temp = k;
						break;
					}
				}
				if (temp > len[i])
					len[i] = temp;
			}
		}
	}
//    for(int i=0;i<count;i++){
////        cout<<arr[i]<<endl;
//        len[i]=1;
//        bool flag= true;
//        do {
//            for (int j = 0; j < count; j++) {
//                //cout<<len[j]<<endl;
//                if(i==j)
//                    continue;
//                if (arr[i].find(arr[i].substr(0,len[j]))==0){
//                    len[j]++;c
//                    continue;
//                }
//            }
//            flag=false;
//        }
//        while(flag && len[i]<<arr[i].length());
//    }
	for (int i = 0; i < count; i++) {
		//cout<<len[i]<<endl;
		cout << arr[i].substr(0, len[i] + 1) << endl;
	}
}

void test777() {
	int ii, jj, kk;
	cin >> ii >> jj >> kk;
	string *word = new string[kk];
	for (int i = 0; i < kk; i++) {
		cin >> word[i];
	}
	string **arr = new string *[ii];
	for (int i = 0; i < ii; i++) {
		string *arr2 = new string[jj];
		arr[i] = arr2;
		for (int j = 0; j < jj; j++) {
			cin >> word[i][j];
		}
	}
}

int pingzi() {
	int empty;
	int drink;
	int i1;

	while (empty != 0) {
		scanf("%d", &empty);
		drink = 0;
		do {
			i1 = empty / 3;
			empty %= 3;
			//printf("%d %d\n",i1,empty);
			drink += i1;
			empty += i1;
		} while (empty / 3 != 0);
		if (empty == 2)
			drink++;
		printf("%d\n", drink);
	}
}

int pingzi2() {
	int empty;
	int drink;
	int i1;
	int i;

	int arr[100];
	int num = 0;
	do {
		scanf("%d", &arr[num]);
	} while (arr[num++] != 0);
	//while (empty != 0) {
	for (i = 0; i < num - 1; i++) {
		empty = arr[i];
		drink = 0;
		do {
			i1 = empty / 3;
			empty %= 3;
			//printf("%d %d\n",i1,empty);
			drink += i1;
			empty += i1;
		} while (empty / 3 != 0);
		if (empty == 2)
			drink++;
		printf("%d\n", drink);
	}
}

int tongji() {
	int arr[1000] = {0};
	int num;
	int i;
	int input;
	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		scanf("%d", &input);
		arr[input] = 1;
	}
	for (i = 0; i < 1000; i++) {
		if (arr[i] == 1)
			printf("%d\n", i);
	}
}

int beibao() {//背包问题，只有一件
	int n, m; //n颗水晶，m张卡牌
	while (cin >> n >> m) {
		vector<int> a;   //消耗的水晶
		vector<int> b;  //b伤害值
		for (int i = 0; i < m; i++) {
			int tmp;
			cin >> tmp;
			a.push_back(tmp);
			cin >> tmp;
			b.push_back(tmp);
		} //输入数据

		vector<int> dp(n + 1, 0);
		for (int i = 0; i < m; i++) {
			for (int j = n; j >= a[i]; j--) {
				dp[j] = max(dp[j], dp[j - a[i]] + b[i]);
			}
		}
		cout << dp[n] << endl;
	} //while
	return 0;
}

int wanquanbeibao() {
	int n, m; //n件奖品，m张奖券
	while (cin >> n >> m) {
		vector<int> need;
		vector<int> value;
		int tmp, i, j;
		for (i = 0; i < n; i++) {
			cin >> tmp;
			need.push_back(tmp);
			cin >> tmp;
			value.push_back(tmp);
		}//for
		//输入奖品和奖券数据

		vector<int> dp(m + 1, 0);
		for (i = 0; i < n; i++) {
			for (j = need[i]; j <= m; j++) {
				dp[j] = max(dp[j], dp[j - need[i]] + value[i]);
			}
		}//for

		cout << dp[m] << endl;

	}//while

	return 0;

}

#define MAX 100
stack<int> BFS_Stack;
queue<int> DFS_Queue;
int G[MAX][MAX];
int visit[MAX];
int V, E;

void BFS(int s) {
	cout << "BFS" << endl;
	int i, j, node;
	memset(visit, 0, sizeof(visit));
	BFS_Stack.push(s);
	while (!BFS_Stack.empty()) {
		node = BFS_Stack.top();
		BFS_Stack.pop();
		if (visit[node])continue;
		visit[node] = 1;
		cout << node << "-->";
		for (i = 0; i < V; i++) {
			if (G[node][i])BFS_Stack.push(i);
		}
	}
	cout << "NULL" << endl;
}

void DFS(int s) {
	cout << "DFS" << endl;
	int i, j, node;
	memset(visit, 0, sizeof(visit));
	DFS_Queue.push(s);
	while (!DFS_Queue.empty()) {
		node = DFS_Queue.front();
		DFS_Queue.pop();
		if (visit[node])continue;
		visit[node] = 1;
		cout << node << "-->";
		for (i = 0; i < V; i++)
			if (G[i][node])DFS_Queue.push(i);
		for (j = 0; j < V; j++)
			if (G[node][j])DFS_Queue.push(j);
	}
	cout << "NULL" << endl;
}

int BFSDFS() {
	memset(visit, 0, sizeof(visit));
	memset(G, 0, sizeof(G));
	G[0][1] = 1;
	G[1][2] = 1;
	G[1][3] = 1;
	G[3][5] = 1;
	G[3][4] = 1;
	G[3][7] = 1;
	G[4][6] = 1;
	G[7][4] = 1;
	V = 8;
	BFS(0);
	DFS(0);
	cout << endl;
	return 0;
}

int compare(string str1, string str2) //相等返回0，大于返回1，小于返回-1
{
	if (str1.size() > str2.size())
		return 1;
	else if (str1.size() < str2.size())
		return -1;
	else
		return str1.compare(str2);     //若长度相等，则从头到尾按位比较
}
string ADD_INT(string str1, string str2);

string SUB_INT(string str1, string str2)  //高精度减法
{
	int sign = 1; //sign为符号位
	string str;
	int i, j;
	if (str2[0] == '-') {
		str = ADD_INT(str1, str2.erase(0, 1));
	} else {
		int res = compare(str1, str2);
		if (res == 0)return "0";
		if (res < 0) {
			sign = -1;
			string temp = str1;
			str1 = str2;
			str2 = temp;
		}
		string::size_type tempint;
		tempint = str1.size() - str2.size();
		for (i = str2.size() - 1; i >= 0; i--) {
			if (str1[i + tempint] < str2[i])          //借位
			{
				j = 1;
				while (1) {
					if (str1[tempint - j + i] == '0') {
						str1[i + tempint - j] = '9';
						j++;
					} else {
						str1[i + tempint - j] = char(int(str1[i + tempint - j]) - 1);
						break;
					}
				}
				str = char(str1[i + tempint] - str2[i] + ':') + str;
			} else {
				str = char(str1[i + tempint] - str2[i] + '0') + str;
			}
		}
		for (i = tempint - 1; i >= 0; i--)
			str = str1[i] + str;
	}
//去出结果中多余的前导0
	str.erase(0, str.find_first_not_of('0'));
	if (str.empty())str = "0";
	if ((sign == -1) && (str[0] != '0'))str = "-" + str;
	return str;
}

string ADD_INT(string str1, string str2)         //高精度加法
{
	int sign = 1;//sign为符号为
	string str;
	if (str1[0] == '-') {
		if (str2[0] == '-')       //负负
		{
			sign = -1;
			str = ADD_INT(str1.erase(0, 1), str2.erase(0, 1));//erase(first,last);删除从first到last之间的字符
		} else             //负正
		{
			str = SUB_INT(str2, str1.erase(0, 1));
		}
	} else {
		if (str2[0] == '-')        //正负
		{
			str = SUB_INT(str1, str2.erase(0, 1));
		} else                    //正正，把两个整数对齐，短整数前面加0补齐
		{
			string::size_type L1, L2;  //string::size_type抽象意义是尺寸单位类型
			int i;
			L1 = str1.size();
			L2 = str2.size();
			if (L1 < L2) {
				for (i = 0; i < L2 - L1; i++)
					str1 = "0" + str1;
			} else {
				for (i = 0; i < L1 - L2; i++)
					str2 = "0" + str2;
			}
			int int1 = 0, int2 = 0; //int2记录进位
			for (i = str1.size() - 1; i >= 0; i--) {
				int1 = (int(str1[i]) - '0' + int(str2[i]) - '0' + int2) % 10;
				int2 = (int(str1[i]) - '0' + int(str2[i]) - '0' + int2) / 10;
				str = char(int1 + '0') + str;
			}
			if (int2 != 0)str = char(int2 + '0') + str;
		}

	}
//运算符处理符号
	if ((sign == -1) && (str[0] != '0'))str = "-" + str;
	return str;
}

string MUL_INT(string str1, string str2)     //高精度乘法
{
	int sign = 1;
	string str = "0";        //记录当前值
	if (str1[0] == '-')
	{
		sign *= -1;
		str1 = str1.erase(0, 1);
	}
	if (str2[0] == '-')
	{
		sign *= -1;
		str2 = str2.erase(0, 1);
	}
	int i, j;
	string::size_type L1, L2;
	L1 = str1.size();
	L2 = str2.size();
	for (i = L2 - 1; i >= 0; i--)              //模拟手工乘法竖式
	{
		string tempstr;
		int int1 = 0, int2 = 0, int3 = int(str2[i]) - '0';
		if (int3 != 0)
		{
			for (j = 1; j <= (int)(L2 - 1 - i); j++)
				tempstr = "0" + tempstr;
			for (j = L1 - 1; j >= 0; j--)
			{
				int1 = (int3*(int(str1[j]) - '0') + int2) % 10;
				int2 = (int3*(int(str1[j]) - '0') + int2) / 10;
				tempstr = char(int1 + '0') + tempstr;
			}
			if (int2 != 0)tempstr = char(int2 + '0') + tempstr;
		}
		str = ADD_INT(str, tempstr);
	}
	//去除结果中的前导0
	str.erase(0, str.find_first_not_of("0"));
	if (str.empty())str = "0";
	if ((sign == -1) && (str[0] != '0'))str = "-" + str;
	return str;
}

string DIVIDE_INT(string str1, string str2, int flag) //高精度除法，flag==1,返回商;flag==0时，返回余数
{
	string quotient, residue;  //定义商和余数
	int sign1 = 1, sign2 = 1;
	if (str2 == "0")   //判断除数是否为0
	{
		quotient = "ERROR!";
		residue = "ERROR!";
		if (flag == 1)return quotient;
		else return residue;
	}
	if (str1 == "0")     //判断被除数是否为0
	{
		quotient = "0";
		residue = "0";
	}
	if (str1[0] == '-')
	{
		str1 = str1.erase(0, 1);
		sign1 *= -1;
		sign2 = -1;
	}
	if (str2[0] == '-')
	{
		str2 = str2.erase(0, 1);
		sign1 *= -1;
	}
	int res = compare(str1, str2);
	if (res < 0)
	{
		quotient = "0";
		residue = str1;
	}
	else if (res == 0)
	{
		quotient = "1";
		residue = "0";
	}
	else
	{
		string::size_type L1, L2;
		L1 = str1.size();
		L2 = str2.size();
		string tempstr;
		tempstr.append(str1, 0, L2 - 1); //将str1中为值0到L2-1的字符串追加到tempstr
		for (int i = L2 - 1; i < L1; i++)  //模拟手工除法竖式
		{
			tempstr = tempstr + str1[i];
			tempstr.erase(0, tempstr.find_first_not_of('0')); //在字符串中查找第一个与'0'不匹配的字符，返回它的位置
			if (tempstr.empty())tempstr = "0";  //q.empty()，当队列空时，返回true
			for (char ch = '9'; ch >= '0'; ch--) //试商
			{
				string str;
				str = str + ch;
				if (compare(MUL_INT(str2, str), tempstr) <= 0)
				{
					quotient = quotient + ch;
					tempstr = SUB_INT(tempstr, MUL_INT(str2, str));
					break;
				}
			}
		}
		residue = tempstr;
	}
	//去除结果中的前导0
	quotient.erase(0, quotient.find_first_not_of("0"));
	if (quotient.empty())quotient = "0";
	if ((sign1 == -1) && (quotient[0] != '0'))quotient = "-" + quotient;
	if ((sign2 == -1) && (residue[0] != '0'))residue = "-" + residue;
	if (flag == 1)return quotient;
	else
		return residue;
}

string DIV_INT(string str1, string str2) //高精度除法，返回商
{
	return DIVIDE_INT(str1, str2, 1);
}
string MOD_INT(string str1, string str2)  //高精度除法，返回余数
{
	return DIVIDE_INT(str1, str2, 0);

}
void large_opr(string m_str1, char m_ch, string m_str2)//两数的运算
{

	int m_ilocation1;
	int m_ilocation2;
	string m_res;
	int m_istr;
	if (m_str1.find_first_of(".") == -1)
		m_ilocation1 = 0;
	else
		m_ilocation1 = m_str1.length() - m_str1.find_first_of(".") - 1;
	if (m_str2.find_first_of(".") == -1)
		m_ilocation2 = 0;
	else
		m_ilocation2 = m_str2.length() - m_str2.find_first_of(".") - 1;
	if (m_ilocation1 == 0 && m_ilocation2 == 0) {
		switch (m_ch) {
			case '+':
				m_res = ADD_INT(m_str1, m_str2);
				break;
			case '-':
				m_res = SUB_INT(m_str1, m_str2);
				break;
			case '*':
				m_res = MUL_INT(m_str1, m_str2);
				break;
			case '/':
				m_res = DIV_INT(m_str1, m_str2);
				break;
			case '%':
				m_res = MOD_INT(m_str1, m_str2);
				break;
			default:
				break;
		}
	} else {
		int m_ilocat = m_ilocation1 - m_ilocation2;
		int m_ilocation3;
		if (m_ilocation1 != 0)
			m_str1.erase(m_str1.find_first_of("."), m_str1.find_first_not_of(".") + 1);
		if (m_ilocation2 != 0)
			m_str2.erase(m_str2.find_first_of("."), m_str2.find_first_not_of(".") + 1);

		switch (m_ch) {
			case '+':
				if (m_ilocat >= 0) {
					for (int i = 0; i < m_ilocat; i++)
						m_str2 = m_str2 + '0';
					m_ilocation3 = m_ilocation1;
				} else {
					for (int i = 0; i < -m_ilocat; i++)
						m_str1 = m_str1 + '0';
					m_ilocation3 = m_ilocation2;
				}
				m_res = ADD_INT(m_str1, m_str2);
				m_istr = m_res.length();
				for (int i = 0; i < m_ilocation3; i++)
					m_istr = m_istr - 1;
				m_res.insert(m_istr, ".");
				break;
			case '-':
				if (m_ilocat >= 0) {
					for (int i = 0; i < m_ilocat; i++)
						m_str2 = m_str2 + '0';
					m_ilocation3 = m_ilocation1;
				} else {
					for (int i = 0; i < -m_ilocat; i++)
						m_str1 = m_str1 + '0';
					m_ilocation3 = m_ilocation2;
				}
				m_res = SUB_INT(m_str1, m_str2);
				m_istr = m_res.length();
				for (int i = 0; i < m_ilocation3; i++)
					m_istr = m_istr - 1;
				m_res.insert(m_istr, ".");
				break;
			case '*':
				m_ilocation3 = m_ilocation1 + m_ilocation2;
				m_res = MUL_INT(m_str1, m_str2);
				m_istr = m_res.length();
				for (int i = 0; i < m_ilocation3; i++)
					m_istr = m_istr - 1;
				m_res.insert(m_istr, ".");
				break;
			case '/':
				if (m_ilocat >= 0) {
					for (int i = 0; i < m_ilocat; i++)
						m_str2 = m_str2 + '0';
				} else {
					for (int i = 0; i < -m_ilocat; i++)
						m_str1 = m_str1 + '0';
				}
				m_res = DIV_INT(m_str1, m_str2);
				break;
			case '%':
				m_res = MOD_INT(m_str1, m_str2);
				break;
			default:
				break;
		}

	}
	cout << endl;
	cout << m_res << endl;
}

int bignum()
{
	char ch;
	string m_snum1, m_snum2;
	while (cin>>m_snum1>>ch>>m_snum2)
	{
		large_opr(m_snum1, ch, m_snum2);
	}
	return 0;
}

int main() {
//	mapTest();
//	sortTest();
//	vectorTest();
//	stackTest();
//	queueTest();
//	dequeTest();
//	stringTest();
//	stringOper();
//	test();
//	mult();
//	stringLen2();
//	MapSort();
//	arangment();
//	initComb(5,3);
//	combine2();
//	initPrem();
//	findJoin();
//	dijTest();
//	stringReverse();
//	mul();
//	lastOneTime();
//	route();
//	test666();
//	test777();
//	pingzi2();
//	tongji();
//	beibao();
//	wanquanbeibao();
//	BFSDFS();
//	bignum();
	return 0;
}