//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//�о�԰����
//���̵�ַ��http://shop73023976.taobao.com
//
//  �� �� ��   : main.c
//  �� �� ��   : v2.0
//  ��    ��   : HuangKai
//  ��������   : 2018-10-31
//  ����޸�   : 
//  ��������   :��ʾ����(STM32F103ϵ��)
//              ˵��: 
//              ----------------------------------------------------------------
//              GND   ��Դ��
//              VCC   3.3v��Դ
//              SCL   PA0��SCLK��
//              SDA   PA1��MOSI��
//              RES   PA2
//              DC    PA3
//              CS    PA4
//              BLK   PA5
//              ----------------------------------------------------------------
// �޸���ʷ   :
// ��    ��   : 
// ��    ��   : HuangKai
// �޸�����   : �����ļ�
//��Ȩ���У�����ؾ���
//Copyright(C) �о�԰����2018-10-31
//All rights reserved
//******************************************************************************/
#include "delay.h"
#include "sys.h"
#include "led.h"
#include "lcd_init.h"
#include "lcd.h"
#include "pic.h"
int main(void)
{
	float t=0;
	delay_init();
	LED_Init();//LED��ʼ��
	LCD_Init();//LCD��ʼ��
	LCD_Fill(0,0,LCD_W,LCD_H,WHITE);
	LED=0;
	while(1)
	{
		LCD_ShowChinese(40,0,"�о�԰����",RED,WHITE,16,0);
		LCD_ShowString(10,20,"LCD_W:",RED,WHITE,16,0);
		LCD_ShowIntNum(58,20,LCD_W,3,RED,WHITE,16);
		LCD_ShowString(10,40,"LCD_H:",RED,WHITE,16,0);
		LCD_ShowIntNum(58,40,LCD_H,3,RED,WHITE,16);
		LCD_ShowFloatNum1(10,60,t,4,RED,WHITE,16);
		t+=0.11;
		LCD_ShowPicture(100,20,40,40,gImage_1);
	}
}

