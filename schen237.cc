#include <iostream>
using namespace std;
 
int main()
{
     // Declare your variables.  You can write any code needed
     // (including functions) to make your program work properly.
     // ...
     int arraySize = 4;
     int inputArray[arraySize];
     int min;
     int max;
     double avg;
     
     cout << "Name: Clark Chen, Midterm 1, CS 141, Fall 2017" << endl;
     cout << "Enter 4 integers: " ;
     for (int i = 0; i<arraySize; i++){
         cin >> inputArray[i];
     }
     
     //////////////////////////////////////////////////////////////////////////
     
     min = inputArray[0];
     for (int i = 0; i<arraySize; i++){
         if (inputArray[i] < min){
             min = inputArray[i];
         }
     }
     
     cout << "The smallest is: " << min << endl;
     
     
     //////////////////////////////////////////////////////////////////////////
     max = inputArray[0];
     for (int i = 0; i<arraySize; i++){
         if (inputArray[i] > max){
             max = inputArray[i];
         }
     }
     cout << "The largest is: " << max << endl;
     // ...
     
     
     
     
     //////////////////////////////////////////////////////////////////////////
     avg = inputArray[0];
     for (int i = 1; i<arraySize; i++){
         avg+=inputArray[i];
     }
     avg = (avg-min-max)/2;
     cout << "The average of the other two is: " << avg << endl;
     // ...
  
     cout << "Done. " << endl;
     return 0;
} //end main()