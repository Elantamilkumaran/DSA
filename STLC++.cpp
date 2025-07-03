//pairs
#include<bits/stdc++.h>
using namespace std;
//pairs
void pairs() {
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,int> a[]={{1,2},{2,3}};
    cout<<a[0].second;

}
//vectors
void vectors() {
    //vector<int>v;
    //increasing the size of vectors
    //v.push_back(20);
    //v.emplace_back(10);
    //cout<<v[1];
    //Accesing the vectors
    //vector<int>v1={1,2,3,4,5};
    //vector<int>::iterator it =v1.begin();
    //vector<int>::iterator it =v1.back();
    //vector<int>::iterator it=v1.end();
    //in this iterator will be outside the last value
    //vector<int>::iterator it=v1.rend();
    //starts from the reverse of end before the value
    //vector<int>::iterator it=v1.rbegin();
    //start from the reverse of first outside the last value
    //for (vector<int>::iterator it=v1.begin();it!=v1.end();it++)
    //{cout<<*(it)<<endl;}
    //vector<int>v1={1,2,3,4,5};
    //cout<<v1.back()<<endl;
    //for (auto it=v1.begin();it!=v1.end();it++)
    //{cout<<*(it)<<endl;}
    //access using for each
    //for (auto it:v1) {
    //    cout<<it<<endl;
    //}
    //to erase elements from vector
    vector<int>v={1,2,3,4,5};
    //v.erase(v.begin()+1);
    //for(auto it=v.begin();it!=v.end();it++)
    //{cout<<*(it)<<endl;}
    //v.erase(v.begin()+1,v.begin()+4);
    //v.erase(start,end)
    //for(auto it=v.begin();it!=v.end();it++)
    //{cout<<*(it)<<endl;}
    //inserting elements to the vectors
    //v.insert(v.begin()+1,300);
    //v.insert(v.begin()+2,2,50);
    //v.insert(position,element)
    //cout<<v.size()<<endl;
    //for(auto it=v.begin();it!=v.end();it++)
    //    {cout<<*(it)<<endl;}
    //v.pop_back();
    //removes the last element
    //vector<int>vs1={1,2};
    //vector<int>vs2={2,3};
    //vs1.swap(vs2);
    //swaps both the vectors
    //v.clear();
    //clears the vector
    //v.empty();
    //returns true if the vector is empty or else returns false
}
void lists() {
    //all the functions are same as vectors
    list<int>l={1,2,3,4,5};
    l.push_front(3);
    l.push_front(4);
    l.emplace_front(5);
    cout<<l.front()<<" "<<l.back()<<endl;
    //note: in vectors we have to use insert()
    for(auto it=l.begin();it!=l.end();it++)
    {cout<<*(it)<<endl;}
}
void Deque() {
    //all the functions are similar to the lists and vectors
}
void stacks() {
    //algorithm is last in first out[LIFO]
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.emplace(5);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.empty();
    //returns 0 or 1
}
void queues() {
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);
    cout<<q.front()<<endl;
    //there is no top() in queues
    q.pop();
    cout<<q.front()+20<<" "<<q.back()+20<<endl;
}
void priority_queues() {
    priority_queue<int>pq;
    //maximum heap
    //larhest value stays in the top
    cout<<"Maximum heap"<<endl;
    pq.push(30);
    pq.push(20);
    pq.push(50);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    //--------------------------------------------------------
    priority_queue<int,vector<int>,greater<int>>pql;
    cout<<"Minimummum heap"<<endl;
    //lowest value stays at the top
    pql.push(30);
    pql.push(20);
    pql.push(50);
    cout<<pql.top()<<endl;
    pql.pop();
    cout<<pql.top()<<endl;
    //time complexity
    //push-pop-log(n)
    //top-o(1)
}
void sets() {
    //set-stores in the container based on the unique and sorted manner
    set<int>st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.emplace(5);
    auto it=st.find(3);
    //it is an iterator here points to the reference
    cout<<*(it)<<endl;
    st.erase(5);
    //we can also give erase as st.erase[start,end)
    st.count(3);
    //returns 1 or 0
    st.empty();
    //returns 0 or 1
}
void multisets() {
    //multi set stores the element by obeying the sorted manner only but not on the unique manner
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.emplace(2);
    cout<<ms.count(1)<<endl;
    //this time it counts the number of 1
    ms.erase(1);
    //it erases the all the 1's in the multiset
    //to delete the occurence of only one 1
    //we can use iterator
    multiset<int>mst={1,1,1,2,2};
    mst.erase(mst.find(1));
    cout<<mst.count(1)<<endl;
    //time complexcity is log(n)
}
void unorderdsets() {
    //unordered set stores the elements in the random manner but the elements are unique
    unordered_set<int>us;
    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.insert(4);
    us.emplace(5);
    us.erase(5);
    us.count(3);
    //time complexcity is O(1)
}
void maps() {
    //map stores the element in key value pairs
    map<int,int>m;
    m[1]=10;
    m[2]=20;
    m[3]=30;
    m[4]=40;
    m.emplace(5,50);
    cout<<m[1]<<endl;
    map<int,pair<int,int>>m1;
    m1[1]={10,20};
    m1[2]={20,30};
    map<pair<int,int>,int>m2;
    m2[{10,20}]=10;
    m2[{20,30}]=20;
    cout<<m2[{10,20}]<<endl;
    for (auto it:m2) {
        cout<<it.second<<endl;
    }
    //auto it=m.find(5)
    //iterator will point the next value of end
    //time complexcity is log(n)
}
void multimaps() {
    //in multi maps the duplicate keys can be stored but in a sorted order
    // all the functions are same as maps
    //time complexcity is of O(1)
}
void unordered_maps() {
    // in unorderd maps unique keys can only be stored but not in the sorted ordered
    // all the functions are same as the maps
    //time complexcity is of O(1)
}
void implogics() {
    //to sort an array a[]={1,5,3,2}
    int a[]={1,5,3,2};
    sort(a,a+4);
    //to sort a vector
    vector<int>v={1,5,3,2};
    sort(v.begin(),v.end());
    //to sort a list
    list<int>l={1,5,3,2};
    sort(l.begin(),l.end());
    //to sort a deque
    deque<int>d={1,5,3,2};
    sort(d.begin(),d.end());
    //to sort in between elements
    sort(a+2,a+4);
    //one more way
    sort(a,a+n,greater<int>);
    //n=last element or till which element
    //greater<int>=comperator ie.to sort in a decending order
    //one more logic
    pair<int,int>a[]={{1,2},{2,1},{4,1}};
    //sort it according to second element
    //if second element is same,then sort
    //it according to first element but in descending
    sort(a,a+3,comp);
    //void comp(pair<int,int>p1,pair<int,int>p2)
      //{if(p1.second<p2.second) return true;
      //if(p1.second>p2.second) return false;
      //they are same
      //if(p1.first>p2.first) return true;
      //return false;
    //to find the permutations
    string s="123";
    sort(s.begin(),s.end());
    do {
        cout<<s<<endl;
    }while (next_permutation(s.begin(),s.end()));
    int maxi=*max_element(a,a+n);
}
int main() {
    maps();
    return 0;
}
