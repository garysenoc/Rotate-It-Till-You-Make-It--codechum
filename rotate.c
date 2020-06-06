#include <stdio.h>

int main(){

    int a,b,i,j=0,given,st1,st2,num=1;

    scanf("%d %d",&a,&b);

    int arr[a][b];

    for(i=0;i<a;i++)
        for(j=0;j<b;j++)
            scanf("%d",&arr[i][j]);
    scanf("%d",&given);
    given = given % (a * b);

if(given == 0){
    for(i=0;i<a;i++){
         for(j=0;j<b;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }   
}
else{
    given--;
    int a1 = a-1;
    int b2 = b-1;
    a1 = a1 - (given/a);
    b2 = b2 - (given%b);
    st1 = a1;
    st2 = b2;
  while(1){
        printf("%d ",arr[a1][b2]);
        b2++;
        if(b2>=b){
            b2 = 0;
            a1++;
        } 
        if(a1>=a){
          a1 = 0;
      }
      if(num % b == 0)
        printf("\n");
        // if(a1>=a)
        //     a1=0;
      if(a1 == st1 && b2 == st2)
        break;
    num++;
    }

}
}
