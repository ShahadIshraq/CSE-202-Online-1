#include <string>
#include "Author.cpp"
using namespace std;

class Book {
private:
   string name;
   Author author;
   double price;
   int stock;
public:
    Book(string name,Author author);
    void setPrice(double price);
    void setStock(int stock);
    string getAuthorName();
    double getPrice();
    int getStock();
    void borrowBook(int amount);
    void returnBook(int amount);
    Book(string name,Author author,double price,int stock);
    void print();
    string getName();
    Author getAuthor();
};

Book::Book(string name,Author author){
    this->name=name;
    this->author=author;
}

void Book::setPrice(double price){
    this->price=price;
}

void Book::setStock(int stock){
    this->stock=stock;
}

string Book::getAuthorName(){
    return author.getName();
}

double Book::getPrice(){
    return price;
}

int Book::getStock(){
    return stock;
}

void Book::borrowBook(int amount){
    if(amount>stock) cout<<"Borrowing amount exceeds the current stock!" <<endl;
    else stock-=amount;
}

void Book::returnBook(int amount){
    stock+=amount;
}

Book::Book(string name,Author author,double price,int stock){
    this->name=name;
    this->author=author;
    this->price=price;
    this->stock=stock;
}

void Book::print(){
    cout<< "Author: "<<author.getName()<<" Name: "<<name<<" Price: "<<price<<" Stock: "<<stock<<endl;
}

string Book::getName(){
    return name;
}

Author Book::getAuthor(){
    return author;
}
