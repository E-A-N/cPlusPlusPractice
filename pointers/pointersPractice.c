#include <stdio.h>
/*
    TakeAway:
      Pointers are similar to a shortcut file in windows.  The file is only meant
      to point to another location, but at the same time the shortcut itself is still
      in a location.
    In essense:
      int folder = 99; //this is the actual folder
      int *shortcut = &folder; //this would a shortcut icon on the desktop, the shortcut is the location of the folder
      int *shortcutLocation = &shortcut; //this is the location of the shortcut
*/

void displayValue(int val){
    int newVal = val;
    printf("The value is: %d\n", newVal);
}

int main(){
  
  int val = 5;
  int *valPtr = &val;
  int pal = val;
  
  printf("Hello Robo! <3 %d \n", val);
  printf("Current Val is: %d \n",pal);
  
  val = 10;
  
  printf("New Val is: %d\n",*valPtr);
  
  displayValue(val);
  displayValue(*valPtr);
  displayValue(pal);  
  
  return 0;
}
