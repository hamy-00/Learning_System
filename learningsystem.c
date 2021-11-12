#include <stdio.h>
#include <string.h>
#define DIVIDE(X, Y) (X/Y)
#include <math.h>

void start();
void multi();
void exxit();
void div();
void fac();
void funop();
void alph();
void four();
void logic();
void counter();

void counter();

void main()
{

    char name[20];
    int reg;
    printf("\n\nEnter your name: ");
    scanf("%s",&name);
    printf("\nEnter your Registration number: ");
    scanf("%d",&reg);
    FILE *fptr;
    fptr = fopen("learning ssystdem file.txt", "w");
    fprintf(fptr,"student name: %s",name);

   fprintf(fptr,"\n\n");
   fprintf(fptr,"registration number: %d",reg);
    
fprintf(fptr,"\n\n");
fclose(fptr);
system ("cls");
printf("\n");
printf("                  #****************************************************#\n");
printf("                  #                                                    #\n");
printf("                  #                                                    #\n");
printf("                  #             Welcome to learning system             #\n");
printf("                  #                                                    #\n");
printf("                  #                                                    #\n");
printf("                  #****************************************************#\n\n");

 start();

}

void start(){

int choice;

printf("To learning select one of the following choices: \n\n(1) Teaching the multiplication table.\n(2) Teaching the division.\n(3) Calculate the factorial.\n(4) Mathematical functions and operations.\n(5) Teaching the alphabet.\n(6) Transfer between the four numerical systems.\n(7) logic gates.\n(8) Counter function.\n\n(0) conform  to exit \n\nEnter your choice =");
scanf("%d",&choice);
FILE *fptr;
fptr = fopen("learning ssystdem file.txt", "a");
fprintf(fptr,"you choose:%d",choice);
fprintf(fptr,"\n");
fclose(fptr);

switch(choice){
    case 1:multi();break;
    case 0: exxit();break;
    case 2: div();break;
    case 3: fac();break;
    case 4: funop();break;
    case 5: alph();break;
    case 6: four();break;
    case 7: logic();break;
    case 8: counter();break;
}
start();
}

void multi(){system ("cls");
printf("\n         Teaching the multiplication table \n\n");
int i,j;
for(i=1;i<=10;i++){
    for(j=1;j<=10;j++){
        printf("%d x %d = %d\n\n",i,j,i*j);
    }
}printf("\n");
int mi;
int mm;
printf("enter a number to print its multiplication table=");
scanf("%d",&mm);

for(mi=1;mi<=10;mi++){
    printf("%d x %d = %d\n",mm,mi,mm*mi);


}printf("\n");
}
void exxit(){
system ("cls");

        printf("TYPE > exit < to conform leaving\n type in 'exit' =");
    char bye[6];
    scanf("%sf",&bye);
    if (strcmp(bye, "exit") == 0)
{
    printf("\n\n\n");
printf("                  #****************************************************#\n");
printf("                  #                                                    #\n");
printf("                  #                                                    #\n");
printf("                  #           good bye from learning system            #\n");
printf("                  #                                                    #\n");
printf("                  #                                                    #\n");
printf("                  #****************************************************#\n\n");

exit(0);
}
else
{
    start();
}
}
void div(){system ("cls");
    printf("         Division\n\n");
float a,b;
float division;
division = 0;

printf("Enter two numbers:\n");
scanf("%f",&a);
scanf("%f",&b);
division = DIVIDE(a, b);

printf("Division = %.2f\n",division);
getch();



}
void fac(){system ("cls");
    int i,n;
    long fact=1;
    printf("enter a number to calculate its factorial=");
scanf("%d",&n);
 for (i = 1; i <= n; ++i) {
            fact *= i;
        }
printf("\n\n\n  the factorial of %.2d is   =  (  %.2llu  )      \n\n\n",n,fact);
}
void funop(){
    system ("cls");
    int tn,i,n,t;
    double xx,p,rr,number,squareRoot,base,power,result;
    unsigned long long fact = 1;

    printf("choose a function\n\n 1- pow()\n 2- sqrt()\n 3- fact()\n 4- san()\n 5- cos()\n 6- tan()\n");
    scanf("%d",&t);


    switch(t){

case 1:
    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the power raised: ");
    scanf("%lf",&power);

    result = pow(base,power);

    printf("%.2lf^%.2lf = %.2lf\n", base, power, result);
break;
     case 2:

   printf("Enter a number: ");
   scanf("%lf", &number);

   squareRoot = sqrt(number);

   printf("Square root of %lf =  %.2lf\n", number, squareRoot);

   case 3:
       printf("Enter an integer: ");
       scanf("%d", &n);
           for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %.2llu\n", n, fact);break;

    case 4:printf("Enter an integer: ");
       scanf("%d", &n);
       printf("sin of %d = %d\n",n,sin(n));
       case 5:printf("Enter an integer: ");
       scanf("%d", &n);
       printf("cos of %d = %d\n",n,cos(n));
       case 6:printf("Enter an integer: ");
       scanf("%d", &n);
       printf("tan of %d = %d\n",n,tan(n));
       }
}

