#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */

   int start;
   int end;
   cout << "Enter the starting value: ";
   cin >> start;
   cout << "Enter the ending value: ";
   cin >> end;

   if (end < start)
   {
      cout << "The ending integer cannot be less than the starting integer." << endl;
   }
   else
   {
      for (int i = start; i <= end; i += 5)
      {
         cout << i << " ";
      }
   }

   return 0;
}
