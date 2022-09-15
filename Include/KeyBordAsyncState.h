#ifndef ONCE
#define ONCE

/*
* �ĵ��ο�
* https://docs.microsoft.com/zh-cn/windows/win32/inputdev/virtual-key-codes
* Ŀ��Ϊ���ٵػ�ȡ���̵�ĳ������������ϼ���״̬
*/

typedef struct KeyBoard
{
	unsigned int LButton;		//������
	unsigned int RButton;		//����Ҽ�
	unsigned int Cancel;		//�����жϴ���
	unsigned int MButton;		//����м�
	unsigned int XButton1;		//��갴��X1
	unsigned int XButton2;		//��갴��X2

	unsigned int Back;			//backspace
	unsigned int Tab;			//tab
	unsigned int Clear;			//Clear
	unsigned int Enter;			//Enter
	unsigned int Shift;			//Shift
	unsigned int Ctrl;			//Ctrl
	unsigned int Alt;			//Alt
	unsigned int Pause;			//Pause
	unsigned int CapsLock;		//CapsLock

	unsigned int IMEKana;		//IME Kana
	unsigned int IMEHanguel;	//IME Hanguel
	unsigned int IMEOn;			//IME On
	unsigned int IMEJunja;		//IME Junja
	unsigned int IMEFinal;		//IME ����ģʽ
	unsigned int IMEKanji;		//IME Kanja
	unsigned int IMEOff;		//IME Off
	unsigned int Esc;			//esc
	unsigned int IMEConvert;	//IME ת��
	unsigned int IMENoConvert;	//IME ��ת��
	unsigned int IMEAccept;		//IME ����
	unsigned int IMEAModeChange;//IME ģʽ��������

	unsigned int Space;			//�ո�

	unsigned int PAGEUp;		//pg Up
	unsigned int PAGEDown;		//pg Down

	unsigned int End;			//end
	unsigned int Home;			//home

	unsigned int Left;			//���
	unsigned int Up;			//�ϼ�
	unsigned int Right;			//�Ҽ�
	unsigned int Down;			//�¼�

	unsigned int Selct;			//SELECT
	unsigned int Print;			//PRINT
	unsigned int Execute;		//EXECUTE

	unsigned int PrtSc;			//��ӡ��Ļ��
	unsigned int InsErt;		//insert
	unsigned int Delete;		//delete
	unsigned int Hellp;			//������

	unsigned int _0_;			//����0
	unsigned int _1_;			//����1
	unsigned int _2_;			//����2
	unsigned int _3_;			//����3
	unsigned int _4_;			//����4
	unsigned int _5_;			//����5
	unsigned int _6_;			//����6
	unsigned int _7_;			//����7
	unsigned int _8_;			//����8
	unsigned int _9_;			//����9

	unsigned int _A_;			//��ĸA��
	unsigned int _B_;			//��ĸB��
	unsigned int _C_;			//��ĸC��
	unsigned int _D_;			//��ĸD��
	unsigned int _E_;			//��ĸE��
	unsigned int _F_;			//��ĸF��
	unsigned int _G_;			//��ĸG��
	unsigned int _H_;			//��ĸH��
	unsigned int _I_;			//��ĸI��
	unsigned int _J_;			//��ĸJ��
	unsigned int _K_;			//��ĸK��
	unsigned int _L_;			//��ĸL��
	unsigned int _M_;			//��ĸM��
	unsigned int _N_;			//��ĸN��
	unsigned int _O_;			//��ĸO��
	unsigned int _P_;			//��ĸP��
	unsigned int _Q_;			//��ĸQ��
	unsigned int _R_;			//��ĸR��
	unsigned int _S_;			//��ĸS��
	unsigned int _T_;			//��ĸT��
	unsigned int _U_;			//��ĸU��
	unsigned int _V_;			//��ĸV��
	unsigned int _W_;			//��ĸW��
	unsigned int _X_;			//��ĸX��
	unsigned int _Y_;			//��ĸY��
	unsigned int _Z_;			//��ĸZ��

	unsigned int LWin;			//��win
	unsigned int RWin;			//��win
	unsigned int AppS;			//Ӧ�ó����
	unsigned int Sleep;			//˯�߼�

	unsigned int Num_0_;		//���ּ���0
	unsigned int Num_1_;		//���ּ���1
	unsigned int Num_2_;		//���ּ���2
	unsigned int Num_3_;		//���ּ���3
	unsigned int Num_4_;		//���ּ���4
	unsigned int Num_5_;		//���ּ���5
	unsigned int Num_6_;		//���ּ���6
	unsigned int Num_7_;		//���ּ���7
	unsigned int Num_8_;		//���ּ���8
	unsigned int Num_9_;		//���ּ���9

	unsigned int Mul;			// ����
	unsigned int Add;			// +��
	unsigned int Separator;		// ;��
	unsigned int Sub;			// -��
	unsigned int Div;			// /��

	unsigned int F1;			//F1
	unsigned int F2;			//F2
	unsigned int F3;			//F3
	unsigned int F4;			//F4
	unsigned int F5;			//F5
	unsigned int F6;			//F6
	unsigned int F7;			//F7
	unsigned int F8;			//F8
	unsigned int F9;			//F9
	unsigned int F10;			//F10
	unsigned int F11;			//F11
	unsigned int F12;			//F12
	unsigned int F13;			//F13
	unsigned int F14;			//F14
	unsigned int F15;			//F15
	unsigned int F16;			//F16
	unsigned int F17;			//F17
	unsigned int F18;			//F18
	unsigned int F19;			//F19
	unsigned int F20;			//F20
	unsigned int F21;			//F21
	unsigned int F22;			//F22
	unsigned int F23;			//F23
	unsigned int F24;			//F24

	unsigned int LShift;		//��shift
	unsigned int RShift;		//��shift
	unsigned int LCtrl;			//��Ctrl
	unsigned int RCtrl;			//��Ctrl
	unsigned int LAlt;			//��Alt
	unsigned int RAlt;			//��Alt

	unsigned int BriwseRBreak;		//��������˼�
	unsigned int BriwseRForward;	//�����ǰ����
	unsigned int BriwseRRefresh;	//�����ˢ�¼�
	unsigned int BriwseRStop;		//�����ֹͣ��
	unsigned int BriwseRSearch;		//�����������
	unsigned int BriwseRFavorites;	//������ղؼ�
	unsigned int BriwseRHome;		//�������ʼ����ҳ��
	unsigned int BriwseRMute;		//�����������

	unsigned int VolumeMute;		//������
	unsigned int VolumeDown;		//������С��
	unsigned int VolumeUp;			//�������Ӽ�

	unsigned int MedaNextTrack;		//��һ��Ŀ��
	unsigned int MedaPrevTrack;		//��һ��Ŀ��
	unsigned int MedaStop;			//ֹͣý���
	unsigned int MedaPlayPause;		//������ͣý���
	unsigned int LaunchMail;		//�����ʼ���
	unsigned int LaunchMediaSelect;	//ѡ��ý���
	unsigned int LaunchApp1;		//����Ӧ�ó���1��
	unsigned int LaunchApp2;		//����Ӧ�ó���2��

	unsigned int Oem1;			//	;:
	unsigned int OemPlus;		//	+
	unsigned int OemComma;		//	,
	unsigned int OemMinus;		//	-
	unsigned int OemPeriod;		//	.
	unsigned int Oem2;			//	/?
	unsigned int Oem3;			//	~
	unsigned int Oem4;			//	[{
	unsigned int Oem5;			//	\|
	unsigned int Oem6;			//	]}
	unsigned int Oem7;			//	'"
	unsigned int Oem8;			//	;
	unsigned int Oem102;		//	"<>" �� "\\|"	������׼���̻������102

	unsigned int Processkey;	//IME Process��Կ
	unsigned int Packet;		//���ڽ� Unicode �ַ������������ݡ�
	//�� VK_PACKET �������ڷǼ������뷽���� 32 λ�����ֵ�ĵ��֡�
	//�й���ϸ��Ϣ������ġ���ע�����Լ�KEYBDINPUTSendInputWM_KEYDOWNWM_KEYUP
	unsigned int Attn;			//Attn��
	unsigned int ExSel;			//ExSel��Կ
	unsigned int ErEOF;			//����EOF��Կ
	unsigned int Play;			//���ż�
	unsigned int Zoom;			//���ż�
	unsigned int NoName;		//Ԥ��
	unsigned int AP1;			//AP1 ��
	unsigned int OemClear;		//�����
}KeyBoard;

void keyBoardAsyncKeyState(KeyBoard* key1);

#endif