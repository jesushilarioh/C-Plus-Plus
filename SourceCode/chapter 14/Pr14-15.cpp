// This program demonstrates the Course class.
#include "Course.h"

int main()
{
   // Create a Course object.
   Course myCourse("Intro to Computer Science", // Course name
     "Kramer", "Shawn", "RH3010",       // Instructor info
     "Starting Out with C++", "Gaddis", // Textbook title and author
     "Addison-Wesley");                 // Textbook publisher
                   
   // Display the course info.
   myCourse.print();
   return 0;
} 