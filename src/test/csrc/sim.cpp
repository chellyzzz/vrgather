// sim_c/sim.cc
#include <iostream>
#include <bitset>

#include <verilated.h>
#include "Vtop.h"
#include "fp.h"

#define VCD 1
#ifdef VCD
    #include "verilated_vcd_c.h"
    VerilatedVcdC* tfp = nullptr;
#endif

#include "sim.h"

using namespace std; 

// init pointers
const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
const std::unique_ptr<Vtop> top{new Vtop{contextp.get(), "TOP"}};

IO_t io;

/* sim initial */
void sim_init(int argc, char *argv[]) {
    top->reset = 1;
    top->clock = 0;
#ifdef VCD
    Verilated::mkdir("logs");
    contextp->traceEverOn(true);
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("logs/top.vcd");
#endif
    Verilated::commandArgs(argc,argv);
}

/* sim exit */
void sim_exit() {
    // finish work, delete pointer
    top->final();
#if VCD
    tfp->close();
    tfp = nullptr;
#endif
}

void get_output();
void single_cycle() {
    contextp->timeInc(1);
    top->clock = 0; top->eval();
#ifdef VCD
 tfp->dump(contextp->time());
#endif

    contextp->timeInc(1);
    top->clock = 1; top->eval();
    get_output();

#ifdef VCD
 tfp->dump(contextp->time());
#endif
}

void reset(int n) {
    top->reset = 1;
    while (n-- > 0) single_cycle();
    top->reset = 0;
    top->eval();
}

void display(){
    printf("---------new sample-----------\n");
    // printf("index_data:\n");    
    // int8_print(io.index_data, VLEN, XLEN);
    // printf("table_data:\n");
    // int8_print(io.table_data, VLEN, XLEN);
    // printf("res_data:\n");
    // int8_print(io.res_data, VLEN, XLEN);

    printf("index_data:\n");    
    int16_print(io.index_data, VLEN, XLEN);
    printf("table_data:\n");
    int16_print(io.table_data, VLEN, XLEN);
    printf("res_data:\n");
    int16_print(io.res_data, VLEN, XLEN);

}

uint64_t rand64() {
  uint64_t tmp = rand();
  tmp = (tmp << 32) + (uint32_t) rand();
  return tmp;
}

