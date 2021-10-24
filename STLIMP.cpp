
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main( ) {
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"the min element is"<<"->";
    int min = *min_element(v.begin(),v.end());
    cout<<min<<endl;

    cout<<"the max element is"<<"->";
    int max = *max_element(v.begin(),v.end());
    cout<<max<<endl;

    cout<<"the sum of element in array is"<<"->";
    int sum = accumulate(v.begin(),v.end(),0); 
    cout<<sum<<endl;

    //to count the particular element in array;
    cout<<"count of given element is"<<"->";
    int ct = count(v.begin(),v.end(),6);
    cout<<ct<<endl;

    // find the particular element in array
    auto it  = find(v.begin(),v.end(),2);
    if(it != v.end()){
        cout<<*it<<endl; //it will output the no if no is present
    }
    else{
        cout<<"element is not found"<<endl;
    }

    reverse(v.begin(),v.end());
    cout<<"after reversing array using reverse function"<<"->";
    for(auto val:v){
        cout<<val<<" ";
    }
    cout<<endl;

    string s = "Nikhil";
    reverse(s.begin(),s.end());
    cout<<s<<endl;



    return 0;
}
