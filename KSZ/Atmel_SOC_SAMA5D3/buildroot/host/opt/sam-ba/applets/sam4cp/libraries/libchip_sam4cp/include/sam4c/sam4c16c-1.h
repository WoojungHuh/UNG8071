/* ----------------------------------------------------------------------------
 *         SAM Software Package License
 * ----------------------------------------------------------------------------
 * Copyright (c) 2012, Atmel Corporation
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the disclaimer below.
 *
 * Atmel's name may not be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * DISCLAIMER: THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ----------------------------------------------------------------------------
 */

#ifndef _SAM4C16C_
#define _SAM4C16C_
 
/** \addtogroup SAM4C16C_definitions SAM4C16C definitions
  This file defines all structures and symbols for SAM4C16C:
    - registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions
*/
/*@{*/

#ifdef __cplusplus
 extern "C" {
#endif 

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#include <stdint.h>
#ifndef __cplusplus
typedef volatile const uint32_t RoReg; /**< Read only 32-bit register (volatile const unsigned int) */
#else
typedef volatile       uint32_t RoReg; /**< Read only 32-bit register (volatile const unsigned int) */
#endif
typedef volatile       uint32_t WoReg; /**< Write only 32-bit register (volatile unsigned int) */
typedef volatile       uint32_t RwReg; /**< Read-Write 32-bit register (volatile unsigned int) */
#endif

/* ************************************************************************** */
/*   CMSIS DEFINITIONS FOR SAM4C16C */
/* ************************************************************************** */
/** \addtogroup SAM4C16C_cmsis CMSIS Definitions */
/*@{*/

/**< Interrupt Number Definition */
typedef enum IRQn
{
/******  Cortex-M4 Processor Exceptions Numbers ******************************/
  NonMaskableInt_IRQn   = -14, /**<  2 Non Maskable Interrupt                */
  MemoryManagement_IRQn = -12, /**<  4 Cortex-M4 Memory Management Interrupt */
  BusFault_IRQn         = -11, /**<  5 Cortex-M4 Bus Fault Interrupt         */
  UsageFault_IRQn       = -10, /**<  6 Cortex-M4 Usage Fault Interrupt       */
  SVCall_IRQn           = -5,  /**< 11 Cortex-M4 SV Call Interrupt           */
  DebugMonitor_IRQn     = -4,  /**< 12 Cortex-M4 Debug Monitor Interrupt     */
  PendSV_IRQn           = -2,  /**< 14 Cortex-M4 Pend SV Interrupt           */
  SysTick_IRQn          = -1,  /**< 15 Cortex-M4 System Tick Interrupt       */
/******  SAM4C16C specific Interrupt Numbers *********************************/
  
  SUPC_IRQn            =  0, /**<  0 SAM4C16C Supply Controller (SUPC) */
  RSTC_IRQn            =  1, /**<  1 SAM4C16C Reset Controller (RSTC) */
  RTC_IRQn             =  2, /**<  2 SAM4C16C Real Time Clock (RTC) */
  RTT_IRQn             =  3, /**<  3 SAM4C16C Real Time Timer (RTT) */
  WDT_IRQn             =  4, /**<  4 SAM4C16C Watchdog Timer (WDT) */
  PMC_IRQn             =  5, /**<  5 SAM4C16C Power Management Controller (PMC) */
  EFC_IRQn             =  6, /**<  6 SAM4C16C Enhanced Embedded Flash Controller (EFC) */
  UART0_IRQn           =  8, /**<  8 SAM4C16C UART 0 (UART0) */
  SMC0_IRQn            = 10, /**< 10 SAM4C16C Static Memory Controller 0 (SMC0) */
  PIOA_IRQn            = 11, /**< 11 SAM4C16C Parallel I/O Controller A (PIOA) */
  PIOB_IRQn            = 12, /**< 12 SAM4C16C Parallel I/O Controller B (PIOB) */
  USART0_IRQn          = 14, /**< 14 SAM4C16C USART 0 (USART0) */
  USART1_IRQn          = 15, /**< 15 SAM4C16C USART 1 (USART1) */
  USART2_IRQn          = 16, /**< 16 SAM4C16C USART 2 (USART2) */
  USART3_IRQn          = 17, /**< 17 SAM4C16C USART 3 (USART3) */
  USART4_IRQn          = 18, /**< 18 SAM4C16C USART 4 (USART4) */
  TWI0_IRQn            = 19, /**< 19 SAM4C16C Two Wire Interface 0 (TWI0) */
  TWI1_IRQn            = 20, /**< 20 SAM4C16C Two Wire Interface 1 (TWI1) */
  SPI0_IRQn            = 21, /**< 21 SAM4C16C Serial Peripheral Interface 0 (SPI0) */
  TC0_IRQn             = 23, /**< 23 SAM4C16C Timer/Counter 0 (TC0) */
  TC1_IRQn             = 24, /**< 24 SAM4C16C Timer/Counter 1 (TC1) */
  TC2_IRQn             = 25, /**< 25 SAM4C16C Timer/Counter 2 (TC2) */
  TC3_IRQn             = 26, /**< 26 SAM4C16C Timer/Counter 3 (TC3) */
  TC4_IRQn             = 27, /**< 27 SAM4C16C Timer/Counter 4 (TC4) */
  TC5_IRQn             = 28, /**< 28 SAM4C16C Timer/Counter 5 (TC5) */
  ADC_IRQn             = 29, /**< 29 SAM4C16C Analog To Digital Converter (ADC) */
  ARM1_IRQn            = 30, /**< 30 SAM4C16C FPU signals : FPIXC, FPOFC, FPUFC, FPIOC, FPDZC, FPIDC, FPIXC (ARM1) */
  IPC0_IRQn            = 31, /**< 31 SAM4C16C Interprocessor communication 0 (IPC0) */
  SLCDC_IRQn           = 32, /**< 32 SAM4C16C Segment LCD Controller (SLCDC) */
  TRNG_IRQn            = 33, /**< 33 SAM4C16C True Random Generator (TRNG) */
  ICM_IRQn             = 34, /**< 34 SAM4C16C Integrity Check Module (ICM) */
  AES_IRQn             = 36, /**< 36 SAM4C16C Advanced Enhanced Standard (AES) */
  PIOC_IRQn            = 37, /**< 37 SAM4C16C Parallel I/O Controller C (PIOC) */
  UART1_IRQn           = 38, /**< 38 SAM4C16C UART 1 (UART1) */
  IPC1_IRQn            = 39, /**< 39 SAM4C16C Interprocessor communication 1 (IPC1) */
  SPI1_IRQn            = 40, /**< 40 SAM4C16C Serial Peripheral Interface 1 (SPI1) */
  PWM_IRQn             = 41, /**< 41 SAM4C16C Pulse Width Modulation (PWM) */
  SMC1_IRQn            = 43, /**< 43 SAM4C16C Static Memory Controller 1 (SMC1) */

  PERIPH_COUNT_IRQn    = 44  /**< Number of peripheral IDs */
} IRQn_Type;

typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;
  
  /* Cortex-M handlers */
  void* pfnReset_Handler;
  void* pfnNMI_Handler;
  void* pfnHardFault_Handler;
  void* pfnMemManage_Handler;
  void* pfnBusFault_Handler;
  void* pfnUsageFault_Handler;
  void* pfnReserved1_Handler;
  void* pfnReserved2_Handler;
  void* pfnReserved3_Handler;
  void* pfnReserved4_Handler;
  void* pfnSVC_Handler;
  void* pfnDebugMon_Handler;
  void* pfnReserved5_Handler;
  void* pfnPendSV_Handler;
  void* pfnSysTick_Handler;

  /* Peripheral handlers */
  void* pfnSUPC_Handler;   /*  0 Supply Controller */
  void* pfnRSTC_Handler;   /*  1 Reset Controller */
  void* pfnRTC_Handler;    /*  2 Real Time Clock */
  void* pfnRTT_Handler;    /*  3 Real Time Timer */
  void* pfnWDT_Handler;    /*  4 Watchdog Timer */
  void* pfnPMC_Handler;    /*  5 Power Management Controller */
  void* pfnEFC_Handler;    /*  6 Enhanced Embedded Flash Controller */
  void* pvReserved7;
  void* pfnUART0_Handler;  /*  8 UART 0 */
  void* pvReserved9;
  void* pfnSMC0_Handler;   /* 10 Static Memory Controller 0 */
  void* pfnPIOA_Handler;   /* 11 Parallel I/O Controller A */
  void* pfnPIOB_Handler;   /* 12 Parallel I/O Controller B */
  void* pvReserved13;
  void* pfnUSART0_Handler; /* 14 USART 0 */
  void* pfnUSART1_Handler; /* 15 USART 1 */
  void* pfnUSART2_Handler; /* 16 USART 2 */
  void* pfnUSART3_Handler; /* 17 USART 3 */
  void* pfnUSART4_Handler; /* 18 USART 4 */
  void* pfnTWI0_Handler;   /* 19 Two Wire Interface 0 */
  void* pfnTWI1_Handler;   /* 20 Two Wire Interface 1 */
  void* pfnSPI0_Handler;   /* 21 Serial Peripheral Interface 0 */
  void* pvReserved22;
  void* pfnTC0_Handler;    /* 23 Timer/Counter 0 */
  void* pfnTC1_Handler;    /* 24 Timer/Counter 1 */
  void* pfnTC2_Handler;    /* 25 Timer/Counter 2 */
  void* pfnTC3_Handler;    /* 26 Timer/Counter 3 */
  void* pfnTC4_Handler;    /* 27 Timer/Counter 4 */
  void* pfnTC5_Handler;    /* 28 Timer/Counter 5 */
  void* pfnADC_Handler;    /* 29 Analog To Digital Converter */
  void* pfnARM1_Handler;   /* 30 FPU signals : FPIXC, FPOFC, FPUFC, FPIOC, FPDZC, FPIDC, FPIXC */
  void* pfnIPC0_Handler;   /* 31 Interprocessor communication 0 */
  void* pfnSLCDC_Handler;  /* 32 Segment LCD Controller */
  void* pfnTRNG_Handler;   /* 33 True Random Generator */
  void* pfnICM_Handler;    /* 34 Integrity Check Module */
  void* pvReserved35;
  void* pfnAES_Handler;    /* 36 Advanced Enhanced Standard */
  void* pfnPIOC_Handler;   /* 37 Parallel I/O Controller C */
  void* pfnUART1_Handler;  /* 38 UART 1 */
  void* pfnIPC1_Handler;   /* 39 Interprocessor communication 1 */
  void* pfnSPI1_Handler;   /* 40 Serial Peripheral Interface 1 */
  void* pfnPWM_Handler;    /* 41 Pulse Width Modulation */
  void* pvReserved42;
  void* pfnSMC1_Handler;   /* 43 Static Memory Controller 1 */
} DeviceVectors;

