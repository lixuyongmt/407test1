/*
 ============================================================================
 Name        : main.c
 Author      : gagaga
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C
 ============================================================================
 */

#include "led.h"
/*
 *
 * Print a greeting message on standard output and exit.
 *
 * On embedded platforms this might require semi-hosting or similar.
 *
 * For example, for toolchains derived from GNU Tools for Embedded,
 * to enable semi-hosting, the following was added to the linker:
 *
 * --specs=rdimon.specs -Wl,--start-grup -lgcc -lc -lc -lm -lrdimon -Wl,--end-group
 *
 * Adjust it for other toolchains.
 *
 */
void assert_failed(u8* file, u32 line)
{
    printf("\n\r Wrong parameter value detected on\r\n");
    printf("       file  %s\r\n", file);
    printf("       line  %d\r\n", line);
    while (1) ;
}
int
main(void)
{
	delay_init();		  //��ʼ����ʱ����
	LED_Init();		    //��ʼ��LED�˿�

	while(1)
	{
		LED0=0;     //LED0��
		LED1=1;     //LED1��
		LED2=1;     //LED2��

		delay_ms(500);
		LED0=1;     //LED0��
		LED1=0;     //LED1��
		LED2=1;     //LED2��

		delay_ms(500);
		LED0=1;     //LED0��
		LED1=1;     //LED1��
		LED2=0;     //LED2��
		delay_ms(500);
	}
	return 0;
}
