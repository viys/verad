#include "verad_usart.h"

Va_USART_Struct Va_USART_Str;

void Va_USART_IRQHandler(verad_u8 res){

		if(res==0x65 || Va_USART_Str.resive_status!=0x00){
			//jie shou biao zhi wei
			Va_USART_Str.resive_status = 0x01; //接收到控制帧
			switch(Va_USART_Str.resive_status){
				case 0x01:
					usbStr.receiveBuff[0] = res;
					Va_USART_Str.resive_status = 0x02;
					break;
				case 0x02:
					usbStr.receiveBuff[1] = res;
					Va_USART_Str.resive_status = 0x03;
				case 0x03:
					usbStr.receiveBuff[2] = res;
					Va_USART_Str.resive_status = 0x03;
				case 0x04:
					usbStr.receiveBuff[3] = res;
					Va_USART_Str.resive_status = 0x04;
				case 0x05:
					usbStr.receiveBuff[4] = res;
					Va_USART_Str.resive_status = 0x05;
				case 0x06:
					usbStr.receiveBuff[5] = res;
					Va_USART_Str.resive_status = 0x06;
				case 0x07:
					usbStr.receiveBuff[6] = res;
					Va_USART_Str.resive_status = 0x07;
				case 0x08:
					usbStr.receiveBuff[7] = res;
					Va_USART_Str.resive_status = 0x00;
					usbStr.receiveStart = 0;
				default:
					break;
			}

}
