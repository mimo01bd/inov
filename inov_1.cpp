#include <bits/stdc++.h>

#define dbug(x) cout << '>' << #x << ':' << x << endl;
#define mems(x) memset(x, -1, sizeof(x))
#define eef else if
#define loop(a,x) for(int i=(a);i<(x);i++)
using namespace std;

//  vector <int,string> v;

string arr[] = {"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
int main()
{
    ios::sync_with_stdio(0);
    string str;
    while(cin >> str){
        // dbug(str);
        int m =(int)(str[5]-'0')+(int)(str[4]-'0')*10;
        int ind = m-1;
        cout << arr[m-1] << str[2] << str[3] << endl;
        
    }
    return 0;
}
