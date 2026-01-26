/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define TIM_ESC1_Pin GPIO_PIN_0
#define TIM_ESC1_GPIO_Port GPIOA
#define TIM_ESC2_Pin GPIO_PIN_1
#define TIM_ESC2_GPIO_Port GPIOA
#define OSD_HSYNC_Pin GPIO_PIN_0
#define OSD_HSYNC_GPIO_Port GPIOB
#define OSD_VSYNC_Pin GPIO_PIN_1
#define OSD_VSYNC_GPIO_Port GPIOB
#define NRF_CE_Pin GPIO_PIN_2
#define NRF_CE_GPIO_Port GPIOB
#define SPI1_CS_NRF_Pin GPIO_PIN_10
#define SPI1_CS_NRF_GPIO_Port GPIOB
#define EXTI_NRF_INT_Pin GPIO_PIN_11
#define EXTI_NRF_INT_GPIO_Port GPIOB
#define EXTI_NRF_INT_EXTI_IRQn EXTI15_10_IRQn
#define OSD_LOS_Pin GPIO_PIN_14
#define OSD_LOS_GPIO_Port GPIOB
#define SPI1_CS_OSD_Pin GPIO_PIN_15
#define SPI1_CS_OSD_GPIO_Port GPIOB
#define TIM_SRV4_Pin GPIO_PIN_8
#define TIM_SRV4_GPIO_Port GPIOA
#define TIM_SRV3_Pin GPIO_PIN_9
#define TIM_SRV3_GPIO_Port GPIOA
#define TIM_SRV2_Pin GPIO_PIN_10
#define TIM_SRV2_GPIO_Port GPIOA
#define TIM_SRV1_Pin GPIO_PIN_11
#define TIM_SRV1_GPIO_Port GPIOA
#define EXTI_IMU_INT1_Pin GPIO_PIN_4
#define EXTI_IMU_INT1_GPIO_Port GPIOB
#define EXTI_IMU_INT1_EXTI_IRQn EXTI4_IRQn
#define EXTI_IMU_INT2_Pin GPIO_PIN_5
#define EXTI_IMU_INT2_GPIO_Port GPIOB
#define EXTI_IMU_INT2_EXTI_IRQn EXTI9_5_IRQn
#define EXTI_INA_ALERT_Pin GPIO_PIN_8
#define EXTI_INA_ALERT_GPIO_Port GPIOB
#define EXTI_INA_ALERT_EXTI_IRQn EXTI9_5_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
