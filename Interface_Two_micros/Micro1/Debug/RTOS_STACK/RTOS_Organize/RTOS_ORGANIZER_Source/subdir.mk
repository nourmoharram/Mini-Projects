################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTOS_STACK/RTOS_Organize/RTOS_ORGANIZER_Source/RTOS_Program.c 

OBJS += \
./RTOS_STACK/RTOS_Organize/RTOS_ORGANIZER_Source/RTOS_Program.o 

C_DEPS += \
./RTOS_STACK/RTOS_Organize/RTOS_ORGANIZER_Source/RTOS_Program.d 


# Each subdirectory must supply rules for building sources it contributes
RTOS_STACK/RTOS_Organize/RTOS_ORGANIZER_Source/%.o: ../RTOS_STACK/RTOS_Organize/RTOS_ORGANIZER_Source/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


