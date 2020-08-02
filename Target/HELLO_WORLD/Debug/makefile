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
HELLO_WORLD.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
HELLO_WORLD.list \

OBJCOPY_BIN += \
HELLO_WORLD.bin \


# All Target
all: HELLO_WORLD.elf secondary-outputs

# Tool invocations
HELLO_WORLD.elf: $(OBJS) $(USER_OBJS) C:\Users\visha\Desktop\Embedded_c\my_workspace\Target\HELLO_WORLD\STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "HELLO_WORLD.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\visha\Desktop\Embedded_c\my_workspace\Target\HELLO_WORLD\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="HELLO_WORLD.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

HELLO_WORLD.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "HELLO_WORLD.list"
	@echo 'Finished building: $@'
	@echo ' '

HELLO_WORLD.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "HELLO_WORLD.bin"
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