/* Cortex-M4 core handlers */
void Reset_Handler      ( void );
void NMI_Handler        ( void );
void HardFault_Handler  ( void );
void MemManage_Handler  ( void );
void BusFault_Handler   ( void );
void UsageFault_Handler ( void );
void SVC_Handler        ( void );
void DebugMon_Handler   ( void );
void PendSV_Handler     ( void );
void SysTick_Handler    ( void );

/* Peripherals handlers */
void ADC_Handler        ( void );
void AES_Handler        ( void );
void ARM1_Handler       ( void );
void EFC_Handler        ( void );
void ICM_Handler        ( void );
void IPC0_Handler       ( void );
void IPC1_Handler       ( void );
void PIOA_Handler       ( void );
void PIOB_Handler       ( void );
void PIOC_Handler       ( void );
void PMC_Handler        ( void );
void PWM_Handler        ( void );
void RSTC_Handler       ( void );
void RTC_Handler        ( void );
void RTT_Handler        ( void );
void SLCDC_Handler      ( void );
void SMC0_Handler       ( void );
void SMC1_Handler       ( void );
void SPI0_Handler       ( void );
void SPI1_Handler       ( void );
void SUPC_Handler       ( void );
void TC0_Handler        ( void );
void TC1_Handler        ( void );
void TC2_Handler        ( void );
void TC3_Handler        ( void );
void TC4_Handler        ( void );
void TC5_Handler        ( void );
void TRNG_Handler       ( void );
void TWI0_Handler       ( void );
void TWI1_Handler       ( void );
void UART0_Handler      ( void );
void UART1_Handler      ( void );
void USART0_Handler     ( void );
void USART1_Handler     ( void );
void USART2_Handler     ( void );
void USART3_Handler     ( void );
void USART4_Handler     ( void );
void WDT_Handler        ( void );

