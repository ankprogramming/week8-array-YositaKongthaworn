#include <iostream>
using namespace std;

int main ()
{
    // สร้างตัวแปร array ชื่อ calendar เพื่อสร้างที่เก็บปฏิทิน
    // calendar[5][7]
    int calendar[5][7];
    int day =1;



    for (int i=0; i<4; i++)
    {
        calendar[0][i] = 0;
    }


    for (int i=4; i<7; i++)
    {
        calendar[0][i] =day;
        day++;
    }


    for (int i=1; i<5; i++)
    {

        for (int y=0; y<7; y++)
        {
            calendar[i][y] =day;
            day++;
        }

    }


    //บรรทัดการแสดงผลโดยการวนตอนการปสดงออก ต้องเว้นวัก  iคือตัววน
    for (int i=0; i<5; i++)
    {
        for (int y=0; y<7; y++)
        {
            cout<<calendar[i][y] <<" ";
        }
        cout<<endl;
    }


    // เขียนโปรแกรมแสดงปฏิทินเดือน ธันวาคม /2560
    // วันที่ไม่ใช่วันของเดือน ธันวาคมให้แสดงด้วย x




    // เขียนโปรแกรมเพื่อรับวันจากผู้ใช้ แล้วแสดงเฉพาะวันที่นั้น
    // 0 = วันจัน, 1  = วันอาทิด

        //การสร้างค่าเป็นรับเข้าตัวแปล

        int cmd;
        cin >> cmd;

        for (int i=0; i<5;i++){
                if  (calendar[i][cmd !=0]){
                  cout << calendar[i][cmd]<<" ";

                }

        }






    // เขียนโปรแกรมเพื่อรับสัปดาห์ของเดือนจากผู้ใช้ เขียนโปรแกรมเพื่อคัด เฉพาะวันของสัปดาห์
    // 1 หมายถึง สัปดาห์ที่ 1 ของเดือนธันวาคม 2560 จะได้เลข {1, 2}

        cout<<endl;
        cin>>cmd;
        for (int i=0;i<7;i++){
                if (calendar[cmd][i] !=0)

                cout <<calendar[cmd][i]<<" ";
        }


    return 0;
}