ID	Name	Designator	Footprint	Quantity	image	��ע				
1	7525	BZ1	BUZ-SMD_GSC7525RA	1	������	��				
3	222/100V	C2,C25,C35��C50,C62	C0805	5	��Ƭ���� 100v2200pf	��				
4	102/50V	C3,C60	C0603	1	��Ƭ���� 50v1nf	��				
5	105/25V	C1,C53,C64,C4,C39,C41,C46,C47,C54,C55,C67,C70,C73,C74,C75,C76,C77,C78,C79,C85,C87,C88,C93,C95,C96,C99	C0603	26	��Ƭ���� 25v1uf	��				
6	47u/80V	C5,C6	CAP-SMD_BD10.0-L10.3-W10.3-RD	2	��������	��	C5260769	C249920	C2163322	C178556
7	106/16V	C7,C8,C44,C48��C52,C57,C58	C0805	7	��Ƭ���� 16v10uf	�ޣ�ֻ��10v��				
8	100u/16V	C9,C43	CAP-D6.3��H5.5	2	�������� 16v100uf	��Һ����������				
9	475/100V	C10,C11,C12,C13,C18,C19,C23,C24,C33,C34,C92,C97��C14,C15,C81,C82	C1210	16	��Ƭ����100v4.7uf	��				
11	68u/35V	C16,C17	CAP-SMD_BD10.0-L10.3-W10.3-RD	2	��̬���ݣ��ο�sheet2	�У���Һ������				
12	104/50V	C20,C51	C0805	2	��Ƭ���ݣ�50v100nf	��				
13	105/50V	C21,C49	C0805	2	��Ƭ���ݣ�50v1uf	��				
14	47u/35V	C22,C38	CAP-D6.3��H5.5	2	��Һ�����35v��	�ޣ�Ҫ80v��				
15	33u/63V	C26,C28,C29	CAP-SMD_BD8.0-L8.3-W8.3-RD	3	��Һ���	��				
16	104/50V	C27,C40,C59,C83,C86,C94	C0603	6	��Ƭ���� 50v100nf	��				
17	330u/63V	C30	CAP-TH_BD10.0-P5.00-D1.0-FD	1	�������ݣ�	��				
18	47u/80V	C31,C32	CAP-SMD_BD10.0-L10.3-W10.3-RD	2	��Һ���	��				
19	NC	C36,C65,C56	C0603	2						
20	680p/50V	C37	C0603	1	��Ƭ����	��				
21	220p	C42	C0603	1	��Ƭ����	��				
22	100p	C45	C0603	1	��Ƭ����	��				
27	330p/50V	C61	C0603	1	��Ƭ����	��				
28	103/50V	C63	C0603	1	��Ƭ���� 50v10nf	��				
29	106/16V		C0603	6	��Ƭ���� 16v10uf	��				
30	106/25V	C80	C0603	1	��Ƭ���� 25v10uf	��				
31	22p	C84,C90	C0603	2	��Ƭ����	��				
32	104/25V	C89	C0603	1	��Ƭ���� 25v100nf	��				
33	ZH1.5-10AW	CN4,CN5	ZH1.5-WS-10P	2	�߶԰�����	ȯ��				
34	XT60_M_2AW	CN6	CONN-TH_XT60	1	ģ�Ͳ�ͷĸ��	��				
35	5557S-2*2P	CN7	CONN-TH_4P-P4.20_5557S-2-2P	1	�߶԰�����	��				
36	1N4148	D1,D2,D6��D8,D9,D15	SOD-323F_L2.0-W1.6-LS2.5-RD	6	���ض�����	��				
37	DSK110	D3,D4,D5,D11,D12,D13,D14	SOD-123_L2.8-W1.8-LS3.7-FD	7	Ф�ػ�������	ȯ��				
38	SB20100L	D7,D10	TO-277_3P-L5.4-W4.0-LS6.5-BR	2	Ф�ػ�������	ȯ��				
40	30A SMALL	F1	����С�ű�����	1	//image.lceda.cn/szlcsc/C58066.jpg	����				
41	SWD	H1	HDR-F-2.54_1X4	1	����	��				
42	15uH_106125	L1	IND_CS106125_15UH	1	���					
43	R22_0630	L2	IND-SMD_L7.0-W6.6_FXL0630	1	���					
44	18u_090125	L3	S166125_18U	1	���					
45	10uH/0530	L4,L5	IND-SMD_L5.4-W5.2_FXL0530	2	���					
46	GREEN	LED1	LED0603_GREEN	1	��	��				
47	TE	P1	35X35	1	ɶ���ģ�					
48	SYS FAN	P2	CONN-TH_2P-P2.50-XH2.54-2P	1	���Ƚӿ�	��				
49	MAIN FAN	P3	CONN-TH_2P-P2.50-XH2.54-2P	1	���Ƚӿ�	��				
50	CSD19531	Q2,Q3,Q4,Q7	PG-TDSON8	3	��ЧӦ��CSD19531Q5A	��	//image.lceda.cn/szlcsc/C65189.jpg			
52	CSD18540	Q5,Q6	PG-TDSON8	2	��ЧӦ��CSD18540Q5B	��	//image.lceda.cn/szlcsc/C65189.jpg			
53	S8050	Q8,Q9,Q10,Q11	SOT-23-3_L2.9-W1.3-P1.90-LS2.4-TR	4	������	��				
54	5R1	R1	R0603	1						
55	180K	R2	R0603	1						
56	4.3K	R3,R57	R0603	2						
57	2K/0.1%	R4,R11	R0603	2						
58	20K/0.1%	R5,R6,R12,R13	R0603	4						
59	20K	R7,R10,R24,R42	R0603	4						
60	5.1K	R8,R25,R31,R41,R44,R59,R60,R61	R0603	8						
61	1K	R9,R40,R53	R0603	2						
62	10K	R14,R27,R29,R33,R34,R37,R43,R62,R66,R68	R0603	10						
63	5R1	R15,R18	R0805	2						
64	2R2	R16	R0603	1						
65	0R	R17,R36	R0805	2						
66	2K	R19,R35,R51,R70	R0603	4						
67	3R3	R20,R21	R0603	2						
68	6.8K	R22	R0603	1						
69	47K	R23	R0603	1						
70	51K	R26,R32	R0603	2						
71	510K	R28	R0603	1						
72	15R	R30	R0603	1						
73	0R	R38,R45,R48,R54,R63,R64	R0603	6		��				
74	300K	R39	R0603	1						
75	200R	R47	R0603	1						
76	30K	R52	R0603	1						
78	5.1K	R69	R0603	1						
79	5.1K	RN2	RES-ARRAY-SMD_0603-8P-L3.2-W1.6-BL	1						
80	2mR	RS1,RS2	R2512	2		��				
81	XL1509-ADJ	U1,U20	SOIC-8	2	DCDC��ԴоƬ	ȯ��				
82	TPS40210DGQR	U3	MSOP10-POWERPAD-LT-MSE-10-EDP-2060X1830TP_N	1	DCDC��ԴоƬ	��				
83	AT24C02	U4	SOIC-8	1	EEPROM	ȯ��				
84	LM5116	U5	HTSSOP-20_L6.5-W4.4-P0.65-LS6.4-BL-EP	1	DCDC��ԴоƬ	��				
85	DAC8531E/2K5	U6,U8	MSOP-8_L3.0-W3.0-P0.65-LS4.9-BL	2	��ģת��оƬDAC	��	38			
86	AMS1117-5.0	U7	SOT-89-3_L4.5-W2.5-P1.50-LS4.2-TL	1	������ѹ����LDO��	ȯ��				
87	SL27517	U9	SOT-23-5_L2.9-W1.6-P0.95-LS2.8-TL	1	դ������оƬ	ȯ��				
88	ME6211C33M5G-N	U10	SOT-23-5_L3.0-W1.7-P0.95-LS2.8-BR	1	������ѹ����LDO��	��				
89	INA282AIDR	U11	SOIC-8	1	������Ӧ�Ŵ���	��	17			
90	CJ431	U12	SOT-23-3_L2.9-W1.6-P1.90-LS2.8-BR	1	��ѹ��׼оƬ	�У�Ʒ�Ʋ�ͬ				
91	SGM58031	U13	MSOP-10_L3.0-W3.0-P0.50-LS5.0-BR	1	ģ��ת��оƬADC	�ޣ��Ա�����C37593?	//image.lceda.cn/szlcsc/C37593.jpg			
92	AZ432ANTR-E1	U14	SOT-23-3_L2.9-W1.6-P1.90-LS2.8-BR	1	��ѹ��׼оƬ	�У�Ʒ�Ʋ�ͬ				
93	LMV321	U18	SOT-23-5_L3.0-W1.7-P0.95-LS2.8-BR	1	����Ŵ���	�ޣ�ȯ��				
94	8MHz	X1	OSC-SMD_4P-L3.2-W2.5-BL	1	����	��				
95	BZT52C12	ZD1,ZD2,ZD3	SOD-123_L2.7-W1.6-LS3.7-RD	3	��ѹ������	ȯ��	//image.lceda.cn/szlcsc/C14548.jpg			
96	BZT52C7V5	ZD4	SOD-123_L2.7-W1.6-LS3.7-RD	1	��ѹ������	ȯ��	//image.lceda.cn/szlcsc/C14548.jpg			
97	COS722SR	U2	SOIC-8	1	����Ŵ���	��	http://image.lceda.cn/szlcsc/C9385.jpg			
98	APM32F103C8T6	U15	LQFP-48_L7.0-W7.0-P0.50-LS9.0-BL	1	��	�Ա��������				
99	GS8552MR	U16	MSOP8	1	�����˷�	�ޣ��������				


