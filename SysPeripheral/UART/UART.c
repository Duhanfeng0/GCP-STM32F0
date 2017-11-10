/**
  ******************************************************************************
  * @file    UART.c
  * @author  Duhanfneg
  * @version V1.0
  * @date    2017.11.08
  * @brief   Uart API
  ******************************************************************************
  * @attention
  * 
  * 
  * 
  * 
  ******************************************************************************
  */
  
/***********************************<INCLUDES>**********************************/
#include "UART.h"
#include "../../DataType/DataType.h"
#include "../HAL/HAL_Uart.h"


/*****************************************************************************
 * 串口操作接口
 ****************************************************************************/

/**
  * @brief  串口创建(初始化)
  * @param  None
  * @retval 0-成功  非0-失败
  */
uBit32 UART_Create(uBit8 uUartNode)
{
    HAL_UART_Init(uUartNode, 115200);
    
    return 0;
}


/**
  * @brief  串口打开
  * @param  None
  * @retval 0-成功  非0-失败
  */
uBit32 UART_Open(uBit8 uUartNode)
{
    HAL_UART_Enable(uUartNode, true);
    
    return 0;
}


/**
  * @brief  串口关闭
  * @param  None
  * @retval 0-成功  非0-失败
  */
uBit32 UART_Close(uBit8 uUartNode)
{
    HAL_UART_Enable(uUartNode, false);
    
    return 0;
}


/**
  * @brief  数据接收处理(接收线程)
  * @param  None
  * @retval None
  * @retval 本函数是应用于非中断接收的情况,单独一个线程做数据接收
  */
void UART_RecvHandler(uBit8 uUartNode)
{
    
    
}


/**
  * @brief  串口数据发送(非阻塞)
  * @param  uUartNode 串口节点号
  * @param  pSBuff 数据缓冲区地址
  * @param  nSize 发送的数量
  * @retval None
  */
uBit32 UART_SendBuff(uBit8 uUartNode, uBit8 *pSBuff, uBit32 ulSize)
{
    HAL_UART_DmaSendBuff(uUartNode, pSBuff, ulSize);
    
    return 0;
}


/**
  * @brief  串口接收(非阻塞)
  * @param  uUartNode 串口节点号
  * @param  pRBuff 要接收的缓冲区
  * @param  ulSize 要接收的数据长度
  * @retval uint32_t 实际上接收到的数据长度
  */
uBit32 UART_RecvBuff(uBit8 uUartNode, uBit8 *pRBuff, uBit32 ulSize)
{
    
    return HAL_UART_RecvBuff(uUartNode, pRBuff, ulSize);
}
