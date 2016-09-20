/**
  ******************************************************************************
  * @file     main.c
  * @author   <FULL NAME>
  * @version  <VERSION>
  * @date     <DATE>
  * @brief    <DESCRIPTION>
  ******************************************************************************
  */
#include <stdio.h>
#include "serial.h"



/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void){
  Init_TI_Board();

  printf("Hello World!\n");

  while(1);   /* endless loop */
}
