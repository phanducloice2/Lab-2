/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define pa2_Pin GPIO_PIN_2
#define pa2_GPIO_Port GPIOA
#define pa3_Pin GPIO_PIN_3
#define pa3_GPIO_Port GPIOA
#define pa4_Pin GPIO_PIN_4
#define pa4_GPIO_Port GPIOA
#define pa5_Pin GPIO_PIN_5
#define pa5_GPIO_Port GPIOA
#define pa6_Pin GPIO_PIN_6
#define pa6_GPIO_Port GPIOA
#define pa7_Pin GPIO_PIN_7
#define pa7_GPIO_Port GPIOA
#define pb0_Pin GPIO_PIN_0
#define pb0_GPIO_Port GPIOB
#define pb1_Pin GPIO_PIN_1
#define pb1_GPIO_Port GPIOB
#define pb2_Pin GPIO_PIN_2
#define pb2_GPIO_Port GPIOB
#define pb10_Pin GPIO_PIN_10
#define pb10_GPIO_Port GPIOB
#define pb11_Pin GPIO_PIN_11
#define pb11_GPIO_Port GPIOB
#define pb12_Pin GPIO_PIN_12
#define pb12_GPIO_Port GPIOB
#define pb13_Pin GPIO_PIN_13
#define pb13_GPIO_Port GPIOB
#define pb14_Pin GPIO_PIN_14
#define pb14_GPIO_Port GPIOB
#define pb15_Pin GPIO_PIN_15
#define pb15_GPIO_Port GPIOB
#define pa8_Pin GPIO_PIN_8
#define pa8_GPIO_Port GPIOA
#define pa9_Pin GPIO_PIN_9
#define pa9_GPIO_Port GPIOA
#define pa10_Pin GPIO_PIN_10
#define pa10_GPIO_Port GPIOA
#define pa11_Pin GPIO_PIN_11
#define pa11_GPIO_Port GPIOA
#define pa12_Pin GPIO_PIN_12
#define pa12_GPIO_Port GPIOA
#define pa13_Pin GPIO_PIN_13
#define pa13_GPIO_Port GPIOA
#define pa14_Pin GPIO_PIN_14
#define pa14_GPIO_Port GPIOA
#define pa15_Pin GPIO_PIN_15
#define pa15_GPIO_Port GPIOA
#define pb3_Pin GPIO_PIN_3
#define pb3_GPIO_Port GPIOB
#define pb4_Pin GPIO_PIN_4
#define pb4_GPIO_Port GPIOB
#define pb5_Pin GPIO_PIN_5
#define pb5_GPIO_Port GPIOB
#define pb6_Pin GPIO_PIN_6
#define pb6_GPIO_Port GPIOB
#define pb8_Pin GPIO_PIN_8
#define pb8_GPIO_Port GPIOB
#define pb9_Pin GPIO_PIN_9
#define pb9_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
