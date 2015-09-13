#include <iostream>
#include <string>
using namespace std;

class Author {
private:
   string name;
   string email;
public:
   Author();
   Author(string name,string email);
   string getName();
   string getEmail();
   Author(string name);
   void setEmail(string email);
   void print();
};

Author::Author() {

}

Author::Author(string name,string email){
    this->name=name;
    this->email=email;
}

string Author::getName(){
    return name;
}

string Author::getEmail(){
    return email;
}

Author::Author(string name){
    this->name=name;
}

void Author::setEmail(string email){
    this->email=email;
}

void Author::print(){
    cout<< name << " at "<<email<<endl;
}

