// Vaibhav Malviya
#include <stdio.h>
#include <string.h>

int main() {
    char time[10];
    scanf("%s", time);

    int hh = (time[0]-'0')*10 + (time[1]-'0');
    int mm = (time[3]-'0')*10 + (time[4]-'0');
    int ss = (time[6]-'0')*10 + (time[7]-'0');

    if(time[8] == 'A') {
        if(hh == 12) hh = 0;
    } else {
        if(hh != 12) hh += 12;
    }

    printf("%02d:%02d:%02d\n", hh, mm, ss);
    return 0;
}
