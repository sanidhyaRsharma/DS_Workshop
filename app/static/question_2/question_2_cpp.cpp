#include <bits/stdc++.h>
using namespace std;
int maxsum(vector<int> array){
    int n=array.size();
    int msf=INT_MIN,max1=0;
    for(int i=0;i<n;i++){
        
        max1+=array[i];
        //cout<<max1<<endl;
        if(max1>msf)msf=max1;
        if(max1<=0)max1=0;
    }
    return msf;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<int>array(n);
	    for(int i=0;i<n;i++){
	        cin>>array[i];
	    }
	    cout<<maxsum(array)<<endl;
	}
	return 0;
}