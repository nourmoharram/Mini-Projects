################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/UART/UART_Source/subdir.mk
-include MCAL/PORT/PORT_Source/subdir.mk
-include MCAL/DIO/DIO_Source/subdir.mk
-include MCAL/ADC/Source/subdir.mk
-include HAL/LCD/subdir.mk
-include HAL/Keypad/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Micro_controller_2.lss \

FLASH_IMAGE += \
Micro_controller_2.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: Micro_controller_2.elf secondary-outputs

# Tool invocations
Micro_controller_2.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Micro_controller_2.map -mmcu=atmega32 -o "Micro_controller_2.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Micro_controller_2.lss: Micro_controller_2.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Micro_controller_2.elf  >"Micro_controller_2.lss"
	@echo 'Finished building: $@'
	@echo ' '

Micro_controller_2.hex: Micro_controller_2.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Micro_controller_2.elf  "Micro_controller_2.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Micro_controller_2.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Micro_controller_2.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Micro_controller_2.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
