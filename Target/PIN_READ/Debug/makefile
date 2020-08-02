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
PIN_READ.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
PIN_READ.list \

OBJCOPY_BIN += \
PIN_READ.bin \


# All Target
all: PIN_READ.elf secondary-outputs

# Tool invocations
PIN_READ.elf: $(OBJS) $(USER_OBJS) C:\Users\visha\Desktop\Embedded_c\my_workspace\Target\PIN_READ\STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "PIN_READ.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\visha\Desktop\Embedded_c\my_workspace\Target\PIN_READ\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="PIN_READ.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

PIN_READ.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "PIN_READ.list"
	@echo 'Finished building: $@'
	@echo ' '

PIN_READ.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "PIN_READ.bin"
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
