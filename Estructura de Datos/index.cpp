#include <iostream>

using namespace std;

void otherStructureDatas(){
   
   // STRUCT
   struct PERSON { //typedef
       int age;
       float hight;
   };
   
   PERSON dad;
   dad.age = 75;
   dad.hight = 1.89;
   
    cout << endl << "Age of dad: " << dad.age << "\nHight of mum " << dad.hight << endl;
   
   // UNION
   union PERSON_u {
    int age;
    float hight; 
   };

   PERSON_u mum;
   mum.age = 65;
   mum.hight = 1.67;


    cout << endl << "Age of mum: " << mum.age << "\nHight of mum " << mum.hight << endl;

    // Comparacion de tamaños de memoria entre los dos
    // Struct: Suma la memoria de todos los elementos - ES MEJOR
    // Union: Tomas la memoria del elemento con mas memoria
    cout << endl << "Size of dad(struct): " << sizeof(dad) << "\nSize of mum(union): " << sizeof(mum);

    // ENUM
    enum days {sunday, monday, tuesday, wednesday, thursday, friday, saturday};
    enum days today = monday;

    enum review {verybad=1, bad, normal, good, excelent};
    enum review course = excelent;

    //cout << endl << monday
    cout << endl << endl << course << " stars!";

}

int main()
{
   
   otherStructureDatas();
   
    return 0;
}