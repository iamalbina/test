#include <iostream>

using namespace std;

class student{
  string name, secondName;
  int rn;
  public:
    student(string n1, string n2)
    {
      name=n1;
      secondName=n2;
    }
    
    student(string n1, int rik)
    {
      name=n1;
      rn=rik;
    } 
    void showStudent()
    {
      cout<<name<<"\n";
      cout<<secondName<<"\n";
      cout<<rn<<"\n";
    }
    
    void showStudent(char a)
    {
      cout<<name<<"\n";
      cout<<secondName<<"\n";
    }
    
    void showStudent(int a)
    {
      cout<<name<<"\n";
      cout<<rn<<"\n";
    }
    
    student()
    {
      cout<<"¬ведите, пожалуйста, им€:";
      cin>>name;
      cout<<"¬ведите, пожалуйста, фамилию:";
      cin>>secondName;
      cout<<"¬ведите, пожалуйста, год рождени€:";
      cin>>rn;
    }
};

int main(){
  setlocale(LC_ALL,"RUS");
  student s1("Albina","Vasilkovskaya"), s2("Albina", 2000), s3;
//  s1.showStudent('!');
//  s2.showStudent(1);
s3.showStudent();
s3.showStudent('!');
s3.showStudent(1);
  return(0);
}

