#include <stdio.h>
#include <math.h>

int n=1;

// x^3 + 3x- 5;


float functionValue(float x) {
    float res;
    float exp;

    exp = pow(x, 3);
    res = (exp + (3*x*1.0)) - 5;

    return res;
}

int main() {
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);

    float x1, x2, x0, f0, f1, f2, E = 0.01;

    x1 = 1, x2 = 2;

    f1 = functionValue(x1);
    f2 = functionValue(x2);

    if(f1*f2 > 0) {
            printf("X1 and X2 do not bracket any root!");
        goto stop;
    } else {
step4:
        x0 = (x1+x2) /2;
        f0 =functionValue(x0);
    }

    if(f1*f0 < 0) {
        x2 = x0;
    } else {
        x1 = x0;
        f1 = f0;
    }

    if((x2-x1)/x2 < E) {

        x0 = (x1 + x2) / 2;
        printf("Root: ",x0);
        goto stop;

    } else {
        printf("Iteration:" ,n++ ,x0 );
        goto step4;
    }
stop:
    return 0;
}

