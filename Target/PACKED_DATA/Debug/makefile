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
PACKED_DATA.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
PACKED_DATA.list \

OBJCOPY_BIN += \
PACKED_DATA.bin \


# All Target
all: PACKED_DATA.elf secondary-outputs

# Tool invocations
PACKED_DATA.elf: $(OBJS) $(USER_OBJS) C:\Users\visha\Desktop\Embedded_c\my_workspace\Target\PACKED_DATA\STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "PACKED_DATA.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\visha\Desktop\Embedded_c\my_workspace\Target\PACKED_DATA\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="PACKED_DATA.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

PACKED_DATA.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "PACKED_DATA.list"
	@echo 'Finished building: $@'
	@echo ' '

PACKED_DATA.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "PACKED_DATA.bin"
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
