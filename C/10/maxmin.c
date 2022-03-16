#include <math.h>

struct piste {
    int x;
    int y;
};

struct laatikko {
    struct piste max;
    struct piste min;
    struct piste pisteet[10];
};

void etsi_maxmin(struct laatikko *box);

void etsi_maxmin(struct laatikko *box) {
    int i;
    box->max.x = 0;
    box->max.y = 0;
    box->min.x = 99;
    box->min.y = 99;

    for (i = 0; i < 10; i++) {
        //Etsitään maksimipisteet
        if (sqrt(pow(box->pisteet[i].x, 2) + pow(box->pisteet[i].y, 2)) >
        sqrt(pow(box->max.x, 2) + pow(box->max.y, 2))) {
            box->max.x = box->pisteet[i].x;
            box->max.y = box->pisteet[i].y;
        }
        //Etsitään minimipisteet
        if (sqrt(pow(box->pisteet[i].x, 2) + pow(box->pisteet[i].y, 2)) <
        sqrt(pow(box->min.x, 2) + pow(box->min.y, 2))) {
            box->min.x = box->pisteet[i].x;
            box->min.y = box->pisteet[i].y;
        }
    }
}