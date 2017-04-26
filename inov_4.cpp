#include <bits/stdc++.h>

#define dbug(x) cout << '>' << #x << ':' << x << endl;
#define mems(x) memset(x, -1, sizeof(x))
#define eef else if
#define loop(a,x) for(int i=(a);i<(x);i++)
using namespace std;

//  vector <int,string> v;

// string arr[] = {"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
int main()
{
    ios::sync_with_stdio(0);
    string str;
    while(getline(cin,str)){
    	getchar();
        int len = str.length();
        int s = sqrt(len);
        int n = 0;
        	for(int i = n; i < len;i++){
        		cout << str[i];

        		if((i+1)%s==0) 
        			cout << endl;	
        	}
    }
    return 0;
}
