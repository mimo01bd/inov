#include <bits/stdc++.h>

#define dbug(x) cout << '>' << #x << ':' << x << endl;
#define mems(x) memset(x, -1, sizeof(x))
#define eef else if
#define loop(a,x) for(int i=(a);i<(x);i++)
using namespace std;

vector <int> v;
int main()
{
    ios::sync_with_stdio(0);
    int i,len ;
    while(cin >>i ){
    	len =0;
    	v.push_back(i);

    	sort(v.begin(),v.end());
    	 len = v.size();
    	
    }
    loop(0,len){
    		cout << v[i] << endl;
    	}
    
    return 0;
}
