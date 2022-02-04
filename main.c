#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int charToString(char ch){
    if(ch>=48 && ch <=57){
        return ch-48;
    }else{
      return -1;
    }
}
int len(char arr[]){
    int k=0;
  for(int i=0;arr[i]!=0;i++){
     k++;
  }
  return k;
}
void fDigit(int f){
    switch(f){
       case 0: printf("Zero");break;
       case 1: printf("One");break;
       case 2: printf("Two");break;
       case 3: printf("Three");break;
       case 4: printf("Four");break;
       case 5: printf("Five");break;
       case 6: printf("Six");break;
       case 7: printf("Sevevn");break;
       case 8:printf("Eight");break;
       case 9: printf("Nine");break;
      

    }
}
void fDigit2(int f) {
  switch(f){
       case 0: printf("");break;
       case 1: printf("One");break;
       case 2: printf("Two");break;
       case 3: printf("Three");break;
       case 4: printf("Four");break;
       case 5: printf("Five");break;
       case 6: printf("Six");break;
       case 7: printf("Sevevn");break;
       case 8:printf("Eight");break;
       case 9: printf("Nine");break;
     

    }
}
void sDigit(int s,int f){
    switch(s){
       case 0: printf("");break;
       case 1:
            switch(f){
                   case 0: printf("Ten");break;
                   case 1: printf("Eleven");break;
                   case 2: printf("Twelve");break;
                   case 3: printf("Thirteen");break;
                   case 4: printf("Fourtenn");break;
                   case 5: printf("Fivfteen");break;
                   case 6: printf("Sixtenn");break;
                   case 7: printf("Seventheen");break;
                   case 8:printf("Eightheen");break;
                   case 9: printf("Ninetheen");break;
                 
          }
        break;
       case 2: printf("Twenty ");break;
       case 3: printf("Thirty ");break;
       case 4: printf("Fourty ");break;
       case 5: printf("Fifty ");break;
       case 6: printf("Sixty ");break;
       case 7: printf("Seventy ");break;
       case 8:printf("Eighty ");break;
       case 9: printf("Ninety ");break;
    
    }

}

void tDigit(int t){
    switch(t){
       case 0: printf("");break;
       case 1: printf("One Hundred and ");break;
       case 2: printf("Two Hundred and ");break;
       case 3: printf("Three Hundred and ");break;
       case 4: printf("Four Hundred and ");break;
       case 5: printf("Five Hundred and ");break;
       case 6: printf("Six Hundred and ");break;
       case 7: printf("Sevevn Hundred and ");break;
       case 8:printf("Eight Hundred and ");break;
       case 9: printf("Nine Hundred and ");break;
     

    }
}

void fthDigit(int fth){
    switch(fth){
       case 0: printf("");break;
       case 1: printf("One Thousand  ");break;
       case 2: printf("Two Thousand  ");break;
       case 3: printf("Three Thousand  ");break;
       case 4: printf("Four Thousand  ");break;
       case 5: printf("Five Thousand  ");break;
       case 6: printf("Six Thousand  ");break;
       case 7: printf("Seven Thousand  ");break;
       case 8:printf("Eight Thousand  ");break;
       case 9: printf("Nine Thousand  ");break;
     

    }
}

void loading(){
  for(int i=0;i<50000;i++){
    printf("\rLoading ... %d",i/5000);
  }
}
int main()
{
   char numInput [10] ; int length;
   printf("Enter 4-Digit Number >> ");
   scanf("%s",&numInput);
   length = len(numInput);

  if(length ==1){
      loading();
      printf("\n");
      fDigit(charToString(numInput[0]));
   }else if(length==2){
          loading();
           printf("\n");
     sDigit(charToString(numInput[0]),charToString(numInput[1]));
   charToString(numInput[0])==1? printf("")  :fDigit2(charToString(numInput[1]));
   
   }else if(length==3){
          loading();
           printf("\n");
        tDigit(charToString(numInput[0]));
        sDigit(charToString(numInput[1]),charToString(numInput[2]));
        charToString(numInput[1])==1? printf(""):fDigit2(charToString(numInput[2]));
   }else if(length==4){
          loading();
           printf("\n");
       fthDigit(charToString(numInput[0]));
        tDigit(charToString(numInput[1]));
        sDigit(charToString(numInput[2]),charToString(numInput[3]));
        charToString(numInput[2])==1? printf(""):fDigit2(charToString(numInput[3]));
   }else{
     system("cls");
        loading();
         printf("\n");
     printf("\t\t\t..........Enter 4 Digit Number .........");
   }

printf("\n");

   //...........................
   getch();
   printf("\n\n");
    return 0;
}
