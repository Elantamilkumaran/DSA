#include<bits/stdc++.h>
using namespace std;
void p1(int i,int n) {
    if (i>n) {
        return;
    }
    cout<<"Elan"<<endl;
    p1(i+1,n);
}
void p2(int i,int n) {
    if (i>n) {
        return;
    }
    cout<<i<<endl;
    p2(i+1,n);
}
void p3(int i,int n) {
    if (i<1) {
        return;
    }
    cout<<i<<endl;
    p3(i-1,n);
}
void p4(int i,int n) {
    //print 1 to n using bactracking
    if (i<1) {
        return;
    }
    p4(i-1,n);
    cout<<i<<endl;
}
void p5(int i,int n) {
    //print n to 1 using bactracking
    if (i>n) {
        return;
    }
    p5(i+1,n);
    cout<<i<<endl;
}
//parameterised recurion
//sum of n natural numbers
void prec(int i,int sum) {
    if (i<0) {
        cout<<sum<<endl;
        return;
    }
    prec(i-1,sum+i);
}
//funtionalised recursion
int funrec(int n) {
    if (n==0) {
        return 0;
    }
    return n+funrec(n-1);
}
//reverse an array using two pointers
void tworev(int l,int a[],int r) {
    if (l>=r) {
        return;
    }
    swap(a[l],a[r]);
    tworev(l+1,a,r-1);
}
//reverse an array without using two pointers
void wrev(int a[],int i,int n) {
    if (i>=(n/2)) {
        return;
    }
    swap(a[i],a[n-i-1]);
    wrev(a,i+1,n);
}
//rev a string using recursion
bool srev(string &s,int n,int i) {
    if (i>=n/2) {
        return true;
    }
    if (s[i]!=s[n-i-1]) {
        return false;
    }
    return srev(s,n,i+1);
}
//multiple recursion calls
int fibo(int n) {
    if (n<=1) return n;
    return fibo(n-1)+fibo(n-2);
}
int  main() {
    int n;
    //cout<<"enter the size of array";
    //cin>>n;
    //int a[n]={};
    //for (int i=0;i<n;i++) {
    //    cout<<"enter the element:";
    //    cin>>a[i];
    //}
    //wrev(a,0,n);
    //for (int i=0;i<n;i++) {
    //    cout<<a[i]<<" ";
    //}
    //palindrom
    //string s="madam";
    //n=s.size();
    //cout<<srev(s,n,0);
    cin>>n;
    cout<<fibo(n);
    return 0;
}