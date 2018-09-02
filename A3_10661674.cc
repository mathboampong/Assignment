#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int score;
    cout <<"\t \t \t \t" << "University of Ghana Grading System" << endl ;
    for (; ; ) {
        cout << "Enter the total score for the course" << endl;
        cin >> score;
        if (score < 44) {
            cout << "your grade for the course is: F." << endl;
        }else if (score >= 45  && score <= 49){
            cout<< "your grade for the course is: E" <<endl;
        }else if (score >= 50  && score <= 54){
            cout<< "your grade for the course is: D" <<endl;
        }else if (score >= 55  && score <= 59){
            cout<< "your grade for the course is: D+" <<endl;
        }else if (score >= 60  && score <= 64){
            cout<< "your grade for the course is: C" <<endl;
        }else if (score >= 65  && score <= 69){
            cout<< "your grade for the course is: C+" <<endl;
        }else if (score >= 70  && score <= 74){
            cout<< "your grade for the course is: B" <<endl;
        }else if (score >= 75  && score <= 79){
            cout<< "your grade for the course is: B+" <<endl;
        }else if (score >= 80  && score <= 100){
            cout<< "your grade for the course is: A" <<endl;
        }
    }
    return 0;
    }
