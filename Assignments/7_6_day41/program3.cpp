#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



class Person{
    protected:
    string name ; 
    int age ;
    public : 
    Person() = default ;
    virtual void getdata(  )
    {
        cin >> name; 
        cin >> age ; 
    }
    virtual void putdata()
    {
        cout<<name<<' '<<age<<endl;
    }
};

class Professor : public Person
{
  int publications ; 
  int cur_id ; 
  static int count ; 
  public   :
  Professor()
  {
    count++ ;
    cur_id = count ; 
  } 
  void getdata  ( )
  {
    cin >>name >> age >> publications ;
  }
  void putdata ()
  {
    cout << name <<' '<< age <<' '<< publications <<' '<< cur_id <<endl;
  }
};

class Student  : public Person
{
  int marks[6] ; 
  int cur_id ; 
   static int count ; 
  public   :
  Student()
  {
    count++ ;
    cur_id = count ; 
  }  
  void getdata  ( )
  {
    cin >>name >> age  ;
    for( int i = 0 ; i < 6 ; i++)
        cin >> marks[i];
        
  }
  void putdata ()
  {
    int sum = 0 ;
    cout << name <<' '<< age<<' ' ;
    for( int i = 0 ; i < 6 ; i++)
        sum +=  marks[i];
    cout<<sum << ' ' ;
    cout << cur_id <<endl;
  }
};

int Student ::count = 0 ; 
int Professor ::count = 0 ; 


int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.

    Person * per [n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
