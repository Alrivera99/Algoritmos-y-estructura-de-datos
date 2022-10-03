
#include <iostream>

using namespace std;

void otherStructureDatas(){
   
   struct PERSON { //typedef
       int age;
       float hight;
   };
   
   PERSON dad;
   dad.age = 75;
   dad.hight = 1.89;
   
    cout << endl << "Age of dad: " << dad.age << "\nHight of dad " << dad.hight << endl;
}

int main()
{
   
   otherStructureDatas();
   
    return 0;
}