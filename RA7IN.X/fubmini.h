/* 
 * File:   fubmini.h
 * Author: Jason
 *
 * Created on February 28, 2014, 8:51 AM
 */

#ifndef FUBMINI_H
#define	FUBMINI_H


#define FUB_PAD0  (1<<13)
#define FUB_PAD1  (1<<10)
#define FUB_PAD2  (1<<7)
#define FUB_PAD3  (1<<14)
#define FUB_PAD4  (1<<15)
#define FUB_PAD5  (1<<0)
#define FUB_PAD6  (1<<1)
#define FUB_PAD7  (1<<0)
#define FUB_PAD8  (1<<1)
#define FUB_PAD9  (1<<2)
#define FUB_PAD10 (1<<3)
#define FUB_PAD11 (1<<0)
#define FUB_PAD12 (1<<1)
#define FUB_PAD13 (1<<2)
#define FUB_PAD14 (1<<2)
#define FUB_PAD15 (1<<3)
#define FUB_PAD16 (1<<8)
#define FUB_PAD17 (1<<4)
#define FUB_PAD18 (1<<4)
#define FUB_PAD19 (1<<9)
#define FUB_PAD20 (1<<3)
#define FUB_PAD21 (1<<4)
#define FUB_PAD22 (1<<5)
#define FUB_PAD23 (1<<5)
#define FUB_PAD24 (1<<7)
#define FUB_PAD25 (1<<8)
#define FUB_PAD26 (1<<9)
#define FUB_PAD27 (1<<6)
#define FUB_PAD28 (1<<7)
#define FUB_PAD29 (1<<8)
#define FUB_PAD30 (1<<9)
#define FUB_PAD31 (1<<10)
#define FUB_PAD32 (1<<11)

#define FUB_P0  IOPORT_B,FUB_PAD0
#define FUB_P1  IOPORT_A,FUB_PAD1
#define FUB_P2  IOPORT_A,FUB_PAD2
#define FUB_P3  IOPORT_B,FUB_PAD3
#define FUB_P4  IOPORT_B,FUB_PAD4
#define FUB_P5  IOPORT_A,FUB_PAD5
#define FUB_P6  IOPORT_A,FUB_PAD6
#define FUB_P7  IOPORT_B,FUB_PAD7
#define FUB_P8  IOPORT_B,FUB_PAD8
#define FUB_P9  IOPORT_B,FUB_PAD9
#define FUB_P10 IOPORT_B,FUB_PAD10
#define FUB_P11 IOPORT_C,FUB_PAD11
#define FUB_P12 IOPORT_C,FUB_PAD12
#define FUB_P13 IOPORT_C,FUB_PAD13
#define FUB_P14 IOPORT_A,FUB_PAD14
#define FUB_P15 IOPORT_A,FUB_PAD15
#define FUB_P16 IOPORT_A,FUB_PAD16
#define FUB_P17 IOPORT_B,FUB_PAD17
#define FUB_P18 IOPORT_A,FUB_PAD18
#define FUB_P19 IOPORT_A,FUB_PAD19
#define FUB_P20 IOPORT_C,FUB_PAD20
#define FUB_P21 IOPORT_C,FUB_PAD21
#define FUB_P22 IOPORT_C,FUB_PAD22
#define FUB_P23 IOPORT_B,FUB_PAD23
#define FUB_P24 IOPORT_B,FUB_PAD24
#define FUB_P25 IOPORT_B,FUB_PAD25
#define FUB_P26 IOPORT_B,FUB_PAD26
#define FUB_P27 IOPORT_C,FUB_PAD27
#define FUB_P28 IOPORT_C,FUB_PAD28
#define FUB_P29 IOPORT_C,FUB_PAD29
#define FUB_P30 IOPORT_C,FUB_PAD30
#define FUB_P31 IOPORT_B,FUB_PAD31
#define FUB_P32 IOPORT_B,FUB_PAD32

#define USR_LED  IOPORT_A,FUB_PAD1

#define FUBARINO_IOA_MAP (FUB_PAD1|FUB_PAD2|FUB_PAD5|FUB_PAD6|FUB_PAD14|FUB_PAD15|FUB_PAD16|FUB_PAD18|FUB_PAD19)
#define FUBARINO_IOB_MAP (FUB_PAD0|FUB_PAD3|FUB_PAD4|FUB_PAD7|FUB_PAD8|FUB_PAD9|FUB_PAD10|FUB_PAD17|FUB_PAD23|FUB_PAD24|FUB_PAD25|FUB_PAD26|FUB_PAD31|FUB_PAD32)
#define FUBARINO_IOC_MAP (FUB_PAD20|FUB_PAD21|FUB_PAD22|FUB_PAD11|FUB_PAD12|FUB_PAD13|FUB_PAD27|FUB_PAD28|FUB_PAD29|FUB_PAD30)


#define initProgBtn()     TRISAbits.TRISA8 = 1
#define isProg()          !PORTAbits.RA8
#endif	/* FUBMINI_H */

