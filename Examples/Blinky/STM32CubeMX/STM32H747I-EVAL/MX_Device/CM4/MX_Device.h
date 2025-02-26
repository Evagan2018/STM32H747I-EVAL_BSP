/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 29/10/2024 14:29:49
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

#ifndef MX_DEVICE_H__
#define MX_DEVICE_H__

/* MX_Device.h version */
#define MX_DEVICE_VERSION                       0x01000000


/*------------------------------ ETH            -----------------------------*/
#define MX_ETH                                  1

/* Pins */

/* ETH_CRS_DV */
#define MX_ETH_CRS_DV_Pin                       PA7
#define MX_ETH_CRS_DV_GPIO_Pin                  GPIO_PIN_7
#define MX_ETH_CRS_DV_GPIOx                     GPIOA
#define MX_ETH_CRS_DV_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_ETH_CRS_DV_GPIO_PuPd                 GPIO_NOPULL
#define MX_ETH_CRS_DV_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_ETH_CRS_DV_GPIO_AF                   GPIO_AF11_ETH

/* ETH_MDC */
#define MX_ETH_MDC_Pin                          PC1
#define MX_ETH_MDC_GPIO_Pin                     GPIO_PIN_1
#define MX_ETH_MDC_GPIOx                        GPIOC
#define MX_ETH_MDC_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_ETH_MDC_GPIO_PuPd                    GPIO_NOPULL
#define MX_ETH_MDC_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_ETH_MDC_GPIO_AF                      GPIO_AF11_ETH

/* ETH_MDIO */
#define MX_ETH_MDIO_Pin                         PA2
#define MX_ETH_MDIO_GPIO_Pin                    GPIO_PIN_2
#define MX_ETH_MDIO_GPIOx                       GPIOA
#define MX_ETH_MDIO_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_MDIO_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_MDIO_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_MDIO_GPIO_AF                     GPIO_AF11_ETH

/* ETH_REF_CLK */
#define MX_ETH_REF_CLK_Pin                      PA1
#define MX_ETH_REF_CLK_GPIO_Pin                 GPIO_PIN_1
#define MX_ETH_REF_CLK_GPIOx                    GPIOA
#define MX_ETH_REF_CLK_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_ETH_REF_CLK_GPIO_PuPd                GPIO_NOPULL
#define MX_ETH_REF_CLK_GPIO_Speed               GPIO_SPEED_FREQ_LOW
#define MX_ETH_REF_CLK_GPIO_AF                  GPIO_AF11_ETH

/* ETH_RXD0 */
#define MX_ETH_RXD0_Pin                         PC4
#define MX_ETH_RXD0_GPIO_Pin                    GPIO_PIN_4
#define MX_ETH_RXD0_GPIOx                       GPIOC
#define MX_ETH_RXD0_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_RXD0_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_RXD0_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_RXD0_GPIO_AF                     GPIO_AF11_ETH

/* ETH_RXD1 */
#define MX_ETH_RXD1_Pin                         PC5
#define MX_ETH_RXD1_GPIO_Pin                    GPIO_PIN_5
#define MX_ETH_RXD1_GPIOx                       GPIOC
#define MX_ETH_RXD1_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_RXD1_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_RXD1_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_RXD1_GPIO_AF                     GPIO_AF11_ETH

/* ETH_TXD0 */
#define MX_ETH_TXD0_Pin                         PG13
#define MX_ETH_TXD0_GPIO_Pin                    GPIO_PIN_13
#define MX_ETH_TXD0_GPIOx                       GPIOG
#define MX_ETH_TXD0_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_TXD0_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_TXD0_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_TXD0_GPIO_AF                     GPIO_AF11_ETH

/* ETH_TXD1 */
#define MX_ETH_TXD1_Pin                         PG12
#define MX_ETH_TXD1_GPIO_Pin                    GPIO_PIN_12
#define MX_ETH_TXD1_GPIOx                       GPIOG
#define MX_ETH_TXD1_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_TXD1_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_TXD1_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_TXD1_GPIO_AF                     GPIO_AF11_ETH

/* ETH_TX_EN */
#define MX_ETH_TX_EN_Pin                        PG11
#define MX_ETH_TX_EN_GPIO_Pin                   GPIO_PIN_11
#define MX_ETH_TX_EN_GPIOx                      GPIOG
#define MX_ETH_TX_EN_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_ETH_TX_EN_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_TX_EN_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_ETH_TX_EN_GPIO_AF                    GPIO_AF11_ETH

/*------------------------------ I2C1           -----------------------------*/
#define MX_I2C1                                 1

/* Peripheral Clock Frequency */
#define MX_I2C1_PERIPH_CLOCK_FREQ               75000000


/*------------------------------ SDMMC1         -----------------------------*/
#define MX_SDMMC1                               1

/* Mode */
#define MX_SDMMC1_MODE_SD                       1

/* Peripheral Clock Frequency */
#define MX_SDMMC1_PERIPH_CLOCK_FREQ             150000000


/*------------------------------ USART1         -----------------------------*/
#define MX_USART1                               1

/* Virtual mode */
#define MX_USART1_VM                            VM_ASYNC
#define MX_USART1_VM_ASYNC                      1


#endif  /* MX_DEVICE_H__ */
