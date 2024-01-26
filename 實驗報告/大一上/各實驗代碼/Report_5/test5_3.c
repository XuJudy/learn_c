#include <stdio.h>

struct FlightTime{

    int departure;
    int arriving;
} flight[] = {
    {0, 0},
    {480, 616},
    {583, 712},
    {679, 811},
    {767, 900},
    {840, 968},
    {945, 1075},
    {1140, 1280},
    {1305, 1438}
};

int main(){
    
    int i, hour, minute;
    int input_minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    input_minutes = hour*60 + minute;

    for (int i=0; i<8; i++) {

        if (input_minutes>flight[i].departure && input_minutes<flight[i + 1].departure)
            break;
    }

    if (input_minutes-flight[i].departure < flight[i + 1].departure-input_minutes) {

        printf("Closest departure time is %d:%02d ", 
               ((flight[i].departure % 720)/60==0)? 12 : (flight[i].departure % 720)/60,
               flight[i].departure % 60);

        printf("%s", (flight[i].departure<720)? "a.m." : "p.m.");

        printf(", arriving at %d:%02d ", 
               ((flight[i].departure % 720)/60==0)? 12 : (flight[i].departure % 720)/60,
               flight[i].departure % 60);

        printf("%s\n", (flight[i].departure<720)? "a.m." : "p.m.");
    }
    else {
        printf("Closest departure time is %d:%02d ", 
            (flight[i + 1].departure % 720) / 60 == 0 ? 12 : (flight[i + 1].departure % 720) / 60,
            flight[i + 1].departure % 60);
        printf("%s", flight[i + 1].departure < 720 ? "a.m." : "p.m.");

        printf(", arriving at %d:%02d ", 
            (flight[i + 1].arriving % 720) / 60 == 0 ? 12 : (flight[i + 1].arriving % 720) / 60,
            flight[i + 1].arriving % 60);
        printf("%s\n", flight[i + 1].arriving < 720 ? "a.m." : "p.m.");
    }

    return 0;
}