#include <iostream>
#include <list>
#include <iterator>
#include <vector>
#include <numeric>
using namespace std;

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
            cout<<"percentage "<<i<<": ";
            cin>>percent;
            b.push_back(percent);
    }
    int totalPercent = accumulate(b.begin(), b.end(), decltype(b)::value_type(0));

    //Percentage error cases
    while(totalPercent!=100){
        b.clear();
        cout<<"total percentage must be 100, but it's "<<totalPercent<<". Please try again"<<endl;
        for(int i=1;i<=a;i++) {
            cout<<"percentage "<<i<<":"<<endl;
            cin>>percent;
            b.push_back(percent);
        }
        totalPercent = accumulate(b.begin(), b.end(), decltype(b)::value_type(0));
    }

    cout<<"Please enter the scores respectively"<<endl;
    for(int i=1;i<=a;i++) {
            cout<<"score "<<i<<": ";
            cin>>score;
            c.push_back(score);
    }
    for(int i=0;i<a;i++){
        d.push_back((b[i]*c[i])/100);
    }
    cout<<"%\tscores"<<endl;
    for (int i = 0; i < b.size(); i++) {
            cout << b[i] <<"\t"<<c[i]<<endl;
    }

    int finalGrade = accumulate(d.begin(), d.end(), decltype(d)::value_type(0));
    cout<<"The final grade is "<<finalGrade<<endl;

    //Letter Grades 
    if(0<= finalGrade && finalGrade< 20){
        cout<<"Corresponding letter grade: FF \nYou failed."<<endl;
    }else if(20<=finalGrade && finalGrade<30){
        cout<<"Corresponding letter grade: FD \nYou failed."<<endl;
    }else if(30<=finalGrade && finalGrade<40){
        cout<<"Corresponding letter grade: DD \nYou failed."<<endl;
    }else if(40<=finalGrade && finalGrade<50){
        cout<<"Corresponding letter grade: DC \nYou passed(?)."<<endl;
    }else if(50<=finalGrade && finalGrade<60){
        cout<<"Corresponding letter grade: CC \nYou passed."<<endl;
    }else if(60<=finalGrade && finalGrade<70){
        cout<<"Corresponding letter grade: CB \nYou passed."<<endl;
    }else if(70<=finalGrade && finalGrade<80){
        cout<<"Corresponding letter grade: BB \nYou passed."<<endl;
    }else if(80<=finalGrade && finalGrade<90){
        cout<<"Corresponding letter grade: BA \nYou passed."<<endl;
    }else{
        cout<<"Corresponding letter grade: AA \nYou passed."<<endl;
    }
}