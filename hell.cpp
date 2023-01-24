#include <iostream>  
using namespace std;  

// Driver Code
int main()  
{  
    // Declaring essential variables.
    int n, digit, reverse = 0, temp;    
    
    // Taking the input 'n' from the user to check palindrome.
    cout << "Enter the Input Number = ";    
    cin >> n;    
    
    // Making a copy of the input number.
    temp = n;    
    
    // Reversing the number using a while loop.
    while(n > 0)    
    {    
        digit = n % 10;
        reverse = reverse*10 + digit;
        n = n / 10;
    }   

    //Check whether the reversed number is equal to the original number. 
    if(temp == reverse)    
        cout << "Palindrome";    
    else    
        cout << "Not a Palindrome";   
    return 0;  
}  
