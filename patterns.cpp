#include<bits/stdc++.h>
using namespace std;
void pattern1(int n) {
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void pattern2(int n) {
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void pattern3(int n) {
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int n) {
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void pattern5(int n) {
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n-i+1;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern5_altcode(int n) {
    for (int i=1;i<=n;i++) {
        for (int j=n;j>i;j--) {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern6(int n) {
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n-i+1;j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern6_1(int n) {
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n-i+1;j++) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void pattern6_2(int n) {
    for (int i=n;i>0;i--) {
        for (int j=i;j>0;j--) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void pattern7(int n) {
    for (int i=0;i<n;i++) {
        //space
        for (int j=0;j<n-i-1;j++) {
            cout<<" ";
        }
        //star
        for (int j=0;j<2*i+1;j++) {
            cout<<"*";
        }
        //space
        for (int j=0;j<n-i-1;j++) {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern8(int n) {
    for (int i=0;i<n;i++) {
        //space
        for (int j=0;j<i;j++) {
            cout<<" ";
        }
        //star
        for (int j=0;j<(2*n)-(2*i+1);j++) {
            cout<<"*";
        }
        //space
        for (int j=0;j<i;j++) {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern9(int n) {
    for (int i=0;i<n;i++) {
        //space
        for (int j=0;j<n-i-1;j++) {
            cout<<" ";
        }
        //star
        for (int j=0;j<2*i+1;j++) {
            cout<<"*";
        }
        //space
        for (int j=0;j<n-i-1;j++) {
            cout<<" ";
        }
        cout<<endl;
    }
    for (int i=0;i<n;i++) {
        //space
        for (int j=0;j<i;j++) {
            cout<<" ";
        }
        //star
        for (int j=0;j<(2*n)-(2*i+1);j++) {
            cout<<"*";
        }
        //space
        for (int j=0;j<i;j++) {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern10(int n) {
    for (int i=1;i<=(2*n)-1;i++) {
        int stars=i;
        if (i>n) {
            stars=2*n-i;
        }
        for (int j=1;j<=stars;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern11(int n) {
    int start=1;
    for (int i=1;i<=n;i++) {
        if (i%2==0) {
            start=0;
        }
        else {
            start=1;
        }
        for (int j=1;j<=i;j++) {
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
    }
}
void pattern12(int n) {
    int space=2*n-2;
    for (int i=1;i<=n;i++) {
        //numbers
        for (int j=1;j<=i;j++) {
            cout<<j<<" ";
        }
        //space
        for (int j=1;j<=space;j++) {
            cout<<" ";
        }
        //numbers
        for (int j=i;j>=1;j--) {
            cout<<j<<" ";
        }
        space-=2;
        cout<<endl;
    }

}
void pattern13(int n) {
    int num=1;
    //remember it is simple that we want to increament the number that we are printing every time
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;
    }
}
void pattern14(int n) {
    for (int i=0;i<n;i++) {
        for (char j='A';j<='A'+i;j++) {
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern15(int n) {
    for (int i=0;i<n;i++) {
        for (char j='A';j<='A'+(n-i-1);j++) {
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern16(int n) {
    char ch='A';
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            cout<<ch;
        }
        ch=ch+1;
        cout<<endl;
    }
}
void pattern17(int n) {
    for (int i=0;i<n;i++) {
        //space
        for (int j=0;j<n-i-1;j++) {
            cout<<" ";
        }
        //characters
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for (int j=1;j<=2*i+1;j++) {
            cout<<ch;
            if (j<=breakpoint) {
                ch++;
            }
            else {
                ch--;
            }
        }
        //space
        for (int j=0;j<n-i-1;j++) {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern17_1(int n) {
    for (int i=0;i<n;i++) {
        //space
        for (int j=0;j<n-i-1;j++) {
            cout<<" ";
        }
        //characters
        char ch='A';
        for (int j=1;j<=2*i+1;j++) {
            cout<<ch;
            ch++;
        }
        //space
        for (int j=0;j<n-i-1;j++) {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern18(int n) {
    for (int i=0;i<n;i++) {
        char ch='E'-i;
        for (char j=ch;j<='E';j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern19(int n) {
    int insp=0;
    for (int i=0;i<n;i++) {
        //stars
        for (int j=0;j<n-i;j++) {
            cout<<"*";
        }
        //space
        for (int j=0;j<insp;j++)
            cout<<" ";
        //stars
        for (int j=0;j<n-i;j++) {
            cout<<"*";
        }
        cout<<endl;
        insp=insp+2;
    }
    int sp=2*n-2;
    for (int i=1;i<=n;i++) {
        //stars
        for (int j=1;j<=i;j++) {
            cout<<"*";
        }
        //space
        for (int j=1;j<=sp;j++) {
            cout<<" ";
        }
        //stars
        for (int j=1;j<=i;j++) {
            cout<<"*";
        }
        cout<<endl;
        sp=sp-2;
    }
}
void pattern20(int n) {
    int spaces = (2*n)-2;
    for(int i=1;i<=2*n-1;i++){
        // stars
        int stars = i;
        if(i > n) stars = 2*n-i ;

        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        // spaces
        for(int j=1;j<=spaces;j++){
            cout << " ";
        }
        //stars
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        cout << endl;
        if(i<n) spaces-=2;
        else spaces +=2;
    }
}
void pattern21(int n) {
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (i==0||j==0||i==n-1||j==n-1) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void pattern22(int n) {
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n-i;j++) {
            cout<<" ";
        }
        char ch='A';
        for (int j=1;j<=i;j++) {
            cout<<ch<<" ";
            ch+=1;
        }

        cout<<endl;
    }
}
void pattern23(int n) {
    int s=1;
    for (int i=1;i<=2*n-1;i++) {
        if (i<=2*n/2) {
            for (int j=1;j<=n-i;j++) {
                cout<<" ";
            }
            for (int j=1;j<=i;j++) {
                cout<<j<<" ";
            }
            cout<<endl;
        }
        else {
            for (int j=1;j<=s;j++) {
                cout<<" ";
            }
            for (int j=1;j<=n-s;j++) {
                cout<<j<<" ";
            }
            cout<<endl;
            s+=1;
        }
    }
}
int main() {
    int n;
    cin>>n;
    pattern23(n);
    return 0;
}
