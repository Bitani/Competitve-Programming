#include <bits/stdc++.h>

using namespace std;

int main() {
	int swap=0;
    int lengthofarray;
    cin >> lengthofarray;
    
    vector<int> a(lengthofarray);
    
    for(int i = 0; i < lengthofarray; i++){
        cin >> a[i];
    }
   
    for(int i=0;i<lengthofarray;i++){
        for(int j=0;j<lengthofarray-i-1;j++){
            if(a[j]>a[j+1]){
                int pos = a[j];
                a[j]=a[j+1];
                a[j+1]=pos;
                swap++;
            }
        }
    }
    cout<<"Array is sorted in "<<swap<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[lengthofarray-1]<<endl;
    return 0;
}
