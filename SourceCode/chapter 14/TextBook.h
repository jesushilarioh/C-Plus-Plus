#ifndef TEXTBOOK
#define TEXTBOOK
#include <iostream>
#include <string>
using namespace std;

// TextBook class
class TextBook
{
private:
   string title;     // Book title
   string author;    // Author name
   string publisher; // Publisher name
public:
   // The default constructor stores empty strings
   // in the string objects.
   TextBook()
      { set("", "", ""); }
      
   // Constructor
   TextBook(string textTitle, string auth, string pub)
      { set(textTitle, auth, pub); }
        
   // set function
   void set(string textTitle, string auth, string pub)
      { title = textTitle;
        author = auth;
        publisher = pub; }

   // print function
   void print() const
      {  cout << "Title: " << title << endl;
         cout << "Author: " << author << endl;
         cout << "Publisher: " << publisher << endl; }
};
#endif 