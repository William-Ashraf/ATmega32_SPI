/*
 * SPI_Reg.h
 *
 *  Created on: Oct 5, 2019
 *      Author: William
 */

#ifndef SPI_REG_H_
#define SPI_REG_H_

#define SPCR *((volatile u8 *)0x2D)
#define SPSR *((volatile u8 *)0x2E)
#define SPDR *((volatile u8 *)0x2F)

#endif /* SPI_REG_H_ */
