#include <iostream>
using namespace std;

int main()
{ 
/* prints header */
  cout <<"FizzBuzz Magic 1 through 15 \n\n";
 
 /* prints numbers 1 to 15 */
 int x = 1;
 while x < 16 {
    cout << x "\n";
    x++;
    }
 
 /* tells what is coming next */
 cout << "Every number from 1 to 15 that is divisible by 3 gets a \" fizz \" \n\n";
 
 /* prints number or if number is divisible by three prints fizz */
 int y = 1;
 if y % 3 == 0 {
  cout << "fizz \n";
  else cout << y "\n";
  y++;
  }
  
   /* tells what is coming next */
  cout << "Every number from 1 to 15 that is divisible by 5 gets a \" buzz \" \n\n";
  
 /* prints number or if number is divisible by five prints buzz */
  int z = 1;
  if z % 5 == 0 {
    cout << "buzz \n";
    else cout << z "\n";
    z++;
    }
    
    /* prints number or if number is divisible by 3 and 5 prints fizzbuzz */
    int w = 1;
    if w % 3 == 0, if w % 5 == 0 {
      cout << "fizzbuzz \n";
      else cout << w "\n";
      w++;
      }
      
      return 0;
      }
      
    
