
WARN=-Wall -Wextra -Wno-unused-function -Wno-unused-parameter

# freestanding using any recent clang build
# CC=clang
# CFLAGS=--target=riscv64 -march=rv64gcv_zfh -O3 ${WARN} -nostdlib -fno-builtin -ffreestanding

# This is meant to specify the toolchain prefix to ensure compatibility across distros.
CROSS_COMPILE ?= riscv64-unknown-linux-gnu-
# This is meant to override configuration definitions in `bench/config.h`
CONFIG_FLAGS ?= -DMAX_MEM=33554432 # 1024*1024*32

# full cross compilation toolchain
CC		  = ${CROSS_COMPILE}gcc
OBJDUMP   = ${CROSS_COMPILE}objdump
OBJCOPY   = ${CROSS_COMPILE}objcopy
AS		  = ${CROSS_COMPILE}gcc
LD 		  = ${CROSS_COMPILE}ld
CFLAGS = ${CONFIG_FLAGS} -march=rv64gv -mcmodel=medany -fno-builtin -nostdlib -ffreestanding -O3 -MMD -Wall ${WARN}

# native build
#CC=cc
#CFLAGS=-march=rv64gcv -O3 ${WARN}
