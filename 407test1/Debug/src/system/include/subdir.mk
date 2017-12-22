################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/system/include/system_stm32f4xx.c 

OBJS += \
./src/system/include/system_stm32f4xx.o 

C_DEPS += \
./src/system/include/system_stm32f4xx.d 


# Each subdirectory must supply rules for building sources it contributes
src/system/include/%.o: ../src/system/include/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -DSTM32F407xx -DSTM32F40_41xxx -DUSE_STDPERIPH_DRIVER -I"E:\eclipse_workspace\407test1\src\system\include" -I"E:\eclipse_workspace\407test1\src\cmsis\include" -I"E:\eclipse_workspace\407test1\src\STM32F4_FWLIB\inc" -I"E:\eclipse_workspace\407test1\src\LED" -I"E:\eclipse_workspace\407test1\src\Common" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