void gen_rand_input() {
    top->io_sew = 1;
    for (int i = 0; i < 32; i++) {
        io.index_data[i] = (rand() % 5);
        io.table_data[i] = rand64();
    }
    top->io_index_data_0  = io.index_data[0];
    top->io_index_data_1  = io.index_data[1];
    top->io_index_data_2  = io.index_data[2];
    top->io_index_data_3  = io.index_data[3];
    top->io_index_data_4  = io.index_data[4];
    top->io_index_data_5  = io.index_data[5];
    top->io_index_data_6  = io.index_data[6];
    top->io_index_data_7  = io.index_data[7];
    top->io_index_data_8  = io.index_data[8];
    top->io_index_data_9  = io.index_data[9];
    top->io_index_data_10 = io.index_data[10];
    top->io_index_data_11 = io.index_data[11];
    top->io_index_data_12 = io.index_data[12];
    top->io_index_data_13 = io.index_data[13];
    top->io_index_data_14 = io.index_data[14];
    top->io_index_data_15 = io.index_data[15];
    top->io_index_data_16 = io.index_data[16];
    top->io_index_data_17 = io.index_data[17];
    top->io_index_data_18 = io.index_data[18];
    top->io_index_data_19 = io.index_data[19];
    top->io_index_data_20 = io.index_data[20];
    top->io_index_data_21 = io.index_data[21];
    top->io_index_data_22 = io.index_data[22];
    top->io_index_data_23 = io.index_data[23];
    top->io_index_data_24 = io.index_data[24];
    top->io_index_data_25 = io.index_data[25];
    top->io_index_data_26 = io.index_data[26];
    top->io_index_data_27 = io.index_data[27];
    top->io_index_data_28 = io.index_data[28];
    top->io_index_data_29 = io.index_data[29];
    top->io_index_data_30 = io.index_data[30];
    top->io_index_data_31 = io.index_data[31];

    top->io_table_data_0 =  io.table_data[0];
    top->io_table_data_1 =  io.table_data[1];
    top->io_table_data_2 =  io.table_data[2];
    top->io_table_data_3 =  io.table_data[3];
    top->io_table_data_4 =  io.table_data[4];
    top->io_table_data_5 =  io.table_data[5];
    top->io_table_data_6 =  io.table_data[6];
    top->io_table_data_7 =  io.table_data[7];
    top->io_table_data_8 =  io.table_data[8];
    top->io_table_data_9 =  io.table_data[9];
    top->io_table_data_10 = io.table_data[10];
    top->io_table_data_11 = io.table_data[11];
    top->io_table_data_12 = io.table_data[12];
    top->io_table_data_13 = io.table_data[13];
    top->io_table_data_14 = io.table_data[14];
    top->io_table_data_15 = io.table_data[15];
    top->io_table_data_16 = io.table_data[16];
    top->io_table_data_17 = io.table_data[17];
    top->io_table_data_18 = io.table_data[18];
    top->io_table_data_19 = io.table_data[19];
    top->io_table_data_20 = io.table_data[20];
    top->io_table_data_21 = io.table_data[21];
    top->io_table_data_22 = io.table_data[22];
    top->io_table_data_23 = io.table_data[23];
    top->io_table_data_24 = io.table_data[24];
    top->io_table_data_25 = io.table_data[25];
    top->io_table_data_26 = io.table_data[26];
    top->io_table_data_27 = io.table_data[27];
    top->io_table_data_28 = io.table_data[28];
    top->io_table_data_29 = io.table_data[29];
    top->io_table_data_30 = io.table_data[30];
    top->io_table_data_31 = io.table_data[31];
}

void get_output() {
    io.res_data[0] = top->io_res_data_0;
    io.res_data[1] = top->io_res_data_1;
    io.res_data[2] = top->io_res_data_2;
    io.res_data[3] = top->io_res_data_3;
    io.res_data[4] = top->io_res_data_4;
    io.res_data[5] = top->io_res_data_5;
    io.res_data[6] = top->io_res_data_6;
    io.res_data[7] = top->io_res_data_7;
    io.res_data[8] = top->io_res_data_8;
    io.res_data[9] = top->io_res_data_9;
    io.res_data[10] = top->io_res_data_10;
    io.res_data[11] = top->io_res_data_11;
    io.res_data[12] = top->io_res_data_12;
    io.res_data[13] = top->io_res_data_13;
    io.res_data[14] = top->io_res_data_14;
    io.res_data[15] = top->io_res_data_15;
    io.res_data[16] = top->io_res_data_16;
    io.res_data[17] = top->io_res_data_17;
    io.res_data[18] = top->io_res_data_18;
    io.res_data[19] = top->io_res_data_19;
    io.res_data[20] = top->io_res_data_20;
    io.res_data[21] = top->io_res_data_21;
    io.res_data[22] = top->io_res_data_22;
    io.res_data[23] = top->io_res_data_23;
    io.res_data[24] = top->io_res_data_24;
    io.res_data[25] = top->io_res_data_25;
    io.res_data[26] = top->io_res_data_26;
    io.res_data[27] = top->io_res_data_27;
    io.res_data[28] = top->io_res_data_28;
    io.res_data[29] = top->io_res_data_29;
    io.res_data[30] = top->io_res_data_30;
    io.res_data[31] = top->io_res_data_31;
    display();
}   
void sim_main(int argc, char *argv[]) {
    sim_init(argc, argv);
    reset(10);

    /* main loop */
    while (!contextp->gotFinish()) {
    for (int i = 0; i < 10; i++) {
            gen_rand_input();
            single_cycle();
        }
        break;
        // single_cycle();
    }

    sim_exit();
}