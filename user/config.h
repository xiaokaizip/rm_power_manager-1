//
// Created by LaoZhu on 2023/5/3.
//

#ifndef POWER_MANAGER_USER_CONFIG_H_
#define POWER_MANAGER_USER_CONFIG_H_

#define PROTECT_TASK_PERIOD         50          // 50ms
#define RTC_TIME_CALIBRATE_PERIOD   30          // 30s

#define REFEREE_DMA_BUFFER_SIZE     37
#define NUC_DMA_BUFFER_SIZE         59

#define MINUMUM_PRIORITY            4

#define UART1_RX_DMA_PRIORITY       (MINUMUM_PRIORITY + 3)
#define UART1_TX_DMA_PRIORITY       (MINUMUM_PRIORITY + 4)
#define UART2_RX_DMA_PRIORITY       (MINUMUM_PRIORITY + 1)
#define ADC_DMA_PRIORITY            (MINUMUM_PRIORITY + 2)
#define SPI_DMA_PRIORITY            (MINUMUM_PRIORITY + 5)
#define MDMA_PRIORITY               (MINUMUM_PRIORITY + 2)

#define UART1_GLOBAL_PRIORITY       (MINUMUM_PRIORITY + 1)
#define UART2_GLOBAL_PRIORITY       (MINUMUM_PRIORITY + 3)
#define SPI_GLOBAL_PRIORITY         (MINUMUM_PRIORITY + 5)
#define TIM6_GLOBAL_PRIORITY        (MINUMUM_PRIORITY + 0)

#endif  // POWER_MANAGER_USER_CONFIG_H_
