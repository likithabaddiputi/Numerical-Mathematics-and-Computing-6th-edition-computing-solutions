#include<stdio.h>
#define PI 3.141
int main()
{   
    float ra_f=7000.0f;
    float rb_f=ra_f+0.000001f;
    float va_f=(4.0f/3.0f)*PI*ra_f*ra_f*ra_f;
    float vb_f=(4.0f/3.0f)*PI*rb_f*rb_f*rb_f;
    float delta1_f=vb_f-va_f;
    float delta2_f=(4.0f/3.0f)*PI*(rb_f-ra_f)*(rb_f*rb_f+rb_f*ra_f+ra_f*ra_f);
    float h_f=rb_f-ra_f;
    float delta3_f=4.0f*PI*ra_f*ra_f*h_f;
    double ra_d=7000.0;
    double rb_d=ra_d+0.000001;
    double va_d=(4.0/3.0)*PI*ra_d*ra_d*ra_d;
    double vb_d=(4.0/3.0)*PI*rb_d*rb_d*rb_d;
    double delta1_d=vb_d-va_d;
    double delta2_d=(4.0/3.0)*PI*(rb_d-ra_d)*(rb_d*rb_d+rb_d*ra_d+ra_d*ra_d);
    double h_d=rb_d-ra_d;
    double delta3_d=4.0*PI*ra_d*ra_d*h_d;
    printf("Radius A: %f\n",ra_f);
    printf("Radius B: %f\n",rb_f);
    printf("Volume A: %f\n",va_f);
    printf("Volume B: %f\n",vb_f);
    printf("Volume Difference: %f\n",delta1_f);
    printf("Volume Difference 2: %f\n",delta2_f);
    printf("Surface Area Difference: %f\n",delta3_f);
    printf("Radius A: %f\n",ra_d);
    printf("Radius B: %f\n",rb_d);
    printf("Volume A: %f\n",va_d);
    printf("Volume B: %f\n",vb_d);
    printf("Volume Difference: %lf\n",delta1_d);
    printf("Volume Difference 2: %lf\n",delta2_d);
    printf("Surface Area Difference: %lf",delta3_d);
    return 0;
}
