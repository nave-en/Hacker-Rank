#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int n,sums;
    cin>>n;
    int arr[1000],sum[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sums+=arr[i];
        sum[i]=sums;
    }
    int d,m;
    cin>>d>>m;
    int temp=0;
    int count=0;
    int itr=0;
    for(int i=0;i<n;i++){
        temp+=arr[i];
        if(i >= m-1 && n-i-1 > m-1){
            if(temp == d)
                count++;
		cout<<temp<<" ";
            temp-=sum[itr++];
		cout<<temp<<endl;
        }
    }
    cout<<count<<endl;
    return 0;
}
