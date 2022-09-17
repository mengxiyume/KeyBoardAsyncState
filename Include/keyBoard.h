#pragma once

#ifdef FIELD
typedef struct KeyBoard
{
	bool NULL0x00 : 1;		// -				//0x00

	bool LButton : 1;		//������			//0x01
	bool RButton : 1;		//����Ҽ�			//0x02
	bool Cancel : 1;		//�����жϴ���		//0x03
	bool MButton : 1;		//����м�			//0x04
	bool XButton1 : 1;		//��갴��X1		//0x05
	bool XButton2 : 1;		//��갴��X2		//0x06

	bool NULL0x01 : 1;		// -				//0x07

	bool Back : 1;			//backspace			//0x08
	bool Tab : 1;			//tab				//0x09

	bool NULL0x2 : 1;		// -				//0x0A
	bool NULL0x3 : 1;		// -				//0x0B

	bool Clear : 1;			//Clear				//0x0C
	bool Enter : 1;			//Enter				//0x0D

	bool NULL0x04 : 1;		// -				//0x0E
	bool NULL0x05 : 1;		// -				//0x0F

	bool Shift : 1;			//Shift				//0x10
	bool Ctrl : 1;			//Ctrl				//0x11
	bool Alt : 1;			//Alt				//0x12
	bool Pause : 1;			//Pause				//0x13
	bool CapsLock : 1;		//CapsLock			//0x14

	bool IMEKana : 1;		//IME Kana			//0x15		//IME Hanguel	IME Hangul
	bool IMEOn : 1;			//IME On			//0x16
	bool IMEJunja : 1;		//IME Junja			//0X17
	bool IMEFinal : 1;		//IME ����ģʽ		//0X18
	bool IMEKanji : 1;		//IME Hanja			//0x19		//IME Kanji
	bool IMEOff : 1;		//IME Off			//0x1A
	bool Esc : 1;			//esc				//0x1B
	bool IMEConvert : 1;	//IME ת��			//0x1C
	bool IMENoConvert : 1;	//IME ��ת��		//0x1D
	bool IMEAccept : 1;		//IME ����			//0x1E
	bool IMEAModeChange : 1;//IME ģʽ��������	//0x1F

	bool Space : 1;			//�ո�				//0x20

	bool PAGEUp : 1;		//pg Up				//0x21
	bool PAGEDown : 1;		//pg Down			//0x22

	bool End : 1;			//end				//0x23
	bool Home : 1;			//home				//0x24

	bool Left : 1;			//���				//0x25
	bool Up : 1;			//�ϼ�				//0x26
	bool Right : 1;			//�Ҽ�				//0x27
	bool Down : 1;			//�¼�				//0x28

	bool Selct : 1;			//SELECT			//0x29
	bool Print : 1;			//PRINT				//0x2A
	bool Execute : 1;		//EXECUTE			//0x2B

	bool PrtSc : 1;			//��ӡ��Ļ��		//0x2C
	bool InsErt : 1;		//insert			//0x2D
	bool Delete : 1;		//delete			//0X2E
	bool Hellp : 1;			//������			//0x2F

	bool _0_ : 1;			//����0				//0x30
	bool _1_ : 1;			//����1				//0x31
	bool _2_ : 1;			//����2				//0x32
	bool _3_ : 1;			//����3				//0x33
	bool _4_ : 1;			//����4				//0x34
	bool _5_ : 1;			//����5				//0x35
	bool _6_ : 1;			//����6				//0x36
	bool _7_ : 1;			//����7				//0x37
	bool _8_ : 1;			//����8				//0x38
	bool _9_ : 1;			//����9				//0x39

	bool NULL0x06 : 1;		// -				//0x3A
	bool NULL0x07 : 1;		// -				//0x3B
	bool NULL0x08 : 1;		// -				//0x3C
	bool NULL0x09 : 1;		// -				//0x3D
	bool NULL0x0A : 1;		// -				//0x3E
	bool NULL0x0B : 1;		// -				//0x3F
	bool NULL0x0C : 1;		// -				//0x40

	bool _A_ : 1;			//��ĸA��			//0x41
	bool _B_ : 1;			//��ĸB��			//0x42
	bool _C_ : 1;			//��ĸC��			//0x43
	bool _D_ : 1;			//��ĸD��			//0x44
	bool _E_ : 1;			//��ĸE��			//0x45
	bool _F_ : 1;			//��ĸF��			//0x46
	bool _G_ : 1;			//��ĸG��			//0x47
	bool _H_ : 1;			//��ĸH��			//0x48
	bool _I_ : 1;			//��ĸI��			//0x49
	bool _J_ : 1;			//��ĸJ��			//0x4A
	bool _K_ : 1;			//��ĸK��			//0x4B
	bool _L_ : 1;			//��ĸL��			//0x4C
	bool _M_ : 1;			//��ĸM��			//0x4D
	bool _N_ : 1;			//��ĸN��			//0x4E
	bool _O_ : 1;			//��ĸO��			//0x4F
	bool _P_ : 1;			//��ĸP��			//0x50
	bool _Q_ : 1;			//��ĸQ��			//0x51
	bool _R_ : 1;			//��ĸR��			//0x52
	bool _S_ : 1;			//��ĸS��			//0x53
	bool _T_ : 1;			//��ĸT��			//0x54
	bool _U_ : 1;			//��ĸU��			//0x55
	bool _V_ : 1;			//��ĸV��			//0x56
	bool _W_ : 1;			//��ĸW��			//0x57
	bool _X_ : 1;			//��ĸX��			//0x58
	bool _Y_ : 1;			//��ĸY��			//0x59
	bool _Z_ : 1;			//��ĸZ��			//0x5A

	bool LWin : 1;			//��win				//0x5B
	bool RWin : 1;			//��win				//0x5C
	bool AppS : 1;			//Ӧ�ó����		//0x5D

	bool NULL0x0D : 1;		// -				//0x5E

	bool Sleep : 1;			//˯�߼�			//0x5F

	bool Num_0_ : 1;		//���ּ���0��		//0x60
	bool Num_1_ : 1;		//���ּ���1��		//0x61
	bool Num_2_ : 1;		//���ּ���2��		//0x62
	bool Num_3_ : 1;		//���ּ���3��		//0x63
	bool Num_4_ : 1;		//���ּ���4��		//0x64
	bool Num_5_ : 1;		//���ּ���5��		//0x65
	bool Num_6_ : 1;		//���ּ���6��		//0x66
	bool Num_7_ : 1;		//���ּ���7��		//0x67
	bool Num_8_ : 1;		//���ּ���8��		//0x68
	bool Num_9_ : 1;		//���ּ���9��		//0x69


	bool Mul : 1;			// *��				//0x6A
	bool Add : 1;			// +��				//0x6B
	bool Separator : 1;		//  : 1;��			//0x6C
	bool Sub : 1;			// -��				//0x6D
	bool Decimal : 1;		// ʮ���Ƽ�			//0x6E
	bool Div : 1;			// /��				//0x6F

	bool _F1_ : 1;			//F1				//0x70
	bool _F2_ : 1;			//F2				//0x71
	bool _F3_ : 1;			//F3				//0x72
	bool _F4_ : 1;			//F4				//0x73
	bool _F5_ : 1;			//F5				//0x74
	bool _F6_ : 1;			//F6				//0x75
	bool _F7_ : 1;			//F7				//0x76
	bool _F8_ : 1;			//F8				//0x77
	bool _F9_ : 1;			//F9				//0x78
	bool _F10_ : 1;			//F10				//0x79
	bool _F11_ : 1;			//F11				//0x7A
	bool _F12_ : 1;			//F12				//0x7B
	bool _F13_ : 1;			//F13				//0x7C
	bool _F14_ : 1;			//F14				//0x7D
	bool _F15_ : 1;			//F15				//0x7E
	bool _F16_ : 1;			//F16				//0x7F
	bool _F17_ : 1;			//F17				//0x80
	bool _F18_ : 1;			//F18				//0x81
	bool _F19_ : 1;			//F19				//0x82
	bool _F20_ : 1;			//F20				//0x83
	bool _F21_ : 1;			//F21				//0x84
	bool _F22_ : 1;			//F22				//0x85
	bool _F23_ : 1;			//F23				//0x86
	bool _F24_ : 1;			//F24				//0x87

	bool NULL0x0E : 1;		// - 				//0x88
	bool NULL0x0F : 1;		// - 				//0x89
	bool NULL0x10 : 1;		// - 				//0x8A
	bool NULL0x11 : 1;		// - 				//0x8B
	bool NULL0x12 : 1;		// - 				//0x8C
	bool NULL0x13 : 1;		// - 				//0x8D
	bool NULL0x14 : 1;		// - 				//0x8E
	bool NULL0x15 : 1;		// - 				//0x8F

	bool NumLock : 1;		//NUM LOCK ��Կ		//0x90
	bool Scroll : 1;		//Scroll Lock��		//0x91

	bool NULL0x16 : 1;		// - 				//0x92
	bool NULL0x17 : 1;		// - 				//0x93
	bool NULL0x18 : 1;		// - 				//0x94
	bool NULL0x19 : 1;		// - 				//0x95
	bool NULL0x1A : 1;		// - 				//0x96
	bool NULL0x1B : 1;		// - 				//0x97
	bool NULL0x1C : 1;		// - 				//0x98
	bool NULL0x1D : 1;		// - 				//0x99
	bool NULL0x1E : 1;		// - 				//0x9A
	bool NULL0x1F : 1;		// - 				//0x9B
	bool NULL0x20 : 1;		// - 				//0x9C
	bool NULL0x21 : 1;		// - 				//0x9D
	bool NULL0x22 : 1;		// - 				//0x9E
	bool NULL0x23 : 1;		// - 				//0x9F


	bool LShift : 1;		//��shift			//0xA0
	bool RShift : 1;		//��shift			//0xA1
	bool LCtrl : 1;			//��Ctrl			//0xA2
	bool RCtrl : 1;			//��Ctrl			//0xA3
	bool LAlt : 1;			//��Alt				//0xA4
	bool RAlt : 1;			//��Alt				//0xA5

	bool BriwseRBreak : 1;		//��������˼�				//0xA6
	bool BriwseRForward : 1;	//�����ǰ����				//0xA7
	bool BriwseRRefresh : 1;	//�����ˢ�¼�				//0xA8
	bool BriwseRStop : 1;		//�����ֹͣ��				//0xA9
	bool BriwseRSearch : 1;		//�����������				//0xAA
	bool BriwseRFavorites : 1;	//������ղؼ�				//0xAB
	bool BriwseRHome : 1;		//�������ʼ����ҳ��		//0xAC

	bool VolumeMute : 1;		//������					//0xAD
	bool VolumeDown : 1;		//������С��				//0xAE
	bool VolumeUp : 1;			//�������Ӽ�				//0xAF
	bool MedaNextTrack : 1;		//��һ��Ŀ��				//0xB0
	bool MedaPrevTrack : 1;		//��һ��Ŀ��				//0xB1
	bool MedaStop : 1;			//ֹͣý���				//0xB2
	bool MedaPlayPause : 1;		//������ͣý���			//0xB3
	bool LaunchMail : 1;		//�����ʼ���				//0xB4
	bool LaunchMediaSelect : 1;	//ѡ��ý���				//0xB5
	bool LaunchApp1 : 1;		//����Ӧ�ó���1��			//0xB6
	bool LaunchApp2 : 1;		//����Ӧ�ó���2��			//0xB7

	bool NULL0x24 : 1;		// -				//0xB8
	bool NULL0x25 : 1;		// -				//0xB9

	bool Oem1 : 1;			//	 : 1; :			//0xBA
	bool OemPlus : 1;		//	+				//0xBB
	bool OemComma : 1;		//	,				//0xBC
	bool OemMinus : 1;		//	" - "			//0xBD
	bool OemPeriod : 1;		//	.				//0xBE
	bool Oem2 : 1;			//	/ ?				//0xBF
	bool Oem3 : 1;			//	~				//0xC0

	bool NULL0x26 : 1;		// - 				//0xC1
	bool NULL0x27 : 1;		// - 				//0xC2
	bool NULL0x28 : 1;		// - 				//0xC3
	bool NULL0x29 : 1;		// - 				//0xC4
	bool NULL0x2A : 1;		// - 				//0xC5
	bool NULL0x2B : 1;		// - 				//0xC6
	bool NULL0x2C : 1;		// - 				//0xC7
	bool NULL0x2D : 1;		// - 				//0xC8
	bool NULL0x2E : 1;		// - 				//0xC9
	bool NULL0x2F : 1;		// - 				//0xCA
	bool NULL0x30 : 1;		// - 				//0xCB
	bool NULL0x31 : 1;		// - 				//0xCC
	bool NULL0x32 : 1;		// - 				//0xCD
	bool NULL0x33 : 1;		// - 				//0xCE
	bool NULL0x34 : 1;		// - 				//0xCF
	bool NULL0x35 : 1;		// - 				//0xD0
	bool NULL0x36 : 1;		// - 				//0xD1
	bool NULL0x37 : 1;		// - 				//0xD2
	bool NULL0x38 : 1;		// - 				//0xD3
	bool NULL0x39 : 1;		// - 				//0xD4
	bool NULL0x3A : 1;		// - 				//0xD5
	bool NULL0x3B : 1;		// - 				//0xD6
	bool NULL0x3C : 1;		// - 				//0xD7
	bool NULL0x3D : 1;		// - 				//0xD8
	bool NULL0x3E : 1;		// - 				//0xD9
	bool NULL0x3F : 1;		// - 				//0xDA

	bool Oem4 : 1;			//	[ {				//0xDB
	bool Oem5 : 1;			//	\ |				//0xDC
	bool Oem6 : 1;			//	] }				//0xDD
	bool Oem7 : 1;			//	' "				//0xDE
	bool Oem8 : 1;			//	 : 1;				//0xDF

	bool NULL0x40 : 1;		// -				//0xE0
	bool NULL0x41 : 1;		// -				//0xE1

	bool Oem102 : 1;		//	" <> " �� " \\| "	������׼���̻������102		//0xE2

	bool NULL0x42 : 1;		// -				//0xE3
	bool NULL0x44 : 1;		// -				//0xE4

	bool Processkey : 1;	//IME Process��Կ	//0xE5

	bool NULL0x45 : 1;		// -				//0xE6

	bool Packet : 1;		//���ڽ� Unicode �ַ������������ݡ�					//0xE7
	//�� VK_PACKET �������ڷǼ������뷽���� 32 λ�����ֵ�ĵ��֡�
	//�й���ϸ��Ϣ������ġ���ע�����Լ�KEYBDINPUTSendInputWM_KEYDOWNWM_KEYUP

	bool NULL0x46 : 1;		// - 				//0xE8
	bool NULL0x47 : 1;		// - 				//0xE9
	bool NULL0x48 : 1;		// - 				//0xEA
	bool NULL0x49 : 1;		// - 				//0xEB
	bool NULL0x4A : 1;		// - 				//0xEC
	bool NULL0x4B : 1;		// - 				//0xED
	bool NULL0x4C : 1;		// - 				//0xEE
	bool NULL0x4D : 1;		// - 				//0xEF
	bool NULL0x4E : 1;		// - 				//0xF0
	bool NULL0x4F : 1;		// - 				//0xF1
	bool NULL0x50 : 1;		// - 				//0xF2
	bool NULL0x51 : 1;		// - 				//0xF3
	bool NULL0x52 : 1;		// - 				//0xF4
	bool NULL0x53 : 1;		// - 				//0xF5

	bool Attn : 1;			//Attn��			//0xF6
	bool ExSel : 1;			//ExSel��Կ			//0xF7
	bool ErEOF : 1;			//����EOF��Կ		//0xF9
	bool Play : 1;			//���ż�			//0xFA
	bool Zoom : 1;			//���ż�			//0xFB
	bool NoName : 1;		//Ԥ��				//0xFC
	bool AP1 : 1;			//AP1 ��			//0xFD
	bool OemClear : 1;		//�����			//0xFE

	bool NULL0x54 : 1;		// -				//0xFF

}KeyBoard;
#else
typedef struct KeyBoard
{
	bool NULL0x00;		// -				//0x00

	bool LButton;		//������			//0x01
	bool RButton;		//����Ҽ�			//0x02
	bool Cancel;		//�����жϴ���		//0x03
	bool MButton;		//����м�			//0x04
	bool XButton1;		//��갴��X1		//0x05
	bool XButton2;		//��갴��X2		//0x06

	bool NULL0x01;		// -				//0x07

	bool Back;			//backspace			//0x08
	bool Tab;			//tab				//0x09

	bool NULL0x2;		// -				//0x0A
	bool NULL0x3;		// -				//0x0B

	bool Clear;			//Clear				//0x0C
	bool Enter;			//Enter				//0x0D

	bool NULL0x04;		// -				//0x0E
	bool NULL0x05;		// -				//0x0F

	bool Shift;			//Shift				//0x10
	bool Ctrl;			//Ctrl				//0x11
	bool Alt;			//Alt				//0x12
	bool Pause;			//Pause				//0x13
	bool CapsLock;		//CapsLock			//0x14

	bool IMEKana;		//IME Kana			//0x15		//IME Hanguel	IME Hangul
	bool IMEOn;			//IME On			//0x16
	bool IMEJunja;		//IME Junja			//0X17
	bool IMEFinal;		//IME ����ģʽ		//0X18
	bool IMEKanji;		//IME Hanja			//0x19		//IME Kanji
	bool IMEOff;		//IME Off			//0x1A
	bool Esc;			//esc				//0x1B
	bool IMEConvert;	//IME ת��			//0x1C
	bool IMENoConvert;	//IME ��ת��		//0x1D
	bool IMEAccept;		//IME ����			//0x1E
	bool IMEAModeChange;//IME ģʽ��������	//0x1F

	bool Space;			//�ո�				//0x20

	bool PAGEUp;		//pg Up				//0x21
	bool PAGEDown;		//pg Down			//0x22

	bool End;			//end				//0x23
	bool Home;			//home				//0x24

	bool Left;			//���				//0x25
	bool Up;			//�ϼ�				//0x26
	bool Right;			//�Ҽ�				//0x27
	bool Down;			//�¼�				//0x28

	bool Selct;			//SELECT			//0x29
	bool Print;			//PRINT				//0x2A
	bool Execute;		//EXECUTE			//0x2B

	bool PrtSc;			//��ӡ��Ļ��		//0x2C
	bool InsErt;		//insert			//0x2D
	bool Delete;		//delete			//0X2E
	bool Hellp;			//������			//0x2F

	bool _0_;			//����0				//0x30
	bool _1_;			//����1				//0x31
	bool _2_;			//����2				//0x32
	bool _3_;			//����3				//0x33
	bool _4_;			//����4				//0x34
	bool _5_;			//����5				//0x35
	bool _6_;			//����6				//0x36
	bool _7_;			//����7				//0x37
	bool _8_;			//����8				//0x38
	bool _9_;			//����9				//0x39

	bool NULL0x06;		// -				//0x3A
	bool NULL0x07;		// -				//0x3B
	bool NULL0x08;		// -				//0x3C
	bool NULL0x09;		// -				//0x3D
	bool NULL0x0A;		// -				//0x3E
	bool NULL0x0B;		// -				//0x3F
	bool NULL0x0C;		// -				//0x40

	bool _A_;			//��ĸA��			//0x41
	bool _B_;			//��ĸB��			//0x42
	bool _C_;			//��ĸC��			//0x43
	bool _D_;			//��ĸD��			//0x44
	bool _E_;			//��ĸE��			//0x45
	bool _F_;			//��ĸF��			//0x46
	bool _G_;			//��ĸG��			//0x47
	bool _H_;			//��ĸH��			//0x48
	bool _I_;			//��ĸI��			//0x49
	bool _J_;			//��ĸJ��			//0x4A
	bool _K_;			//��ĸK��			//0x4B
	bool _L_;			//��ĸL��			//0x4C
	bool _M_;			//��ĸM��			//0x4D
	bool _N_;			//��ĸN��			//0x4E
	bool _O_;			//��ĸO��			//0x4F
	bool _P_;			//��ĸP��			//0x50
	bool _Q_;			//��ĸQ��			//0x51
	bool _R_;			//��ĸR��			//0x52
	bool _S_;			//��ĸS��			//0x53
	bool _T_;			//��ĸT��			//0x54
	bool _U_;			//��ĸU��			//0x55
	bool _V_;			//��ĸV��			//0x56
	bool _W_;			//��ĸW��			//0x57
	bool _X_;			//��ĸX��			//0x58
	bool _Y_;			//��ĸY��			//0x59
	bool _Z_;			//��ĸZ��			//0x5A

	bool LWin;			//��win				//0x5B
	bool RWin;			//��win				//0x5C
	bool AppS;			//Ӧ�ó����		//0x5D

	bool NULL0x0D;		// -				//0x5E

	bool Sleep;			//˯�߼�			//0x5F

	bool Num_0_;		//���ּ���0��		//0x60
	bool Num_1_;		//���ּ���1��		//0x61
	bool Num_2_;		//���ּ���2��		//0x62
	bool Num_3_;		//���ּ���3��		//0x63
	bool Num_4_;		//���ּ���4��		//0x64
	bool Num_5_;		//���ּ���5��		//0x65
	bool Num_6_;		//���ּ���6��		//0x66
	bool Num_7_;		//���ּ���7��		//0x67
	bool Num_8_;		//���ּ���8��		//0x68
	bool Num_9_;		//���ּ���9��		//0x69


	bool Mul;			// *��				//0x6A
	bool Add;			// +��				//0x6B
	bool Separator;		// ;��				//0x6C
	bool Sub;			// -��				//0x6D
	bool Decimal;		// ʮ���Ƽ�			//0x6E
	bool Div;			// /��				//0x6F

	bool _F1_;			//F1				//0x70
	bool _F2_;			//F2				//0x71
	bool _F3_;			//F3				//0x72
	bool _F4_;			//F4				//0x73
	bool _F5_;			//F5				//0x74
	bool _F6_;			//F6				//0x75
	bool _F7_;			//F7				//0x76
	bool _F8_;			//F8				//0x77
	bool _F9_;			//F9				//0x78
	bool _F10_;			//F10				//0x79
	bool _F11_;			//F11				//0x7A
	bool _F12_;			//F12				//0x7B
	bool _F13_;			//F13				//0x7C
	bool _F14_;			//F14				//0x7D
	bool _F15_;			//F15				//0x7E
	bool _F16_;			//F16				//0x7F
	bool _F17_;			//F17				//0x80
	bool _F18_;			//F18				//0x81
	bool _F19_;			//F19				//0x82
	bool _F20_;			//F20				//0x83
	bool _F21_;			//F21				//0x84
	bool _F22_;			//F22				//0x85
	bool _F23_;			//F23				//0x86
	bool _F24_;			//F24				//0x87

	bool NULL0x0E;		// - 				//0x88
	bool NULL0x0F;		// - 				//0x89
	bool NULL0x10;		// - 				//0x8A
	bool NULL0x11;		// - 				//0x8B
	bool NULL0x12;		// - 				//0x8C
	bool NULL0x13;		// - 				//0x8D
	bool NULL0x14;		// - 				//0x8E
	bool NULL0x15;		// - 				//0x8F

	bool NumLock;		//NUM LOCK ��Կ		//0x90
	bool Scroll;		//Scroll Lock��		//0x91

	bool NULL0x16;		// - 				//0x92
	bool NULL0x17;		// - 				//0x93
	bool NULL0x18;		// - 				//0x94
	bool NULL0x19;		// - 				//0x95
	bool NULL0x1A;		// - 				//0x96
	bool NULL0x1B;		// - 				//0x97
	bool NULL0x1C;		// - 				//0x98
	bool NULL0x1D;		// - 				//0x99
	bool NULL0x1E;		// - 				//0x9A
	bool NULL0x1F;		// - 				//0x9B
	bool NULL0x20;		// - 				//0x9C
	bool NULL0x21;		// - 				//0x9D
	bool NULL0x22;		// - 				//0x9E
	bool NULL0x23;		// - 				//0x9F


	bool LShift;		//��shift			//0xA0
	bool RShift;		//��shift			//0xA1
	bool LCtrl;			//��Ctrl			//0xA2
	bool RCtrl;			//��Ctrl			//0xA3
	bool LAlt;			//��Alt				//0xA4
	bool RAlt;			//��Alt				//0xA5

	bool BriwseRBreak;		//��������˼�				//0xA6
	bool BriwseRForward;	//�����ǰ����				//0xA7
	bool BriwseRRefresh;	//�����ˢ�¼�				//0xA8
	bool BriwseRStop;		//�����ֹͣ��				//0xA9
	bool BriwseRSearch;		//�����������				//0xAA
	bool BriwseRFavorites;	//������ղؼ�				//0xAB
	bool BriwseRHome;		//�������ʼ����ҳ��		//0xAC

	bool VolumeMute;		//������					//0xAD
	bool VolumeDown;		//������С��				//0xAE
	bool VolumeUp;			//�������Ӽ�				//0xAF
	bool MedaNextTrack;		//��һ��Ŀ��				//0xB0
	bool MedaPrevTrack;		//��һ��Ŀ��				//0xB1
	bool MedaStop;			//ֹͣý���				//0xB2
	bool MedaPlayPause;		//������ͣý���			//0xB3
	bool LaunchMail;		//�����ʼ���				//0xB4
	bool LaunchMediaSelect;	//ѡ��ý���				//0xB5
	bool LaunchApp1;		//����Ӧ�ó���1��			//0xB6
	bool LaunchApp2;		//����Ӧ�ó���2��			//0xB7

	bool NULL0x24;		// -				//0xB8
	bool NULL0x25;		// -				//0xB9

	bool Oem1;			//	; :				//0xBA
	bool OemPlus;		//	+				//0xBB
	bool OemComma;		//	,				//0xBC
	bool OemMinus;		//	" - "			//0xBD
	bool OemPeriod;		//	.				//0xBE
	bool Oem2;			//	/ ?				//0xBF
	bool Oem3;			//	~				//0xC0

	bool NULL0x26;		// - 				//0xC1
	bool NULL0x27;		// - 				//0xC2
	bool NULL0x28;		// - 				//0xC3
	bool NULL0x29;		// - 				//0xC4
	bool NULL0x2A;		// - 				//0xC5
	bool NULL0x2B;		// - 				//0xC6
	bool NULL0x2C;		// - 				//0xC7
	bool NULL0x2D;		// - 				//0xC8
	bool NULL0x2E;		// - 				//0xC9
	bool NULL0x2F;		// - 				//0xCA
	bool NULL0x30;		// - 				//0xCB
	bool NULL0x31;		// - 				//0xCC
	bool NULL0x32;		// - 				//0xCD
	bool NULL0x33;		// - 				//0xCE
	bool NULL0x34;		// - 				//0xCF
	bool NULL0x35;		// - 				//0xD0
	bool NULL0x36;		// - 				//0xD1
	bool NULL0x37;		// - 				//0xD2
	bool NULL0x38;		// - 				//0xD3
	bool NULL0x39;		// - 				//0xD4
	bool NULL0x3A;		// - 				//0xD5
	bool NULL0x3B;		// - 				//0xD6
	bool NULL0x3C;		// - 				//0xD7
	bool NULL0x3D;		// - 				//0xD8
	bool NULL0x3E;		// - 				//0xD9
	bool NULL0x3F;		// - 				//0xDA

	bool Oem4;			//	[ {				//0xDB
	bool Oem5;			//	\ |				//0xDC
	bool Oem6;			//	] }				//0xDD
	bool Oem7;			//	' "				//0xDE
	bool Oem8;			//	;				//0xDF

	bool NULL0x40;		// -				//0xE0
	bool NULL0x41;		// -				//0xE1

	bool Oem102;		//	" <> " �� " \\| "	������׼���̻������102		//0xE2

	bool NULL0x42;		// -				//0xE3
	bool NULL0x44;		// -				//0xE4

	bool Processkey;	//IME Process��Կ	//0xE5

	bool NULL0x45;		// -				//0xE6

	bool Packet;		//���ڽ� Unicode �ַ������������ݡ�					//0xE7
	//�� VK_PACKET �������ڷǼ������뷽���� 32 λ�����ֵ�ĵ��֡�
	//�й���ϸ��Ϣ������ġ���ע�����Լ�KEYBDINPUTSendInputWM_KEYDOWNWM_KEYUP

	bool NULL0x46;		// - 				//0xE8
	bool NULL0x47;		// - 				//0xE9
	bool NULL0x48;		// - 				//0xEA
	bool NULL0x49;		// - 				//0xEB
	bool NULL0x4A;		// - 				//0xEC
	bool NULL0x4B;		// - 				//0xED
	bool NULL0x4C;		// - 				//0xEE
	bool NULL0x4D;		// - 				//0xEF
	bool NULL0x4E;		// - 				//0xF0
	bool NULL0x4F;		// - 				//0xF1
	bool NULL0x50;		// - 				//0xF2
	bool NULL0x51;		// - 				//0xF3
	bool NULL0x52;		// - 				//0xF4
	bool NULL0x53;		// - 				//0xF5

	bool Attn;			//Attn��			//0xF6
	bool ExSel;			//ExSel��Կ			//0xF7
	bool ErEOF;			//����EOF��Կ		//0xF9
	bool Play;			//���ż�			//0xFA
	bool Zoom;			//���ż�			//0xFB
	bool NoName;		//Ԥ��				//0xFC
	bool AP1;			//AP1 ��			//0xFD
	bool OemClear;		//�����			//0xFE

	bool NULL0x54;		// -				//0xFF

}KeyBoard;
#endif

#define MAX_KEY_VALUE 0xFF
#define DEBUG
#undef DEBUG