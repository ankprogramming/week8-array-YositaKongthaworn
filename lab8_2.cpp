#include <iostream>

using namespace std;

int main () {
//        char city[] ={'A','B','C','\0'};
 //       char city2[] = {"ABC,DEF"}"

        //การสร้างค่าเก็บตัวแปล โดยกำหนดชื่อ ขนาด จำนวนขนาด
        char name[] = {"Yosita"};
        int nameLength = 6;
        cout << name <<endl;

        // TODO: เขียนโปรแกรมเพื่อสลับชื่อ
        // hint : สร้าง array มารับค่าตัวอักษรแบบย้อนกลับ สามารถใช้ loop เข้ามาช่วยได้

    char revNAME[nameLength+1];


    for (int i = 0; i < nameLength; i++)
    {

        revNAME[i]= name[5-i];

    }
        revNAME[nameLength]= '\0';
        cout<<revNAME<<endl ;



        for (int i=0;i<nameLength;i++){
            revNAME[i] =revNAME[i] +1;

        }
        cout<<revNAME;

        return 0;
}
