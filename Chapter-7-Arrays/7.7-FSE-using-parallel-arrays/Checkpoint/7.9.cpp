// Is each of the following a valid or invalid array definition? 
// (If a definition is invalid, explain why.)

int numbers[10] = {0, 0, 1, 0, 0, 1, 0, 0, 1, 1};
// YES.

int matrix[5] = {1, 2, 3, 4, 5, 6, 7};
// NO. There are more values that the size declarator specifies

double radii[10] = {3.2, 4.7};
// Yes.

int table[7] = {2, , , 27, , 45, 39};
// NO. Values 2, 3 and 5 are missing. If you leave an element uninitialized, you must leave all the elements that follow it uninitialized as well.

char codes[] = {'A', 'X', '1', '2', 's'}; 
// YES

int blanks[];
// NO. If you decide not to initiallize an array with values, then you must specify the size.
// You must provide an initialization list if you leave out an array’s size declarator. Otherwise, C++ doesn’t know how large to make the array.
