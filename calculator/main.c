#include <stdio.h>
int main(int argc, const char * argv[]) {
    int n1,n2,res;
    char a;
    printf("enter operation=");
    scanf("%c",&a);
    
    if (a=='*'){
        printf("enter number 1 =");
        scanf("%d",&n1);
        printf("enter number 2 =");
        scanf("%d",&n2);
        res = n1 * n2;
        printf("%d",res);
    }
   else if (a=='+'){

       printf("enter number 1 =");
       scanf("%d",&n1);
       printf("enter number 2 =");
       scanf("%d",&n2);
       res = n1 + n2;
       
        printf(" %d",res);
    }
  else  if (a=='-'){
      printf("enter number 1 =");
      scanf("%d",&n1);
      printf("enter number 2 =");
      scanf("%d",&n2);
      
        res = n1-n2;
        printf("%d",res);
    }
    else if (a=='%'){
        printf("enter number 1 =");
        scanf("%d",&n1);
        printf("enter number 2 =");
        scanf("%d",&n2);
        
        res = n1%n2;
        printf("%d",res);
    }
    else if ( a== '/'){
        printf("enter number 1 =");
        scanf("%d",&n1);
        printf("enter number 2 =");
        scanf("%d",&n2);
        
        res = n1/n2;
        printf("%d",res);
    
        }
    else {
        printf("please enter valid operation;");
    }
    return 0;
}
