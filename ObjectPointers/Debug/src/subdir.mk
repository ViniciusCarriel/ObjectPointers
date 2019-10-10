################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Course.cpp \
../src/Lab2.cpp \
../src/Person.cpp \
../src/Student.cpp \
../src/Teacher.cpp 

OBJS += \
./src/Course.o \
./src/Lab2.o \
./src/Person.o \
./src/Student.o \
./src/Teacher.o 

CPP_DEPS += \
./src/Course.d \
./src/Lab2.d \
./src/Person.d \
./src/Student.d \
./src/Teacher.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	aarch64-linux-gnu-g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


