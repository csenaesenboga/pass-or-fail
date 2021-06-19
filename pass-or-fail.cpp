#include <iostream>
#include <list>
#include <iterator>
#include <vector>
#include <numeric>
using namespace std;

void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main(){
    vector <int> b;
    vector <int> c;
    vector <int> d;
    int a; 
    int percent;
    int score;
    cout<<"please enter the number of exams+assignments that will influence your final grade"<<endl;
    cin>>a;
    cout<<"please enter their percentages on the final grade respectively"<<endl;
    for(int i=1;i<=a;i++) {
            cout<<"percentage "<<i<<":"<<endl;
            cin>>percent;
            b.push_back(percent);
    }
    cout<<"please enter the scores respectively"<<endl;
    for(int i=1;i<=a;i++) {
            cout<<"score "<<i<<":"<<endl;
            cin>>score;
            c.push_back(score);
    }
    for(int i=0;i<a;i++){
        d.push_back((b[i]*c[i])/100);
    }
    cout<<"percentages"<<endl;
    for (int i = 0; i < b.size(); i++) {
            cout << b[i] << " "<<endl;
        }
    cout<<"scores"<<endl;
    for (int i = 0; i < c.size(); i++) {
            cout << c[i] << " "<<endl;
        }
    cout<<endl;
    int sum_of_elems = accumulate(d.begin(), d.end(), decltype(d)::value_type(0));
    cout<<"The final grade is "<<sum_of_elems;
}
