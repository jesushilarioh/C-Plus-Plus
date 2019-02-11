// What’s wrong with the following array definitions?
int readings[-1]; // Size declarator cannot be negative number
float measurements[4.5]; // Size declarator cannot be a decimal value
int size;   // Size declarator must be initialized
string names[size]; // The size variable must be initialized first. 