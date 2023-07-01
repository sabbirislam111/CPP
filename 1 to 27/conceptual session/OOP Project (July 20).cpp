#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    float gpa;
    int marks[5];


    Student(int arr[]){
        for(int i = 0; i < 5; i++){
            marks[i] = arr[i];
        }
    }

};

Student *set_marks(int num){
    cout<<"Provide marks for student of "<<num<<endl;
    int arr[5];
    for(int i = 0; i < 5; i++){
        cin>>arr[i];
    }

    Student *student = new Student(arr);
    return student;

}


int main(){

    int n;
    cout<<"Give the number of students"<<endl;
    cin>>n;
    Student *student[n];

    for(int i = 0; i < n; i++){
        student[i]=set_marks(i+1);
    }

    for(int i = 0; i < n; i++){
            cout<<"Marks for student of "<<i+1<<endl;
        for(int j = 0; j < 5; j++){
            cout<<student[i]->marks[i];
        }
        cout<<endl;
    }


 return 0;
}