/**
 * \brief Configuration of the Cortex-M4 Processor and Core Peripherals 
 */

#define __CM4_REV              0x0002 /**< SAM4C16C core revision number ([15:8] revision number, [7:0] patch number) */
#define __MPU_PRESENT          0      /**< SAM4C16C does not provide a MPU */
#define __FPU_PRESENT          1      /**< SAM4C16C does provide a FPU */
#define __NVIC_PRIO_BITS       4      /**< SAM4C16C uses 4 Bits for the Priority Levels */
#define __Vendor_SysTickConfig 0      /**< Set to 1 if different SysTick Config is used */

/*
 * \brief CMSIS includes
 */

#include <core_cm4.h>
#if !defined DONT_USE_CMSIS_INIT
#include "system_sam4c.h"
#endif /* DONT_USE_CMSIS_INIT */

/*@}*/

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR SAM4C16C */
/* ************************************************************************** */
/** \addtogroup SAM4C16C_api Peripheral Software API */
/*@{*/

#include "component/adc.h"
#include "component/aes.h"
#include "component/chipid.h"
#include "component/cmcc.h"
#include "component/efc.h"
#include "component/gpbr.h"
#include "component/icm.h"
#include "component/ipc.h"
#include "component/matrix.h"
#include "component/pdc.h"
#include "component/pio.h"
#include "component/pmc.h"
#include "component/pwm.h"
#include "component/rstc.h"
#include "component/rtc.h"
#include "component/rtt.h"
#include "component/slcdc.h"
#include "component/smc.h"
#include "component/spi.h"
#include "component/supc.h"
#include "component/tc.h"
#include "component/trng.h"
#include "component/twi.h"
#include "component/uart.h"
#include "component/usart.h"
#include "component/wdt.h"
/*@}*/

