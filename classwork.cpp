#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
// #include <bits/stdc++.h>
using namespace std;
struct data{
    string id;
    string name;
    int age;
    float score;
    char grade;
    string gender;
};
int i;
data student[5];

int main(){
    
    
    for (i = 0; i < 5; i++) {
        cout << "Enter your Name ";
        cin >> student[i].name;
        cout << endl;
        
        cout << "Enter your Id ";
        cin >> student[i].id;
        cout << endl;
        
        cout << "Enter your gender F/M ";
        cin >> student[i].gender;
        if (student[i].gender == "M") {
            student[i].gender = "Male";
        }else if(student[i].gender == "F"){
            student[i].gender = "Female";
        }else{
            cout << "enter a valid gender";
            cin >> student[i].gender;
        }
        cout << endl;
        
        cout << "Enter your score ";
        cin >> student[i].score;
        if (student[i].score > 80) {
            student[i].grade = 'A';
        }else if(student[i].score >= 75 && student[i].score < 79){
            student[i].grade = 'B';
        }else if(student[i].score >=70 && student[i].score < 74){
            student[i].grade = 'C';
        }else if(student[i].score >= 65 && student[i].score < 69){
            student[i].grade = 'D';
        }
        else if(student[i].score >= 60 && student[i].score < 64){
            student[i].grade = 'E';
        }
        else if(student[i].score <= 59){
            student[i].grade = 'F';
        }
        cout << endl;
        
        cout << "Enter your Age ";
        cin >> student[i].age;
        cout << endl;
        cout << endl;
        
    }
    
    
    //  writing in the external file
    ofstream file;
    file.open("message.txt");
    file << "ID \t\t" << "Name \t\t" << "Age \t\t" << "Gender \t\t" << "Score \t\t" << "Grade\t\t" << endl;
    for ( i = 0; i < 5; i++) {
        file << student[i].id << "\t" << student[i].name << "\t" << student[i].age << "\t" << student[i]. gender<< "\t" << student[i].score << "\t" << student[i].grade << endl;
    }
    
    return 0;
}
