################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Bird\ of\ Prey.cpp \
../src/Brel.cpp 

OBJS += \
./src/Bird\ of\ Prey.o \
./src/Brel.o 

CPP_DEPS += \
./src/Bird\ of\ Prey.d \
./src/Brel.d 


# Each subdirectory must supply rules for building sources it contributes
src/Bird\ of\ Prey.o: ../src/Bird\ of\ Prey.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Bird of Prey.d" -MT"src/Bird\ of\ Prey.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


