#include <stdio.h>
#include <string.h>
    struct Weather {
        char outlook[9]; //outlook{overcast,sunny,rain}
        int temperature;
        int humidity;
        char wind; //wind{T,F}
    };
void playing_decision(struct Weather day);
int main(){
   
    int num;
    scanf("%d",&num);
    struct Weather day[num];
    for (int i =0; i<num ;i++){
        scanf("%s %d %d %c",&day[i].outlook,&day[i].temperature,&day[i].humidity,&day[i].wind);
        playing_decision(day[i]);
    }
    return 0;

}
void playing_decision(struct Weather day){
    if (day.outlook[0] == 'o')
        printf("yes\n");
    else if (day.outlook[0] == 'r'){
        if (day.wind == 'F')
            printf("yes\n");
        else
            printf("no\n");
    }
    else{
        if(day.humidity > 77.5)
            printf("no\n");
        else
            printf("yes\n");
    }

}