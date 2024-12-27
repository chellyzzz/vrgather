#include <math.h>
#include <sim.h>
#include <stdio.h>

#define VLEN 2048
#define XLEN 64

typedef unsigned short half;

float half_to_float(half h) {
    unsigned short sign = (h >> 15) & 0x1;
    unsigned short exponent = (h >> 10) & 0x1F;
    unsigned short mantissa = h & 0x3FF;

    if (exponent == 0) {
        if (mantissa == 0) {
            return sign ? -0.0f : 0.0f;  // +0 or -0
        }
        else {
            return sign ? -pow(2, -14) * (mantissa / 1024.0f) : pow(2, -14) * (mantissa / 1024.0f);
        }
    }
    else if (exponent == 31)
    {
        if (mantissa == 0) {
            return sign ? -INFINITY : INFINITY;
        } else {
            return NAN;
        }    
    }
    
    //IEEE 754
    float result = (1.0f + mantissa / 1024.0f) * pow(2, exponent - 15);
    return sign ? -result : result;

}

// For VLEN = 256
void fp16_print(uint64_t *src, uint64_t vlen, uint64_t xlen){
    if (src == NULL) {
        printf("Error: Null pointer passed to fp16_print\n");
        return;
    }
    for (int j = vlen/xlen -1; j >= 0; j--){
        for(int k = xlen/16 - 1; k >= 0; k--){
            printf("%12.4f ", half_to_float((src[j] >> 16*k) & 0xffff));
        }
        if(j%4 == 0){
            printf("\n");
        }
    }
}

void uint64_print(uint64_t *src, uint64_t vlen, uint64_t xlen){
    if (src == NULL) {
        printf("Error: Null pointer passed to fp16_print\n");
        return;
    }
    for (int j = vlen/xlen -1; j >= 0; j--){
            printf("%ld ", src[j]);
    }
    printf("\n");
}

void int8_print(uint64_t *src, uint64_t vlen, uint64_t xlen){
    if (src == NULL) {
        printf("Error: Null pointer passed to fp16_print\n");
        return;
    }
    for (int j = vlen/xlen -1; j >= 0; j--){
        for(int k = xlen/8 - 1; k >= 0; k--){
            printf("%6d", (int8_t)((src[j] >> 8*k) & 0xff));
        }
        if(j%4 == 0){
            printf("\n");
        }
    }
}

void int16_print(uint64_t *src, uint64_t vlen, uint64_t xlen){
    if (src == NULL) {
        printf("Error: Null pointer passed to fp16_print\n");
        return;
    }
    for (int j = vlen/xlen -1; j >= 0; j--){
        for(int k = xlen/16 - 1; k >= 0; k--){
            printf("%10d", (int16_t)((src[j] >> 16*k) & 0xffff));
        }
        if(j%4 == 0){
            printf("\n");
        }
    }
}