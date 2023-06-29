/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้

    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/

#include <stdio.h>

int main()
{

    char FirstN[50];
    char LastN[50];

    printf("Hello Please Enter Your Name & Last Name \n");
    printf( "- - - - - -\n" ) ;

    printf("First Name = ");
    scanf("%s", FirstN);
    printf("Last Name = ");
    scanf("%s", LastN);

    printf("%s %s%s %s", FirstN , LastN ,"s", "TC, RMUTL, Chiang Mai, Thailand");


}