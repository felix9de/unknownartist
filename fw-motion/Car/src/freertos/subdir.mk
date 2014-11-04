################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/freertos/croutine.c \
../src/freertos/list.c \
../src/freertos/queue.c \
../src/freertos/tasks.c \
../src/freertos/timers.c 

OBJS += \
./src/freertos/croutine.o \
./src/freertos/list.o \
./src/freertos/queue.o \
./src/freertos/tasks.o \
./src/freertos/timers.o 


# Each subdirectory must supply rules for building sources it contributes
src/freertos/%.o: ../src/freertos/%.c
	@echo 'Building file: $<'
	@echo 'Compiling C source files'
	fcc907s -cpu MB96F348HSB -g -w 5 -INF STACK -INF srcin -T p,-B -x vTaskSwitchContext,vTaskIncrementTick -xauto 30 -c -D __96340 -D RF_DEBUG -D WIRELESS_DEBUG=0 -D __CONFIG__=3 -D DEBUG=1 -I "C:\Users\Felix\git\unknownartist\fw-motion\src\mcu-files" -I "C:\Users\Felix\git\unknownartist\fw-motion\src\freertos\include" -I "C:\Users\Felix\git\unknownartist\fw-motion\src\freertos\portable\Softune\MB96340" -I "C:\Program Files (x86)\Eclipse-ES-ProSem/softune/lib/907/include" -O 4 -K SPEED -K NOUNROLL -K NOLIB -K NOEOPT -K ADDSP -K NOALIAS -B -model MEDIUM -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

