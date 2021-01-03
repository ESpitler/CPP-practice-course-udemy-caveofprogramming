################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Static\ Keyword.cpp 

OBJS += \
./src/Static\ Keyword.o 

CPP_DEPS += \
./src/Static\ Keyword.d 


# Each subdirectory must supply rules for building sources it contributes
src/Static\ Keyword.o: ../src/Static\ Keyword.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Static Keyword.d" -MT"src/Static\ Keyword.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


