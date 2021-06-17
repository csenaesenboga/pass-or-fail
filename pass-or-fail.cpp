#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main(){
    list <int> b;
    int a; 
    int percent;
    cout<<"please enter the number of exams+assignments that will influence your final grade"<<endl;
    cin>>a;
    cout<<"please enter their percentages on the final grade respectively"<<endl;
    for(int i=1;i<=a;i++) {
            cout<<"percentage "<<i<<":"<<endl;
            cin>>percent;
            b.push_back(percent);
    }
    showlist(b);
}