/* ************************************************************************** */
/*   REGISTER ACCESS DEFINITIONS FOR SAM4C16C */
/* ************************************************************************** */
/** \addtogroup SAM4C16C_reg Registers Access Definitions */
/*@{*/

#include "instance/aes.h"
#include "instance/spi0.h"
#include "instance/tc0.h"
#include "instance/tc1.h"
#include "instance/twi0.h"
#include "instance/twi1.h"
#include "instance/usart0.h"
#include "instance/usart1.h"
#include "instance/usart2.h"
#include "instance/usart3.h"
#include "instance/usart4.h"
#include "instance/adc.h"
#include "instance/slcdc.h"
#include "instance/icm.h"
#include "instance/trng.h"
#include "instance/ipc0.h"
#include "instance/cmcc0.h"
#include "instance/smc0.h"
#include "instance/matrix0.h"
#include "instance/pmc.h"
#include "instance/uart0.h"
#include "instance/chipid.h"
#include "instance/efc.h"
#include "instance/pioa.h"
#include "instance/piob.h"
#include "instance/rstc.h"
#include "instance/supc.h"
#include "instance/rtt.h"
#include "instance/wdt.h"
#include "instance/rtc.h"
#include "instance/gpbr.h"
#include "instance/spi1.h"
#include "instance/uart1.h"
#include "instance/pwm.h"
#include "instance/pioc.h"
#include "instance/matrix1.h"
#include "instance/ipc1.h"
#include "instance/cmcc1.h"
#include "instance/smc1.h"
/*@}*/

/* ************************************************************************** */
/*   PERIPHERAL ID DEFINITIONS FOR SAM4C16C */
/* ************************************************************************** */
/** \addtogroup SAM4C16C_id Peripheral Ids Definitions */
/*@{*/

