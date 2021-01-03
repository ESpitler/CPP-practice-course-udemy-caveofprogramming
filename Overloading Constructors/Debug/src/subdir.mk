################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Overloading\ Constructors.cpp \
../src/Person.cpp 

OBJS += \
./src/Overloading\ Constructors.o \
./src/Person.o 

CPP_DEPS += \
./src/Overloading\ Constructors.d \
./src/Person.d 


# Each subdirectory must supply rules for building sources it contributes
src/Overloading\ Constructors.o: ../src/Overloading\ Constructors.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Overloading Constructors.d" -MT"src/Overloading\ Constructors.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


