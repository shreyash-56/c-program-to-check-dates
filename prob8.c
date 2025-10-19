 /*Write a structure capable of storing date. Write a function to compare those dates.*/
 
 #include <stdio.h>
 
 typedef struct dates{
   int day;
   int month;
   int year;
 }date;
 
 void compare(date(d1),date(d2)){
   if( d1.year> d2.year){
      printf("the date %d|%d|%d is greater ",d1.day,d1.month,d1.year);
   }
   else if( d2.year> d1.year){
      printf("the date %d|%d|%d is greater ",d2.day,d2.month,d2.year);
   }
   if(d1.year==d2.year){
      if(d1.month> d2.month){
      printf("the date %d|%d|%d is greater ",d1.day,d1.month,d1.year);
      }
      else if (d2.month>d1.month){
         printf("the date %d|%d|%d is greater ",d2.day,d2.month,d2.year);
      }
      if(d1.month==d2.month){
         if(d1.day>d2.day){
            printf("the date %d|%d|%d is greater ",d1.day,d1.month,d1.year);
         }
         else if (d1.day<d2.day){
            printf("the date %d|%d|%d is greater ",d2.day,d2.month,d2.year);
         }
         else if(d1.day==d2.day){
            printf("the dtes are equal and u ar a foool");
         }
      }
   }
   
 }
 
 
 
 int main(){
    date d1={19,10,2025};
    date d2={19,10,2025};
    compare(d1,d2);
    return 0;
 }