#define ID_SUPC   ( 0) /**< \brief Supply Controller (SUPC) */
#define ID_RSTC   ( 1) /**< \brief Reset Controller (RSTC) */
#define ID_RTC    ( 2) /**< \brief Real Time Clock (RTC) */
#define ID_RTT    ( 3) /**< \brief Real Time Timer (RTT) */
#define ID_WDT    ( 4) /**< \brief Watchdog Timer (WDT) */
#define ID_PMC    ( 5) /**< \brief Power Management Controller (PMC) */
#define ID_EFC    ( 6) /**< \brief Enhanced Embedded Flash Controller (EFC) */
#define ID_UART0  ( 8) /**< \brief UART 0 (UART0) */
#define ID_SMC0   (10) /**< \brief Static Memory Controller 0 (SMC0) */
#define ID_PIOA   (11) /**< \brief Parallel I/O Controller A (PIOA) */
#define ID_PIOB   (12) /**< \brief Parallel I/O Controller B (PIOB) */
#define ID_USART0 (14) /**< \brief USART 0 (USART0) */
#define ID_USART1 (15) /**< \brief USART 1 (USART1) */
#define ID_USART2 (16) /**< \brief USART 2 (USART2) */
#define ID_USART3 (17) /**< \brief USART 3 (USART3) */
#define ID_USART4 (18) /**< \brief USART 4 (USART4) */
#define ID_TWI0   (19) /**< \brief Two Wire Interface 0 (TWI0) */
#define ID_TWI1   (20) /**< \brief Two Wire Interface 1 (TWI1) */
#define ID_SPI0   (21) /**< \brief Serial Peripheral Interface 0 (SPI0) */
#define ID_TC0    (23) /**< \brief Timer/Counter 0 (TC0) */
#define ID_TC1    (24) /**< \brief Timer/Counter 1 (TC1) */
#define ID_TC2    (25) /**< \brief Timer/Counter 2 (TC2) */
#define ID_TC3    (26) /**< \brief Timer/Counter 3 (TC3) */
#define ID_TC4    (27) /**< \brief Timer/Counter 4 (TC4) */
#define ID_TC5    (28) /**< \brief Timer/Counter 5 (TC5) */
#define ID_ADC    (29) /**< \brief Analog To Digital Converter (ADC) */
#define ID_ARM1   (30) /**< \brief FPU signals : FPIXC, FPOFC, FPUFC, FPIOC, FPDZC, FPIDC, FPIXC (ARM1) */
#define ID_IPC0   (31) /**< \brief Interprocessor communication 0 (IPC0) */
#define ID_SLCDC  (32) /**< \brief Segment LCD Controller (SLCDC) */
#define ID_TRNG   (33) /**< \brief True Random Generator (TRNG) */
#define ID_ICM    (34) /**< \brief Integrity Check Module (ICM) */
#define ID_AES    (36) /**< \brief Advanced Enhanced Standard (AES) */
#define ID_PIOC   (37) /**< \brief Parallel I/O Controller C (PIOC) */
#define ID_UART1  (38) /**< \brief UART 1 (UART1) */
#define ID_IPC1   (39) /**< \brief Interprocessor communication 1 (IPC1) */
#define ID_SPI1   (40) /**< \brief Serial Peripheral Interface 1 (SPI1) */
#define ID_PWM    (41) /**< \brief Pulse Width Modulation (PWM) */
#define ID_SMC1   (43) /**< \brief Static Memory Controller 1 (SMC1) */

#define ID_PERIPH_COUNT (44) /**< \brief Number of peripheral IDs */
/*@}*/

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR SAM4C16C */
/* ************************************************************************** */
/** \addtogroup SAM4C16C_base Peripheral Base Address Definitions */
/*@{*/

