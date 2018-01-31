#include <stdio.h>


int main() {
    int c, d, totGrade;
    int arrayAvg[1000];
    double avg, counter;

    scanf("%d", &c);
    while(c--){
        scanf("%d", &d);
        totGrade = 0;
        for(int i = 0; i < d; i++){
            scanf("%d", &arrayAvg[i]);
            totGrade += arrayAvg[i];
        }
        avg = (double) totGrade / d;

        counter = 0.0;
        for(int i = 0; i < d; i++){
            if(arrayAvg[i] > avg) {counter++;}
        }
        double result = (counter/d) * 100;
        printf("%.3f%%\n", result);
    }

    return 0;
}