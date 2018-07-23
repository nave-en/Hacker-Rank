#include <bits/stdc++.h>
using namespace std;
int main() {
    
int n, k;
int a[10000];
  
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    
    int res = 0;
    for(int i = 0; i < n; i++) 
        for(int j = i + 1; j < n; j++) 
            if((a[i] + a[j]) % k == 0) res++;
    cout << res << endl;
    return 0;
}
