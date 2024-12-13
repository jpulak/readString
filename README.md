# readString
General Information – Reading strings in C++:
Whitespace characters include spaces, tabs, and newlines.

The stream extraction operator, >>, can be used to read a sequence of characters that does not have any embedded whitespace characters. For example, given that name is the name of a string object, we can read a sequence of non-whitespace characters and store them in name by coding:
```
cin >> name;
```
The read proceeds as follows: Any leading whitespace characters are skipped, a sequence of non-whitespace characters are read and placed in the string name, finally, the read stops when a trailing whitespace character is encountered.

To read strings that include embedded spaces and tabs we would use the getline function. For example, given that name is the name of a string object, we can read a sequence of characters up until the first newline is encountered, storing the characters in the variable name by coding:
```
getline(cin, name);
```
The read proceeds as follows: characters are read and placed in name until a newline is encountered. The newline read is not put in the string name.

General Information – String Concatenation:
When the left and/or right operand of a plus symbol is a string object. The + specifies string concatenation. This string concatenation operator, +, creates a new string containing the characters of the left string followed by the characters of the right string. Neither the left string or the right string is changed by the concatenation operation.

For example, in the segment below we use the string concatenation operator to create a new string and place it in the string variable newString:
```
string string1, string2, newString;

string1 = "House";
string2 = "plant";
newString = string1 + string2; // Concatenation - newString gets Houseplant

cout << string1 << endl; // Displays House followed by a newline
cout << string2 << endl; // Displays plant followed by a newline
cout << newString << endl; // Displays Houseplant followed by a newline