void alph(){system ("cls");
    printf("\n\n");
char c,s;
    for (c = 'A'; c <= 'Z'; ++c){
        printf("%c ", c);}
        printf("\n");

        for (c = 'a'; c <= 'z'; ++c){
        printf("%c ", c);

}
printf("\n\n");
}
void four(){
system ("cls");
printf("denary = ");
  int chh,wew,con;
   for( chh = 0 ; chh <= 10; chh++ ) {
      printf("%d  ", chh );
   }
printf("\n binary = 0 1 10 11 100 101 110 111 1000 1001 1010");
printf("\n octal = 000 001 002 003 004 005 006 007 010");
printf("\n hexadicimal = 0 1 2 3 4 5 6 7 8 A B C D\n\n\n");
 long int nn, octalnum = 0, j = 1, remainder;
int a[10],v,i;

printf("Enter the number to convert to ocatal : ");
scanf("%d", &nn);
    
    while (nn != 0)
    {
        remainder = nn % 10;
        octalnum = octalnum + remainder * j;
        j = j * 2;
        nn = nn / 10;
    }
    printf("octal is= %lo \n", octalnum);
    
int n,ii;

printf("Enter the number to convert to binary: ");
scanf("%d",&n);
for(ii=0;n>0;ii++)
{
a[ii]=n%2;
n=n/2;
}
printf("binary is=");
for(ii=ii-1;ii>=0;ii--)
{
printf("%d",a[ii]);
}
printf("\n");
printf("Enter the number to convert to hexadicimal : ");
scanf("%d", &wew);
printf("hexadeicmal is =%x\n\n",wew);
}

void logic(){
    int gat,q,w;
    system("cls");
printf("The AND gate is a basic digital logic gate that implements logical conjunction \n\nThe OR gate is a digital logic gate that implements logical disjunction\n\nNOT gate performs logical negation on its input.\n\n\n");
printf("     AND            OR          NOT\n  0  0 = 0      0  0 = 0       0 = 1\n  0  1 = 0      0  1 = 1       1 = 0\n  1  0 = 0      1  0 = 1\n  1  0 = 1      1  1 = 1\n\n\n Choose a gate:\n\n\n(1) AND\n\n(2) OR\n\n(3) NOT\n\n your choice=");
scanf("%d",&gat);
switch(gat){
case 1:printf("Enter two numbers:\n");
scanf("%f",&q);
scanf("%f",&w);
if(q==w){
    printf("true\n\n");break;}
    else{
printf("false\n\n");
break;
    }
case 2:printf("Enter two numbers:\n");
scanf("%f",&q);
scanf("%f",&w);
if(w&&1!=0){
    printf("true\n\n");break;}
    else{
    printf("false\n\n");break;
}

case 3:printf("Enter ONE number:\n");
scanf("%f",&q);
if(q==0){
    printf("true\n\n");
    break;}
    else {printf("flase\n\n");break;}
}
}
void counter(){
system("cls");
char str[20];
printf("\nEnter a string: ");
scanf("%s",&str);

int i, countup=0,countlo=0,num=0,spcl=0;
  for(i=0;i<strlen(str);i++){
     if(isupper(str[i])) countup++;
     else if(islower(str[i])) countlo++;
     else if(str[i]>='0' && str[i]<='9')
        num++;
     else spcl++;
}
  printf("\n\nNumber of upper case letters= ");printf("%d\n\n\n",countup);
  printf("Number of lower case letters= ");printf("%d\n\n\n",countlo);
  printf("Number of numbers= ");printf("%d\n\n\n",num);
  printf("Number of special charecters= ");printf("%d\n\n\n",spcl);

}














