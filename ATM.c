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
void withdraw(ac a)
{
    
    int bal1;
    int amt;
    bal1=a.bal;
    ac g,l,m,n;
    FILE *fp1,*fp2,*fp3,*fp4;
    Start:
    printf("Enter Amount to be withdrawn in multiples of 100 and 500\n");
    scanf("%d",&amt);
    if(a.acno==22043098)
    {
        if(amt<=a.bal)
        {
            if(amt%100==0)
            {
            a.bal=a.bal-amt;
            fp1=fopen("acc1.bin","wb+");
            printf("Previous balance=%d \n Current Balance=%d\n",bal1,a.bal);
            fwrite(&a,sizeof(ac),1,fp1);
            fclose(fp1);
            }
            else
            printf("Enter Valid Amount\n");
        }
        else
        {
            printf("Insufficient Balance\n");
            goto Start;
        }}
        else if(a.acno==22043097)
    {
        if(amt<=a.bal)
        {
            if(amt%100==0)
            {
            a.bal=a.bal-amt;
            fp1=fopen("acc1.bin","wb+");
            printf("Previous balance=%d \n Current Balance=%d\n",bal1,a.bal);
            fwrite(&a,sizeof(ac),1,fp1);
            fclose(fp1);
        }
        else
        printf("Enter Valid Amount\n");
        }
        else
        {
            printf("Insufficient Balance\n");
            goto Start;
        }}
         else if(a.acno==22043096)
        {
        if(amt<=a.bal)
        {
            if(amt%100==0)
            {
            a.bal=a.bal-amt;
            fp1=fopen("acc1.bin","wb+");
            printf("Previous balance=%d \n Current Balance=%d\n",bal1,a.bal);
            fwrite(&a,sizeof(ac),1,fp1);
            fclose(fp1);
        }
        else
        printf("Enter Valid Amount\n");
        }
        else
        {
            printf("Insufficient Balance\n");
            goto Start;
        }}
         else if(a.acno==22043095)
    {
        if(amt<=a.bal)
        {
            if(amt%100==0)
            {
            a.bal=a.bal-amt;
            fp1=fopen("acc1.bin","wb+");
            printf("Previous balance=%d \n Current Balance=%d\n",bal1,a.bal);
            fwrite(&a,sizeof(ac),1,fp1);
            fclose(fp1);
        }
        else
        printf("Enter Valid Amount\n");
        }
        else
        {
            printf("Insufficient Balance\n");
            goto Start;
        }
    }
    else
    exit(0);
}
void deposit(ac k)
{
    int amt,i,acno;
    int act;
    ac a,b,c,d,e,f,g;
    FILE *f1,*f2,*f3,*f4;
    if(k.acno==22043098)
    {
    printf("Enter Amount to be deposited in multiples of 500 and 100\n");
    scanf("%d",&amt);
        if(amt%100==0)
        {
            k.bal=k.bal+amt;
            f1=fopen("acc1.bin","wb+");
            fwrite(&k,sizeof(ac),1,f1);
            fclose(f1);
            printf("Amount added successfully\n");
            printf("New Balance in %s account= %d\n",k.name,k.bal);
            
        }
        else
       { printf("Invalid Amount\n");
     fclose(f1);
    }}
    else if(k.acno==22043097)
    {
      
        printf("Enter Amount to be deposited in multiples of 500 and 100\n");
        scanf("%d",&amt);
        if(amt%100==0)
        {
             k.bal=k.bal+amt;
            f2=fopen("acc2.bin","wb+");
            fwrite(&k,sizeof(ac),1,f2);
            fclose(f2);        
            printf("Amount added successfully\n");
            printf("New Balance in %s account= %d\n",k.name,k.bal);
        }
        else
        {printf("Invalid Amount\n");
     fclose(f2);
    }
    }
    else if(k.acno==22043096)
    {
        
        printf("Enter Amount to be deposited in multiples of 500 and 100\n");
        scanf("%d",&amt);
        if(amt%100==0)
        {
            k.bal=k.bal+amt;
            f3=fopen("acc3.bin","wb+");
            fwrite(&k,sizeof(ac),1,f3);
            fclose(f3);
            printf("Amount added successfully\n");
            printf("New Balance in %s account= %d\n",k.name,k.bal);
            
        }
        else
       { printf("Invalid Amount\n");
     fclose(f3);
    }
    }
    else if(k.acno==22043095)
    {
      
        printf("Enter Amount to be deposited in multiples of 500 and 100\n");
        scanf("%d",&amt);
        if(amt%100==0)
        {
            k.bal=k.bal+amt;
              f4=fopen("acc4.bin","wb+");
              fwrite(&k,sizeof(ac),1,f4);
            fclose(f4);
            printf("Amount added successfully\n");
            printf("New Balance in %s account= %d\n",k.name,k.bal);
            
        }
        else
        {printf("Invalid Amount\n");
     fclose(f4);
    }
    }
    else
    printf("Invalid Account Number\n");
}
void balance(ac p)
{
    ac g,l,m,n;
    FILE *fp1,*fp2,*fp3,*fp4;
    fp1=fopen("acc1.bin","rb");
    fread(&g,sizeof(ac),1,fp1);
    if(g.acno==p.acno)
     { printf("Current Balance = %d\n",g.bal);
     fclose(fp1);
    }
    else
    fclose(fp1);
    fp2=fopen("acc2.bin","rb");
    fread(&l,sizeof(ac),1,fp2);
    if(l.acno==p.acno)
     { printf("Current Balance = %d\n",l.bal);
     fclose(fp2);
    }
    else
    fclose(fp2);
    fp3=fopen("acc3.bin","rb");
    fread(&m,sizeof(ac),1,fp3);
    if(m.acno==p.acno)
      { printf("Current Balance = %d\n",m.bal);
     fclose(fp3);
    }
    else
    fclose(fp3);
    fp4=fopen("acc4.bin","rb");
    fread(&n,sizeof(ac),1,fp4);
    if(n.acno==p.acno)
    { printf("Current Balance = %d\n",n.bal);
     fclose(fp4);
    }
    else
    fclose(fp4);
}
void pinchange(ac p)
{
    int pin;
    printf("Enter new pin\n");
    scanf("%d",&pin);
    ac a,g,l,m,n;
    FILE *fp1,*fp2,*fp3,*fp4;
    if(p.acno==22043098)
      {
        fp1=fopen("acc1.bin","wb+");
        p.pin=pin;
        fwrite(&p,sizeof(ac),1,fp1);
         fclose(fp1);
        printf("Pin Updated\n");
      }
    else if(p.acno==22043097)
        {
             fp2=fopen("acc2.bin","wb+");
            p.pin=pin;
                fwrite(&p,sizeof(ac),1,fp2);
                 fclose(fp2);
                 printf("Pin Updated\n");
      }
    else if(p.acno==22043096)
     {
         fp3=fopen("acc3.bin","wb+");
        p.pin=pin;
            fwrite(&p,sizeof(ac),1,fp3);
             fclose(fp3);
             printf("Pin Updated\n");
      }
    else if(p.acno==22043095)
    { 
        fp4=fopen("acc4.bin","wb+");
        p.pin=pin;
        fwrite(&p,sizeof(ac),1,fp4);
     fclose(fp4);
     printf("Pin Updated\n");
    }
    else
    {
    exit(0);
    }
}
void atm()
{
   int p1,i,j=1;
   Start:
     printf("\t\t\t\tEnter pin\n");
     printf("\t\t\t\t");
    scanf("%d",&p1);
    ac a,b,c,d,e,f,g,h,m,n,o,p;
    c.pin=0;
    FILE *f1,*f2,*f3,*f4;
    f1=fopen("acc1.bin","rb");
    f2=fopen("acc2.bin","rb");
    f3=fopen("acc3.bin","rb");
    f4=fopen("acc4.bin","rb");
    fread(&b,sizeof(ac),1,f1);
    if(p1==b.pin)
    {strcpy(c.name,b.name);
    c.pin=b.pin;
    c.acno=b.acno;
    c.bal=b.bal;
    fclose(f1);
    }
    else
    fclose(f1);

     fread(&d,sizeof(ac),1,f2);
    if(p1==d.pin)
    {strcpy(c.name,d.name);
    c.pin=d.pin;
    c.acno=d.acno;
    c.bal=d.bal;
     fclose(f2);
    }
    else
    fclose(f2);

     fread(&f,sizeof(ac),1,f3);
    if(p1==f.pin)
    {strcpy(c.name,f.name);
    c.pin=f.pin;
    c.acno=f.acno;
    c.bal=f.bal;
     fclose(f3);
    }
    else
    fclose(f3);

     fread(&g,sizeof(ac),1,f4);
    if(p1==g.pin)
    {strcpy(c.name,g.name);
    c.pin=g.pin;
    c.acno=g.acno;
    c.bal=g.bal;
    fclose(f4);
    }
    else
    fclose(f4); 

    fclose(f1);
    fclose(f2);
    fclose(f3);
    fclose(f4);  
    if(c.pin==0)
    {
        printf("Enter Valid Pin\n");
        j++;
    }
    if(j<=3 && c.pin==0)
    goto Start;
    else if(j<=3 && c.pin!=0)
    {
    int ch;
    int ch1;
    printf("Welcome %s\n",c.name);
        while(1)
    {
        printf("1.WITHDRAWAL\t\t\t2.DEPOSIT\n3.BALANCE ENQUIRY\t\t4.PIN CHANGE\n");
         printf("Enter choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:if(c.acno==22043098)
                {
                    f1=fopen("acc1.bin","rb");
                fread(&m,sizeof(ac),1,f1);
                withdraw(m);
                fclose(f1);
                }
                else if(c.acno==22043097)
                {
                     f2=fopen("acc2.bin","rb");
                fread(&n,sizeof(ac),1,f2);
                withdraw(n);
                fclose(f2);
                }
                else if(c.acno==22043096)
                {
                     f3=fopen("acc3.bin","rb");
                fread(&o,sizeof(ac),1,f3);
                withdraw(o);
                fclose(f3);
                }
                else if(c.acno==22043095)
                {
                     f4=fopen("acc4.bin","rb");
                fread(&p,sizeof(ac),1,f4);
                withdraw(p);
                fclose(f4);
                }
                else
                exit(0);
                break;
        case 2:if(c.acno==22043098)
                {
                    f1=fopen("acc1.bin","rb");
                fread(&m,sizeof(ac),1,f1);
                deposit(m);
                fclose(f1);
                }
                else if(c.acno==22043097)
                {
                     f2=fopen("acc2.bin","rb");
                fread(&n,sizeof(ac),1,f2);
                deposit(n);
                fclose(f2);
                }
                else if(c.acno==22043096)
                {
                     f3=fopen("acc3.bin","rb");
                fread(&o,sizeof(ac),1,f3);
                deposit(o);
                fclose(f3);
                }
                else if(c.acno==22043095)
                {
                     f4=fopen("acc4.bin","rb");
                fread(&p,sizeof(ac),1,f4);
                deposit(p);
                fclose(f4);
                }
                else
                exit(0);
                break;
        case 3:balance(c);
                break;
        case 4: if(c.acno==22043098)
                {
                    f1=fopen("acc1.bin","rb");
                fread(&m,sizeof(ac),1,f1);
                pinchange(m);
                fclose(f1);
                }
                else if(c.acno==22043097)
                {
                     f2=fopen("acc2.bin","rb");
                fread(&n,sizeof(ac),1,f2);
                pinchange(n);
                fclose(f2);
                }
                else if(c.acno==22043096)
                {
                     f3=fopen("acc3.bin","rb");
                fread(&o,sizeof(ac),1,f3);
                pinchange(o);
                fclose(f3);
                }
                else if(c.acno==22043095)
                {
                     f4=fopen("acc4.bin","rb");
                fread(&p,sizeof(ac),1,f4);
                pinchange(p);
                fclose(f4);
                }
                else
                exit(0);
                break;
        default :printf("Wrong Choice\n");
                break;
    }
    printf("Press 0 to continue or Press any other number key to end transaction\n");
    scanf("%d",&ch1);
    if(ch1!=0)
    break;
    }
   
    }
    else
    exit(1);
    
}
int main()
{
printf("\t\t\t\tWelcome to Global Bank ATM\n");
   atm();
   return 0;
}
