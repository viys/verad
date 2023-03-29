#ifndef __VERAD_DATA_TYPE_H
#define __VERAD_DATA_TYPE_H


/* date type */
typedef unsigned char  	verad_u8  ;	//  8 bits 
typedef unsigned int  	verad_u16 ;	// 16 bits 
typedef unsigned long  	verad_u32 ;	// 32 bits 
								
								
typedef signed char     verad_int8  ;	//  8 bits 
typedef signed int      verad_int16  ;	// 16 bits 
typedef signed long     verad_int32  ;	// 32 bits 
								
								
typedef volatile verad_int8   vint8  ;	//  8 bits 
typedef volatile verad_int16  vint16 ;	// 16 bits 
typedef volatile verad_int32  vint32 ;	// 32 bits 
								
								
typedef volatile verad_u8  vuint8 ;	//  8 bits 
typedef volatile verad_u16 vuint16;	// 16 bits 
typedef volatile verad_u32 vuint32;	// 32 bits 

typedef struct{
    verad_int8 resive_status;
}Va_USART_Struct;

extern Va_USART_Struct Va_USART_Str;


#endif // !__VERAD_DATA_TYPE_H
