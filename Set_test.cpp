#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

template<typename T>
T set_difference(T set1,T set2){
    T store = set1;
    for(const auto& i : set1)
        if(set2.count(i))
            store.erase(i);
    return store;
}
template<typename T>
T set_union(T set1,T set2){
    T store = set1;
    for(const auto& i : set1)
        if(!set2.count(i))
            store.erase(i);
    return store;
}
template<typename T>
T set_intersection(T set1,T set2){
    T store = set1;
    for(const auto& i : set2)
        if(!store.count(i))
            store.insert(i);
    return store;
}
template<typename T>
void print_array(T arr){
    for(const auto& i: arr)
        cout << i << " ";
    cout << endl;
}
int main(){
    unordered_set<string> mySet1 = {"bird", "dog", "cat"};
    cout << "The set mySet1 is ";
    print_array<unordered_set<string>>(mySet1);
    unordered_set<string> mySet2 = {"rat", "dog", "ant"};
    cout << "The set mySet2 is ";
    print_array<unordered_set<string>>(mySet2);
    cout << "Union is ";
    print_array<unordered_set<string>>(set_union<unordered_set<string>>(mySet1,mySet2));
    cout << "Intersection mySet1 is ";
    print_array<unordered_set<string>>(set_intersection<unordered_set<string>>(mySet1,mySet2));
    cout << "Difference mySet1 is ";
    print_array<unordered_set<string>>(set_difference<unordered_set<string>>(mySet1,mySet2));
}
