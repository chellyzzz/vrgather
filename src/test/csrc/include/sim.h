#ifndef __SIM_H__
#define __SIM_H__

#include <bits/types.h>

void single_cycle();
void reset(int n);
void sim_init(int argc, char *argv[]);
void sim_exit();

void sim_main(int argc, char *argv[]);

typedef __uint64_t uint64_t;


typedef struct {
    uint64_t index_data[32];
    uint64_t table_data[32];
    uint64_t res_data[32];
} IO_t;
#endif