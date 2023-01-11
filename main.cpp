#include <iostream>
#include "Monoblock.h"

int main(){
   
   ITechnics* electronic[5];

   electronic[0] = new AMD(230, 50);
   electronic[1] = new Intel(220, 32);
   electronic[2] = new HP(3, 1);
   electronic[3] = new Acer(4, "Black");
   electronic[4] = new Monoblock(220, 2);

   bool source = true;
   while (source){
      
      std::cout << "Choose product : 1 - AMD, 2 - Intel, 3 - HP, 4 - Acer, "
      "5 - Monoblock, 0 to exit" << std::endl;

      int selection;
      std::cin >> selection;
      switch (selection){
      
      case 1: {
         electronic[0]->Show();
         break;
      }
      case 2: {
         electronic[1]->Show();
         break;
      }
      case 3: {
         electronic[2]->Show();
         break;
      }
      case 4: {
         electronic[3]->Show();
         break;
      }
      case 5: {
         electronic[4]->Show();
         break;
      }
      case 0: {
         source = false;
         break;
      }
      default: {
         std::cout << "Choose product from 1 to 5 or 0 to exit" << std::endl;
         break;
      }

      }
   }
   delete electronic[0];
   delete electronic[1];
   delete electronic[2];
   delete electronic[3];
   delete electronic[4];

   return 0;
}


