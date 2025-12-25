#include<stdio.h>
int main(){
    int h,m,s,next_minute;
    scanf("%d %d %d",&h,&m,&s);
    printf("Hour:%d\nMinute:%d\nSecond:%d\n",h,m,s);
    scanf("%d",&next_minute);
    m = next_minute + m;
    if(m>=60||m<=120){
        h = h + (m/60);
        m =   m%60;
    }
    if (h >= 24) {
        h = h % 24;
    }
    printf("Hour:%d\nMinute:%d\nSecond:%d\n", h, m, s);  
    return 0;

    
}