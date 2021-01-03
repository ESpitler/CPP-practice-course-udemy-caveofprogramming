################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/String\ Stream\ Practice.cpp 

OBJS += \
./src/String\ Stream\ Practice.o 

CPP_DEPS += \
./src/String\ Stream\ Practice.d 


# Each subdirectory must supply rules for building sources it contributes
src/String\ Stream\ Practice.o: ../src/String\ Stream\ Practice.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/String Stream Practice.d" -MT"src/String\ Stream\ Practice.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


