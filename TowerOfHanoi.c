#include<stdio.h>
#include<conio.h>
  void hanoi(char from,char to,char other,int n){
  if(n>0){
    hanoi(from,other,to,n-1);
    printf("%c -> %c\n",from,to);
    hanoi(other, to,from,n-1);
    }
    }
  int main() {
  int n;
  printf("Enter an integer :");
  scanf("%d",&n);
  hanoi('A','C','B',n);
  getch();
  return 0;
  }