#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define AES        (0x40000000U) /**< \brief (AES       ) Base Address */
#define PDC_AES    (0x40000100U) /**< \brief (PDC_AES   ) Base Address */
#define SPI0       (0x40008000U) /**< \brief (SPI0      ) Base Address */
#define PDC_SPI0   (0x40008100U) /**< \brief (PDC_SPI0  ) Base Address */
#define TC0        (0x40010000U) /**< \brief (TC0       ) Base Address */
#define TC1        (0x40014000U) /**< \brief (TC1       ) Base Address */
#define TWI0       (0x40018000U) /**< \brief (TWI0      ) Base Address */
#define PDC_TWI0   (0x40018100U) /**< \brief (PDC_TWI0  ) Base Address */
#define TWI1       (0x4001C000U) /**< \brief (TWI1      ) Base Address */
#define USART0     (0x40024000U) /**< \brief (USART0    ) Base Address */
#define PDC_USART0 (0x40024100U) /**< \brief (PDC_USART0) Base Address */
#define USART1     (0x40028000U) /**< \brief (USART1    ) Base Address */
#define PDC_USART1 (0x40028100U) /**< \brief (PDC_USART1) Base Address */
#define USART2     (0x4002C000U) /**< \brief (USART2    ) Base Address */
#define PDC_USART2 (0x4002C100U) /**< \brief (PDC_USART2) Base Address */
#define USART3     (0x40030000U) /**< \brief (USART3    ) Base Address */
#define PDC_USART3 (0x40030100U) /**< \brief (PDC_USART3) Base Address */
#define USART4     (0x40034000U) /**< \brief (USART4    ) Base Address */
#define PDC_USART4 (0x40034100U) /**< \brief (PDC_USART4) Base Address */
#define ADC        (0x40038000U) /**< \brief (ADC       ) Base Address */
#define PDC_ADC    (0x40038100U) /**< \brief (PDC_ADC   ) Base Address */
#define SLCDC      (0x4003C000U) /**< \brief (SLCDC     ) Base Address */
#define ICM        (0x40044000U) /**< \brief (ICM       ) Base Address */
#define TRNG       (0x40048000U) /**< \brief (TRNG      ) Base Address */
#define IPC0       (0x4004C000U) /**< \brief (IPC0      ) Base Address */
#define CMCC0      (0x4007C000U) /**< \brief (CMCC0     ) Base Address */
#define SMC0       (0x400E0000U) /**< \brief (SMC0      ) Base Address */
#define MATRIX0    (0x400E0200U) /**< \brief (MATRIX0   ) Base Address */
#define PMC        (0x400E0400U) /**< \brief (PMC       ) Base Address */
#define UART0      (0x400E0600U) /**< \brief (UART0     ) Base Address */
#define PDC_UART0  (0x400E0700U) /**< \brief (PDC_UART0 ) Base Address */
#define CHIPID     (0x400E0740U) /**< \brief (CHIPID    ) Base Address */
#define EFC        (0x400E0A00U) /**< \brief (EFC       ) Base Address */
#define PIOA       (0x400E0E00U) /**< \brief (PIOA      ) Base Address */
#define PIOB       (0x400E1000U) /**< \brief (PIOB      ) Base Address */
#define RSTC       (0x400E1400U) /**< \brief (RSTC      ) Base Address */
#define SUPC       (0x400E1410U) /**< \brief (SUPC      ) Base Address */
#define RTT        (0x400E1430U) /**< \brief (RTT       ) Base Address */
#define WDT        (0x400E1450U) /**< \brief (WDT       ) Base Address */
#define RTC        (0x400E1460U) /**< \brief (RTC       ) Base Address */
#define GPBR       (0x400E1490U) /**< \brief (GPBR      ) Base Address */
#define SPI1       (0x48000000U) /**< \brief (SPI1      ) Base Address */
#define PDC_SPI1   (0x48000100U) /**< \brief (PDC_SPI1  ) Base Address */
#define UART1      (0x48004000U) /**< \brief (UART1     ) Base Address */
#define PDC_UART1  (0x48004100U) /**< \brief (PDC_UART1 ) Base Address */
#define PWM        (0x48008000U) /**< \brief (PWM       ) Base Address */
#define PIOC       (0x4800C000U) /**< \brief (PIOC      ) Base Address */
#define MATRIX1    (0x48010000U) /**< \brief (MATRIX1   ) Base Address */
#define IPC1       (0x48014000U) /**< \brief (IPC1      ) Base Address */
#define CMCC1      (0x48018000U) /**< \brief (CMCC1     ) Base Address */
#define SMC1       (0x4801C000U) /**< \brief (SMC1      ) Base Address */
#else
#define AES        ((Aes     *)0x40000000U) /**< \brief (AES       ) Base Address */
#define PDC_AES    ((Pdc     *)0x40000100U) /**< \brief (PDC_AES   ) Base Address */
#define SPI0       ((Spi     *)0x40008000U) /**< \brief (SPI0      ) Base Address */
#define PDC_SPI0   ((Pdc     *)0x40008100U) /**< \brief (PDC_SPI0  ) Base Address */
#define TC0        ((Tc      *)0x40010000U) /**< \brief (TC0       ) Base Address */
#define TC1        ((Tc      *)0x40014000U) /**< \brief (TC1       ) Base Address */
#define TWI0       ((Twi     *)0x40018000U) /**< \brief (TWI0      ) Base Address */
#define PDC_TWI0   ((Pdc     *)0x40018100U) /**< \brief (PDC_TWI0  ) Base Address */
#define TWI1       ((Twi     *)0x4001C000U) /**< \brief (TWI1      ) Base Address */
#define USART0     ((Usart   *)0x40024000U) /**< \brief (USART0    ) Base Address */
#define PDC_USART0 ((Pdc     *)0x40024100U) /**< \brief (PDC_USART0) Base Address */
#define USART1     ((Usart   *)0x40028000U) /**< \brief (USART1    ) Base Address */
#define PDC_USART1 ((Pdc     *)0x40028100U) /**< \brief (PDC_USART1) Base Address */
#define USART2     ((Usart   *)0x4002C000U) /**< \brief (USART2    ) Base Address */
#define PDC_USART2 ((Pdc     *)0x4002C100U) /**< \brief (PDC_USART2) Base Address */
#define USART3     ((Usart   *)0x40030000U) /**< \brief (USART3    ) Base Address */
#define PDC_USART3 ((Pdc     *)0x40030100U) /**< \brief (PDC_USART3) Base Address */
#define USART4     ((Usart   *)0x40034000U) /**< \brief (USART4    ) Base Address */
#define PDC_USART4 ((Pdc     *)0x40034100U) /**< \brief (PDC_USART4) Base Address */
#define ADC        ((Adc     *)0x40038000U) /**< \brief (ADC       ) Base Address */
#define PDC_ADC    ((Pdc     *)0x40038100U) /**< \brief (PDC_ADC   ) Base Address */
#define SLCDC      ((Slcdc   *)0x4003C000U) /**< \brief (SLCDC     ) Base Address */
#define ICM        ((Icm     *)0x40044000U) /**< \brief (ICM       ) Base Address */
#define TRNG       ((Trng    *)0x40048000U) /**< \brief (TRNG      ) Base Address */
#define IPC0       ((Ipc     *)0x4004C000U) /**< \brief (IPC0      ) Base Address */
#define CMCC0      ((Cmcc    *)0x4007C000U) /**< \brief (CMCC0     ) Base Address */
#define SMC0       ((Smc     *)0x400E0000U) /**< \brief (SMC0      ) Base Address */
#define MATRIX0    ((Matrix  *)0x400E0200U) /**< \brief (MATRIX0   ) Base Address */
#define PMC        ((Pmc     *)0x400E0400U) /**< \brief (PMC       ) Base Address */
#define UART0      ((Uart    *)0x400E0600U) /**< \brief (UART0     ) Base Address */
#define PDC_UART0  ((Pdc     *)0x400E0700U) /**< \brief (PDC_UART0 ) Base Address */
#define CHIPID     ((Chipid  *)0x400E0740U) /**< \brief (CHIPID    ) Base Address */
#define EFC        ((Efc     *)0x400E0A00U) /**< \brief (EFC       ) Base Address */
#define PIOA       ((Pio     *)0x400E0E00U) /**< \brief (PIOA      ) Base Address */
#define PIOB       ((Pio     *)0x400E1000U) /**< \brief (PIOB      ) Base Address */
#define RSTC       ((Rstc    *)0x400E1400U) /**< \brief (RSTC      ) Base Address */
#define SUPC       ((Supc    *)0x400E1410U) /**< \brief (SUPC      ) Base Address */
#define RTT        ((Rtt     *)0x400E1430U) /**< \brief (RTT       ) Base Address */
#define WDT        ((Wdt     *)0x400E1450U) /**< \brief (WDT       ) Base Address */
#define RTC        ((Rtc     *)0x400E1460U) /**< \brief (RTC       ) Base Address */
#define GPBR       ((Gpbr    *)0x400E1490U) /**< \brief (GPBR      ) Base Address */
#define SPI1       ((Spi     *)0x48000000U) /**< \brief (SPI1      ) Base Address */
#define PDC_SPI1   ((Pdc     *)0x48000100U) /**< \brief (PDC_SPI1  ) Base Address */
#define UART1      ((Uart    *)0x48004000U) /**< \brief (UART1     ) Base Address */
#define PDC_UART1  ((Pdc     *)0x48004100U) /**< \brief (PDC_UART1 ) Base Address */
#define PWM        ((Pwm     *)0x48008000U) /**< \brief (PWM       ) Base Address */
#define PIOC       ((Pio     *)0x4800C000U) /**< \brief (PIOC      ) Base Address */
#define MATRIX1    ((Matrix  *)0x48010000U) /**< \brief (MATRIX1   ) Base Address */
#define IPC1       ((Ipc     *)0x48014000U) /**< \brief (IPC1      ) Base Address */
#define CMCC1      ((Cmcc    *)0x48018000U) /**< \brief (CMCC1     ) Base Address */
#define SMC1       ((Smc     *)0x4801C000U) /**< \brief (SMC1      ) Base Address */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/*@}*/

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR SAM4C16C */
/* ************************************************************************** */
/** \addtogroup SAM4C16C_pio Peripheral Pio Definitions */
/*@{*/

