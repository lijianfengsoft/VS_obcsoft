﻿#pragma once
#include "stm32f4xx.h"
//FLASH起始地址
#define STM32_FLASH_BASE 0x08000000 	//STM32 FLASH的起始地址
#define FLASH_SIZE       (1*1024*1024)  //Flash 大小1M

#define FLASH_IS_EQU		0	//FLASH内容写与待写入数据相同，无需擦除和写操作
#define FLASH_REQ_WRITE		1	//FLASH无需擦除，直接写
#define FLASH_REQ_ERASE		2	//FLASH需要先擦除再写
#define FLASH_PARAM_ERR		3	//函数参数错误

//FLASH 扇区的起始地址
#define ADDR_FLASH_SECTOR_0     ((u32)0x08000000) 	//扇区0起始地址, 16 Kbytes  
#define ADDR_FLASH_SECTOR_1     ((u32)0x08004000) 	//扇区1起始地址, 16 Kbytes  
#define ADDR_FLASH_SECTOR_2     ((u32)0x08008000) 	//扇区2起始地址, 16 Kbytes  
#define ADDR_FLASH_SECTOR_3     ((u32)0x0800C000) 	//扇区3起始地址, 16 Kbytes  
#define ADDR_FLASH_SECTOR_4     ((u32)0x08010000) 	//扇区4起始地址, 64 Kbytes  
#define ADDR_FLASH_SECTOR_5     ((u32)0x08020000) 	//扇区5起始地址, 128 Kbytes  
#define ADDR_FLASH_SECTOR_6     ((u32)0x08040000) 	//扇区6起始地址, 128 Kbytes  
#define ADDR_FLASH_SECTOR_7     ((u32)0x08060000) 	//扇区7起始地址, 128 Kbytes  
#define ADDR_FLASH_SECTOR_8     ((u32)0x08080000) 	//扇区8起始地址, 128 Kbytes  
#define ADDR_FLASH_SECTOR_9     ((u32)0x080A0000) 	//扇区9起始地址, 128 Kbytes  
#define ADDR_FLASH_SECTOR_10    ((u32)0x080C0000) 	//扇区10起始地址,128 Kbytes  
#define ADDR_FLASH_SECTOR_11    ((u32)0x080E0000) 	//扇区11起始地址,128 Kbytes  

u8 STMFLASH_ReadByte(u32 FlashAddr, u8 *Dest, u32 size);
uint16_t STM_GetFlashSector(u32 addr);
uint8_t STM_CmpFlash(u32 FlashAdrr, uint8_t * CmpBuf, uint32_t size);
uint8_t STM_WriteFlash(uint32_t FlashAddr, uint8_t*Src, uint32_t size);
uint8_t STM_EraseFlash(u32 FlashAddr);



















