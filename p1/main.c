#include <stdio.h>

int main() {
    int a1,a2,a3,b1,b2,b3,f;
    scanf("%d/%d/%d",&a1,&a2,&a3);
    scanf("%d/%d/%d",&b1,&b2,&b3);
    
    if(a1>b2){
        f=1;
    }
        
    else if(a1<b1){
        f=2;
    }
        
    else{
        if(a2>b2){
            f=1;
        }
        else if(a2<b2){
            f=2;
        }
        else{
            if(a3>b3){
                f=1;
            }
            else if(a3<b3){
                f=2;
            }
            else{
                printf("오류");
            }
        }
    }
    
    if(f==1){
        printf("%d/%d/%d",a1,a2,a3);
    }
    else if(f==2){
        printf("%d/%d/%d",b1,b2,b3);
    }
    
    return 0;
}
