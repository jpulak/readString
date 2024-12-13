//3.6 lab- Program for concatination and get line

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
   //initialize variables
   
    string name1, name2;
    
    /*Add statements below to: 
    Prompt the user to enter their 
    name and use the stream extraction operator 
    to read the name entered and put it in name1 
    and then print name1 and advance to the next line.
    */
    
    cout << "Enter your name: ";
    cin >> name1;
    cout << name1;
    
    /*Add statements below to: 
    Use the concatenation operator to create a new 
    string containing the characters from the phrase 
    "Hello there " followed by the characters in name1, 
    assign the new string to name1 and then print name1 
    and advance to the next line*/
    
    name1 = "Hello there " + name1;
    cout << name1 << endl;

    /*Add statements below to: Use the getline function 
    to read any characters  left in buffer after first read 
    and put them in name2 and then print name2 and advance to the nextline
    */
    
    getline(cin, name2);
    cout << name2 << endl;
    
    /*Add statements below to: Use the concatenation operator to create 
    a new string containing the characters in name1 followed by the the 
    characters in name2 and store the new string in name1 Print 
    name1 and advance to the nextline.*/
    
    name1 = name1 + name2;
    cout << name1 << endl;
    return 0;
}
    
    
