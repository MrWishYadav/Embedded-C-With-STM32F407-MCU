################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
BUTTON_ISR.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
BUTTON_ISR.list \

OBJCOPY_BIN += \
BUTTON_ISR.bin \


# All Target
all: BUTTON_ISR.elf secondary-outputs

# Tool invocations
BUTTON_ISR.elf: $(OBJS) $(USER_OBJS) C:\Users\visha\Desktop\Embedded_c\my_workspace\Target\BUTTON_ISR\STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "BUTTON_ISR.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\visha\Desktop\Embedded_c\my_workspace\Target\BUTTON_ISR\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="BUTTON_ISR.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

BUTTON_ISR.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "BUTTON_ISR.list"
	@echo 'Finished building: $@'
	@echo ' '

BUTTON_ISR.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "BUTTON_ISR.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
