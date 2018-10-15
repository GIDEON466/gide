#include <iostream>
#include<fstream>
#include<string>
using namespace std;
struct student{
string idnumber;
string name;
int age;
string gender;
float score;
char grade;
};
int main(){
int a,b,c=1,total_score,total_age,male_count=0,female_coount=0;
double avg_age,avg_score;
student details[5];
for(a=0;a<=5;a++){
    cout<<"SUDENT:"<<c<<endl<<endl;
    c++;
    cout<<"id number:"<<endl ; cin>>details[c].idnumber;
    cout<<"name: "; cin>>details[c].name;
    cout<<"age:"  ; cin>>details[c].age;
    cout<<"gender" ; cin>>details[c].gender;
    if(details[c].gender=="Male"){
        male_count++;
    }
    else
      female_count++;
    cout<<"score:"  ;cin>>details[c].score;
    if(details[c].score>=80)
        details[c].grade='A';
    else if(details[c].score>=70)
        details[c].grade='B';
    else if(details[c].score>=60)
    details[c].grade='C';
    else if(details[c].score>=50)
        details.[c]='D';
    else if (details[c].score>=40)
        details.[c]='E';
    else if(details[c]<40)
        details.[c]='F';
    cout<<"GRADE:" <<student[c].grade;
    cout<<endl<<endl<<endl;
    total_age=details[0].age + details[1].age + details[2].age + details[3].age + details[4].age;
    total_score=details[0].score + details[1].score + details[2].score + details[3].score + details[4].score;
    avg_age=total/5.0;
    avg_score=total_score/5.0;

      ofstream outf("student.text");
      outf<<"idnumber  "  <<"name"   << "age"   <<"gender"  <<" grade"<<endl<<endl<<endl;
      outf<<"*********************************************************************************************************"<<nedl;
      for(b=0;b<5;b++)
        outf << b  <<"  .  "<<"   "<<details[b].idnumber<<"   "<<details[b].name<<"    "<<details[b].age <<"   "<<details[b].gender<<"     "<<details[b].score<<"       "<<details[b].score<<"   "<<details[b].grade<<endl<<endl<<endl;
        outf<<"***************************************************************************************************"<<endl;
        outf<<" number of males:"<<male_count<<endl;
        outf<<"number of females:"<<avg_age<<endl;


}

     return 0;
}
