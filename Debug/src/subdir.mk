################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Divide\ and\ Conquer.cpp 

OBJS += \
./src/Divide\ and\ Conquer.o 

CPP_DEPS += \
./src/Divide\ and\ Conquer.d 


# Each subdirectory must supply rules for building sources it contributes
src/Divide\ and\ Conquer.o: ../src/Divide\ and\ Conquer.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Divide and Conquer.d" -MT"src/Divide\ and\ Conquer.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