#include "pio/sam4c16c.h"
/*@}*/

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR SAM4C16C */
/* ************************************************************************** */

#define IFLASH_SIZE             (0x100000u)
#define IFLASH_PAGE_SIZE        (512u)
#define IFLASH_LOCK_REGION_SIZE (8192u)
#define IFLASH_NB_OF_PAGES      (2048u)
#define IFLASH_NB_OF_LOCK_BITS  (128u)
#define IRAM0_SIZE              (0x20000u)
#define IRAM1_SIZE              (0x4000u)
#define IRAM2_SIZE              (0x2000u)
#define IRAM_SIZE               (IRAM0_SIZE+IRAM1_SIZE+IRAM2_SIZE)

#define IFLASH_CNC_ADDR (0x01000000u) /**< Internal Flash (Code - Non Cached) base address */
#define IROM_ADDR       (0x02000000u) /**< Internal ROM base address */
#define IFLASH_CC_ADDR  (0x11000000u) /**< Internal Flash (Code - Cached) base address */
#define IRAM0_ADDR      (0x20000000u) /**< Internal RAM 0 base address */
#define IRAM1_ADDR      (0x20080000u) /**< Internal RAM 1 base address */
#define IRAM2_ADDR      (0x20100000u) /**< Internal RAM 2 base address */
#define EBI_CS0_ADDR    (0x60000000u) /**< EBI Chip Select 0 base address */
#define EBI_CS1_ADDR    (0x61000000u) /**< EBI Chip Select 1 base address */
#define EBI_CS2_ADDR    (0x62000000u) /**< EBI Chip Select 2 base address */
#define EBI_CS3_ADDR    (0x63000000u) /**< EBI Chip Select 3 base address */

/* ************************************************************************** */
/*   MISCELLANEOUS DEFINITIONS FOR SAM4C16C */
/* ************************************************************************** */

#define CHIP_JTAGID (0x05B3403FUL)
#define CHIP_CIDR (0xA64C0CE0UL)
#define CHIP_EXID (0x0UL)

/* ************************************************************************** */
/*   ELECTRICAL DEFINITIONS FOR SAM4C16C */
/* ************************************************************************** */

/* %ATMEL_ELECTRICAL% */

#ifdef __cplusplus
}
#endif

/*@}*/

#endif /* _SAM4C16C_ */