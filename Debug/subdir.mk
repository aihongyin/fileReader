################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../FileIO.cpp \
../IoRunner.cpp \
../NoodleReview.cpp \
../my_test.cpp 

OBJS += \
./FileIO.o \
./IoRunner.o \
./NoodleReview.o \
./my_test.o 

CPP_DEPS += \
./FileIO.d \
./IoRunner.d \
./NoodleReview.d \
./my_test.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


