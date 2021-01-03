################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Pointers\ Practice.cpp 

OBJS += \
./src/Pointers\ Practice.o 

CPP_DEPS += \
./src/Pointers\ Practice.d 


# Each subdirectory must supply rules for building sources it contributes
src/Pointers\ Practice.o: ../src/Pointers\ Practice.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Pointers Practice.d" -MT"src/Pointers\ Practice.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


