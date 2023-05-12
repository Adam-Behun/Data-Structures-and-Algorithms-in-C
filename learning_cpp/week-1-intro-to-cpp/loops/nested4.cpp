#include <iostream>
using namespace std;

int main() {
   int numRows;
   int numColumns;
   int currentRow;
	char currentRowLetter;
   int currentColumn;
   int currentColumnInteger;

   cin >> numRows;
   cin >> numColumns;

   
   for (currentRow = 0; currentRow < numRows; ++currentRow)
   {
      currentRowLetter = 'A' + currentRow;
      
      for (currentColumn = 0; currentColumn < numColumns; ++currentColumn)
      {  
         currentColumnInteger = currentColumn + 1;
         
         cout << currentRowLetter << currentColumnInteger << " ";
         //currentRowLetter++;
         currentColumnInteger++;
         
      }
   }
   
   cout << endl;

   return 0;
}