#include<stdio.h>
#include<stdlib.h>
#include<String.h>
#include<Math.h>
typedef struct Account
{
    char name[20];
    int pin;
    int acno;
    int bal;
}ac;
int main()
{
   ac a[5];
   FILE *fp1,*fp2,*fp3,*fp4;
   fp1=fopen("acc1.bin","wb+");
   fp2=fopen("acc2.bin","wb+");
    fp3=fopen("acc3.bin","wb+");
     fp4=fopen("acc4.bin","wb+");
     strcpy(a[0].name,"Suraj Kumar Singh");
     a[0].pin=1234;
     a[0].acno=22043098;
     a[0].bal=5000;
     strcpy(a[1].name,"Suvankar Das");
     a[1].pin=2345;
     a[1].acno=22043097;
     a[1].bal=5000;
     strcpy(a[2].name,"Avranil Set");
     a[2].pin=3456;
     a[2].acno=22043096;
     a[2].bal=5000;
     strcpy(a[3].name,"Vikas Yadav");
     a[3].pin=4567;
     a[3].acno=22043095;
    a[3].bal=5000;
    fwrite(&a[0],sizeof(ac),1,fp1);
    fwrite(&a[1],sizeof(ac),1,fp2);
    fwrite(&a[2],sizeof(ac),1,fp3);
    fwrite(&a[3],sizeof(ac),1,fp4);
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fclose(fp4);
    return 0;
}