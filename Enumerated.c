#include<stdio.h>
enum threat_level_t{LOW, GUARDED, ELEVATED, HIGH, SEVERE};
//two helper functions
//打印与枚举类型相关的字符串
void printThreat(enum threat_level_t threat){
    switch(threat) {
        case LOW:
        printf("Green/LOW.\n");
        break;
        case GUARDED:
        printf("Blue/Guarded.\n");
        break;
        case ELEVATED:
        printf("Yellow/Elevated.\n");
        break;
        case HIGH:
        printf("Orange/High.\n");
        break;
        case SEVERE:
        printf("Red/Severe.\n");
        break;
    }
}

//
void printShoes(enum threat_level_t currThreat){
    if (currThreat >= ELEVATED) {
        printf("Please take off your shoes.\n");
    }else{
        printf("Please leave your shoes on. \n");
    }
}

int main(){
    enum threat_level_t myThreat = HIGH;//声明一个新的威胁等级叫做myThreat并初始化为枚举类型，赋值为3.
    printf("Current threat level is:\n");
    printThreat(myThreat);
    printShoes(myThreat);
    return 0;
}