CS106125 15uH���ʵ�е����ת	����
CS166125 18uH���ʵ�е����ת	����
HBW 80V 47uF��Һ��ϵ��ݵ����ת	��Һ���
HBW 63V 33uF��Һ��ϵ��ݵ����ת	��Һ���
OCV 35V 68uF��̬���ݵ����ת	��̬


ID	Name	Designator	Footprint	Quantity	Manufacturer Part	Manufacturer	Supplier Part	Pins	Contributor	image	
1	105/50V	C1,C2	C0805	2				2	LCEDA_Lib	��Ƭ����	��
2	470u/10V	C3,C9	CAP-D6.3��H5.5	2				2	LCEDA_Lib	��������	��
3	106/16V	C4,C10,C52	C0805	3				2	LCEDA_Lib	��Ƭ����	��
4	104/50V	C5,C18,C35,C44,C45,C46,C47,C48,C53,C54	C0603	10				2	LCEDA_Lib	��Ƭ����	��
5	104/50V	C6	C0805	1				2	LCEDA_Lib	��Ƭ����	��
6	105/25V	C7,C12,C21,C23,C25,C27,C28,C29,C32,C34,C43	C0603	11				2	LCEDA_Lib	��Ƭ����	��
7	105/16V	C11	C0603	1				2	LCEDA_Lib	��Ƭ����	��
8	104/16V	C16,C17,C40	C0603	3				2	LCEDA_Lib	��Ƭ����	��
9	106/16V	C20	C0603	1				2	LCEDA_Lib	��Ƭ����	��
10	226/6.3V	C22	C0603	1				2	LCEDA_Lib	��Ƭ����	��
11	20p	C24	C0603	1				2	LCEDA_Lib	��Ƭ����	��
12	106/6.3V	C26,C36,C38	C0603	3				2	LCEDA_Lib	��Ƭ����	��
13	22p	C30,C31	C0603	2				2	LCEDA_Lib	��Ƭ����	��
14	222/6.3V	C33	C0603	1				2	LCEDA_Lib	��Ƭ����	��
15	103/50V	C37	C0603	1				2	LCEDA_Lib	��Ƭ����	��
16	332/50V	C39	C0603	1				2	LCEDA_Lib	��Ƭ����	��
17	103/500V	C41	C1206	1				2	LCEDA_Lib	��Ƭ����	��
18	222/50V	C42	C0805	1				2	LCEDA_Lib	��Ƭ����	��
19	DEBUG	CN1	ZH-1.5-8A	1			C190820	8	LCEDA_Lib	����	��
20	SPI_INTERFACE	CN2	ZH1.5-LS-10P	1			C57369	10	LCEDA_Lib	����	��
21	PACK_BOARD	CN4	HDR-F-2.54_1X5	1			C50950	5	LCEDA_Lib	5pin��ĸ	ȯ��
22	CONTROL CONN	CN5	ZH1.5-LS-10P	1			C57369	10	LCEDA_Lib	����	��
23	0.3K-HX-15PWB	CN6	FPC-SMD_15P-P0.30_HDGC_.3K-HX-15PWB	1	0.3K-HX-15PWB	HDGC(���¹���)	C2919525	17	LCSC	15p0.3FPC������	�ޣ�ȯ��
24	SS14	D1,D2	SMA_L4.3	2	SS14	MDD	C2480	2		Ф�ػ�������	��
25	BZT52B3V3	D13	SOD-323FH_L2.0-W1.3-LS2.7-RD	1	BZT52-C5V1J	Nexperia	C550300	2	LCSC	��ѹ������	ȯ��
26	6x6x6Plastic head	F1,F2,F3,F4,F5	SW-SMD_4P-L6.0-W6.0-P4.50-LS8.6	5	6x6x6Plastic head	ReliaPro	C23550	4		�ᴥ����	��
27	1206FT 0.75A	FU1	F1206	1	1206FT 0.75A	Skygate	C669433	2	LCSC	һ���Ա���˿	�ޣ��Ա�
28	100R/100M	L1,L5,L6	L0603	3				2	LCEDA_Lib	����	ȯ��
29	101_CDRH74	L3	CDRH74	1				2	LCEDA_Lib	���ʵ��	ȯ��
30	10uH_0520	L4	IND-SMD_L5.4-W5.2_FXL0530	1				2	LCEDA_Lib	���ʵ��	ȯ��
31	SRF1280_330	L7	SRF1280	1				4	XACT	���ʵ��	ȯ��
32	SRF0703_222	L8	SRF0703	1				4	XACT	���ʵ��	ȯ��
33	ERR	LED1	LED0603_RED	1	19-217/R6C-AL1M2VY/3T	EVERLIGHT(̨���ڹ�)	C72044	2	LCEDA_01		��
34	RUN	LED2	LED0603_GREEN	1	19-217/GHC-YR1S2/3T	EVERLIGHT(̨���ڹ�)	C72043	2	LCEDA_Lib		��
35	PRO	LED3	LED0603_GREEN	1	19-217/GHC-YR1S2/3T	EVERLIGHT(̨���ڹ�)	C72043	2	LCEDA_Lib		��
36	TDC	LED4	LED0603_GREEN	1	19-217/GHC-YR1S2/3T	EVERLIGHT(̨���ڹ�)	C72043	2	LCEDA_Lib		��
37	RDC	LED5	LED0603_GREEN	1	19-217/GHC-YR1S2/3T	EVERLIGHT(̨���ڹ�)	C72043	2	LCEDA_Lib		��
38	FUSE	LED6	LED0603_RED	1	19-217/R6C-AL1M2VY/3T	EVERLIGHT(̨���ڹ�)	C72044	2	LCEDA_01		��
39	I	LED7	LED0603_GREEN	1	19-217/GHC-YR1S2/3T	EVERLIGHT(̨���ڹ�)	C72043	2	LCEDA_Lib		��
40	O	LED8	LED0603_GREEN	1	19-217/GHC-YR1S2/3T	EVERLIGHT(̨���ڹ�)	C72043	2	LCEDA_Lib		��
41	S	LED9	LED0603_GREEN	1	19-217/GHC-YR1S2/3T	EVERLIGHT(̨���ڹ�)	C72043	2	LCEDA_Lib		��
42	VB	LED10	LED0603_RED	1	19-217/R6C-AL1M2VY/3T	EVERLIGHT(̨���ڹ�)	C72044	2	LCEDA_01		��
43	VC	LED11	LED0603_RED	1	19-217/R6C-AL1M2VY/3T	EVERLIGHT(̨���ڹ�)	C72044	2	LCEDA_01		��
44	S8050	Q5	SOT-23-3_L2.9-W1.3-P1.90-LS2.4-TR	1	2n3904S-RTK/PS	KEC	C18536	3	LCEDA_Lib	������	��
45	2K	R1,R3	R0603	2				2	LCEDA_Lib		�а�
46	5.1K	R2,R24,R27,R30	R0603	4				2	LCEDA_Lib		��
47	200K	R4,R5,R28	R0603	3				2	LCEDA_Lib		
48	1K	R6	R0805	1				2	LCEDA_Lib		��
49	47R	R7,R8,R9,R10	R0603	4				2	LCEDA_Lib		
50	510R	R11,R12,R13,R22	R0603	4				2	LCEDA_Lib		
51	6.8K	R14	R0603	1				2	LCEDA_Lib		
52	10K	R15,R17,R18,R19,R20,R25,R26,R36	R0603	8				2	LCEDA_Lib		
53	47K	R16	R0603	1				2	LCEDA_Lib		
54	20K	R21	R0603	1				2	LCEDA_Lib		
55	5R1	R23	R0603	1				2	LCEDA_Lib		
56	5R1	R29	R0805	1				2	LCEDA_Lib		��
57	3K	R31,R32,R33,R34,R35	R0603	5				2	LCEDA_Lib		
58	100R	R38,R39	R0603	2				2	LCEDA_Lib		
59	ESP32-D0WDQ6	U1	QFN48_L6.0-W6.0-P0.4-BL	1	ESP32-D0WDQ6	ESPRESSIF		49	XACT	ESP32	�ޣ��Ա�
60	BY25Q32BSWIG	U2	SOIC-8_L4.9-W3.9-P1.27-LS6.0-TR	1	BY25Q32BSWIG	BOYAMICRO	C394870	9	LCSC	NORFLASH	�ޣ��Ա�
61	XL6007E1	U3	SOIC-8_L5.0-W4.0-P1.27-LS6.0-TL	1	XL6007E1	XLSEMI	C73334	8		DCDC��ԴоƬ	��
63	LTL431	U5	SOT-23-3_L2.9-W1.3-P1.90-LS2.4-BR	1	LTL431ATLT1G	LRC	C83052	3		��ѹ��׼оƬ	�ޣ������
64	6N137S1(TA)	U6,U7,U8	SMD-8_L9.8-W6.6-P2.54-LS10.3-BL	3	6N137S1(TA)	Everlight Elec	C110020	8	LCSC	�߼��������	��
65	LTV-356T	U4,U9,U17,U18	OPT_SMD_TLV356	3	LTV-356T	LITEON	C125117	5	LCSC	������������	��
66	P028B055-IPS	U10	TK028F4418	1					XACT		������
67	RY3430	U11	SOT-23-5_L3.0-W1.7-P0.95-LS2.8-BL	1	RY3430	RYCHIP Semiconductor Inc.	C370755	5	LCSC	DCDC��ԴоƬ	�ޣ������
68	ME6211C33M5G-N	U12	SOT-23-5_L3.0-W1.7-P0.95-LS2.8-BR	1	ME6211C33M5G-N	MICRONE	C82942	5		//image.lceda.cn/szlcsc/C82942.jpg	��
69	STM32G030F6P6	U13	ETSSOP20_L6.5-W4.4-P0.65-LS6.4-BL-EP	1				20	XACT		�ޣ��Ա�
70	EEI_TECHNOLOGY_LOGO	U14	EEITECHNOLOGY_LOGO	1					XACT		
71	AMS1117-3.3	U15	PG-SOT223-4_L6.5-W3.5-P2.30-LS7.0-BR	1	AMS1117-3.3	SK	C165482	4	LCSC		��
72	40MHz	X1	CRYSTAL-SMD_4P-L3.2-W2.5-BL	1	X3S040000BF1H-Z	HELE	C133482	4	LCSC		��
73	74HCT125	U16	SO-14_L8.6-W3.9-P1.27-LS6.0-BL	1	SN74HCT125D	TI(��������)	C1548241	14		������	��
