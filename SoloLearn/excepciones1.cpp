#include <iostream>
#include <string>

using namespace std;

int main() {
   string name;
   cout << "INGRESE NOMBRE ";
   cin >> name;
   try {
      if ( (name.size() < 4) || (name.size()>20) ) {
         throw 99;
      } else
      {
         cout << "Valid" << endl;
      }

   }
   catch(int x) {
      cout << "Invalid" << endl;
   }

   return 0;
}
