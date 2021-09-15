#include <stdio.h>
#include <math.h>
#include <ctype.h>
double celsiusToFahrenheit(double celcius){
    double ans = (1.80*celcius)+32;
    return ans;
}
double fahrenheitToCelcius(double fahrenheit){
    double ans = (fahrenheit-32)/1.8;
    return ans;
}
void printFarenheit(double fahrenheit){
    printf("%.2f f",celsiusToFahrenheit(fahrenheit));
}
void printCelcius(double celcius){
    printf("%.2f c",fahrenheitToCelcius(celcius));
}
int main(){
    double temperature;
    char c_or_f;
    scanf("%lf %c",&temperature,&c_or_f);
    c_or_f = tolower(c_or_f);
    if (c_or_f == 'c'){
        printFarenheit(temperature);
    }
    else{
        printCelcius(temperature);
    }
}