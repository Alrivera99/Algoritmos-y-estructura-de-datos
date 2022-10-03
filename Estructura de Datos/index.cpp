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
   
    cout << endl << "Age of dad: " << dad.age << "\nHight of mum " << dad.hight << endl;
   
   union PERSON_u {
    int age;
    float hight; 
   };

   PERSON_u mum;
   mum.age = 65;
   mum.hight = 1.67;


    cout << endl << "Age of mum: " << mum.age << "\nHight of mum " << mum.hight << endl;

    cout << endl << "Size of dad(struct): " << sizeof(dad) << "\nSize of mum(struct): " << sizeof(mum);

}

int main()
{
   
   otherStructureDatas();
   
    return 0;
}