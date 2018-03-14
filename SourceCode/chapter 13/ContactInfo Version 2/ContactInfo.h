// Contact class specification file (version 2)
#ifndef CONTACTINFO_H
#define CONTACTINFO_H
#include <cstring>	// Needed for strlen and strcpy

// ContactInfo class declaration.
class ContactInfo
{
private:
	char *name;		// The contact's name
	char *phone;	// The contact's phone number
	
	// Private member function: initName
	// This function initializes the name attribute.
	void initName(char *n)
	{    name = new char[strlen(n) + 1];
         strcpy(name, n); }
    
	// Private member function: initPhone
	// This function initializes the phone attribute.
    void initPhone(char *p)
    {   phone = new char[strlen(p) + 1];
        strcpy(phone, p); }
public:
	// Constructor
	ContactInfo(char *n, char *p)
	{ // Initialize the name attribute.
      initName(n);
      
	  // Initialize the phone attribute.
	  initPhone(n); }

	// Destructor
	~ContactInfo()
	{ delete [] name;
	  delete [] phone; }

	const char *getName() const
	{ return name; }

	const char *getPhoneNumber() const
	{ return phone; }
};
#endif