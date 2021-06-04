using namespace std;
#include <bitsstdc++.h>

class Person{
    unsigned int age;
    
    public:
        Person();

        Person(const unsigned int& initialAge);

        ~Person();

        void setAge(const unsigned int& newAge);

        void yearPasses();

        void amIOld() const;

        unsigned int getAge() const{return this->age;}
    };

    Person::Person(){
      this->age = 0;
    }

    Person::Person((const unsigned int& initialAge){

        if(initialAge < 0){
          cout << "Age is not valid, setting age to 0" << endl;
          this->age = 0;
        }else{
          age = initialAge;
        }
    }

    ~Person::Person(){}

    void setAge(const unsigned int& newAge){
      this->age = newAge;
    }

    void Person::amIOld() const{
        if(this->age < 13){
          cout << "You are young." << endl;
        }else if(this->age >= 13 && this->age < 18){
          cout << "You are a teenager." << endl;
        }else{
          cout << "You are old." << endl;
        }
    }

    void Person::yearPasses(){
        this->age +=1;
    }

int main(){
  int t;

	unsigned int age;

    cin >> t;

    for(int i=0; i < t; ++i {
    	  cin >> age;

        Person p(age);

        p.amIOld();

        for(int j=0; j < 3; ++j) {
        	p.yearPasses();
        }
        p.amIOld();

		cout << '\n';
    }

    return 0;
}
