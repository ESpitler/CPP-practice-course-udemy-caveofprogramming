################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Headers\ and\ prototypes.cpp 

OBJS += \
./src/Headers\ and\ prototypes.o 

CPP_DEPS += \
./src/Headers\ and\ prototypes.d 


# Each subdirectory must supply rules for building sources it contributes
src/Headers\ and\ prototypes.o: ../src/Headers\ and\ prototypes.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Headers and prototypes.d" -MT"src/Headers\ and\ prototypes.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


