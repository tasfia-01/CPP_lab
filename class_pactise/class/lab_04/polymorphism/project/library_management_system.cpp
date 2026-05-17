#include<iostream>
using namespace std;
class Book{
    protected:
    int book_id;
    string title;
    string author;
    public:
    
    virtual void input_book_information(int book_id,string title,string author)
    {
        this->book_id=book_id;
        this->title=title;
        this->author=author;
    }
    virtual void display_book_information()
    {
        cout<<"Boook id:"<<book_id<<endl;
        cout<<"Book Title:"<<title<<endl;
        cout<<"Author:"<<author<<endl;

    }
    
};
class AcademicBook:public Book{
    
    string subject;
    string semester;
    public:
   
    virtual void input_book_information(int book_id,string title,string author,string subject,string semester)
    {
        this->book_id=book_id;
        this->title=title;
        this->author=author;
        this->subject=subject;
        this->semester=semester;

    }
    virtual void display_book_information()
    {
        cout<<"Boook id:"<<book_id<<endl;
        cout<<"Book Title:"<<title<<endl;
        cout<<"Author:"<<author<<endl;
        cout<<"Subject:"<<subject;
        cout<<"Semester:"<<semester;
        

    }

};
class StoryBook:public Book{
    string genre;
    double rating;
    public:
    
    virtual void input_book_information(int book_id,string title,string author,string genre,double rating)
    {
        this->book_id=book_id;
        this->title=title;
        this->author=author;
        this->genre=genre;
        this->rating=rating;
    }
    virtual void display_book_information()
    {
        cout<<"Boook id:"<<book_id<<endl;
        cout<<"Book Title:"<<title<<endl;
        cout<<"Author:"<<author<<endl;
        cout<<"Genre:"<<genre<<endl;
        cout<<"Rating"<<rating;

    }
};

int main()
{
    Book *book;

    AcademicBook ac;
    StoryBook sb;

    book=&ac;
   
    book->input_book_information(1001,"kichukkhon","humaion ahmed");
    book->display_book_information();

    book=&sb;
    book->input_book_information(56,"grany","abc");
    book->display_book_information();

    return 0;


}