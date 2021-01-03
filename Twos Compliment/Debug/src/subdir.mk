################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Twos\ Compliment.cpp 

OBJS += \
./src/Twos\ Compliment.o 

CPP_DEPS += \
./src/Twos\ Compliment.d 


# Each subdirectory must supply rules for building sources it contributes
src/Twos\ Compliment.o: ../src/Twos\ Compliment.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Twos Compliment.d" -MT"src/Twos\ Compliment.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


