#include "bits/stdc++.h"

using namespace std;

int main(){
    int a[] = {4,5,3,8,9,1,2,7,6};

    int n = sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++){
        for(int j=0;j<n-2;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
