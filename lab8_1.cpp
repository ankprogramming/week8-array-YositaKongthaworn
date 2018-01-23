#include <iostream>

using namespace std;

int main () {

        int exArr[5] ={1,0,3,5,9};
        //วิธีการสร้างอาร์เลย์



        int arr[10] = {3,2,5,5,6,9,1,3,2,7};

        // เขียนโปรแกรมเพื่อแสดงค่าใน arr
        //บอกชื่ออาร์เลย์และบอกที่อยู่ อินเด็ก
        for (int i=0; i < 10; i++)
        {
            cout <<arr[i] << endl;
        }


        //แสดงค่าเป็นเลขคู่

        for (int i=0; i < 10; i+=2)
        {
          cout <<arr[i] << endl;
        }



        return 0;
}
