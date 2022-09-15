#ifndef ONCE
#define ONCE

/*
* �ĵ��ο�
* https://docs.microsoft.com/zh-cn/windows/win32/inputdev/virtual-key-codes
* Ŀ��Ϊ���ٵػ�ȡ���̵�ĳ������������ϼ���״̬
*/

typedef struct KeyBoard
{
	bool LButton;		//������
	bool RButton;		//����Ҽ�
	bool Cancel;		//�����жϴ���
	bool MButton;		//����м�
	bool XButton1;		//��갴��X1
	bool XButton2;		//��갴��X2

	bool Back;			//backspace
	bool Tab;			//tab
	bool Clear;			//Clear
	bool Enter;			//Enter
	bool Shift;			//Shift
	bool Ctrl;			//Ctrl
	bool Alt;			//Alt
	bool Pause;			//Pause
	bool CapsLock;		//CapsLock

	bool IMEKana;		//IME Kana
	bool IMEHanguel;	//IME Hanguel
	bool IMEOn;			//IME On
	bool IMEJunja;		//IME Junja
	bool IMEFinal;		//IME ����ģʽ
	bool IMEKanji;		//IME Kanja
	bool IMEOff;		//IME Off
	bool Esc;			//esc
	bool IMEConvert;	//IME ת��
	bool IMENoConvert;	//IME ��ת��
	bool IMEAccept;		//IME ����
	bool IMEAModeChange;//IME ģʽ��������

	bool Space;			//�ո�

	bool PAGEUp;		//pg Up
	bool PAGEDown;		//pg Down

	bool End;			//end
	bool Home;			//home

	bool Left;			//���
	bool Up;			//�ϼ�
	bool Right;			//�Ҽ�
	bool Down;			//�¼�

	bool Selct;			//SELECT
	bool Print;			//PRINT
	bool Execute;		//EXECUTE

	bool PrtSc;			//��ӡ��Ļ��
	bool InsErt;		//insert
	bool Delete;		//delete
	bool Hellp;			//������

	bool _0_;			//����0
	bool _1_;			//����1
	bool _2_;			//����2
	bool _3_;			//����3
	bool _4_;			//����4
	bool _5_;			//����5
	bool _6_;			//����6
	bool _7_;			//����7
	bool _8_;			//����8
	bool _9_;			//����9

	bool _A_;			//��ĸA��
	bool _B_;			//��ĸB��
	bool _C_;			//��ĸC��
	bool _D_;			//��ĸD��
	bool _E_;			//��ĸE��
	bool _F_;			//��ĸF��
	bool _G_;			//��ĸG��
	bool _H_;			//��ĸH��
	bool _I_;			//��ĸI��
	bool _J_;			//��ĸJ��
	bool _K_;			//��ĸK��
	bool _L_;			//��ĸL��
	bool _M_;			//��ĸM��
	bool _N_;			//��ĸN��
	bool _O_;			//��ĸO��
	bool _P_;			//��ĸP��
	bool _Q_;			//��ĸQ��
	bool _R_;			//��ĸR��
	bool _S_;			//��ĸS��
	bool _T_;			//��ĸT��
	bool _U_;			//��ĸU��
	bool _V_;			//��ĸV��
	bool _W_;			//��ĸW��
	bool _X_;			//��ĸX��
	bool _Y_;			//��ĸY��
	bool _Z_;			//��ĸZ��

	bool LWin;			//��win
	bool RWin;			//��win
	bool AppS;			//Ӧ�ó����
	bool Sleep;			//˯�߼�

	bool Num_0_;		//���ּ���0
	bool Num_1_;		//���ּ���1
	bool Num_2_;		//���ּ���2
	bool Num_3_;		//���ּ���3
	bool Num_4_;		//���ּ���4
	bool Num_5_;		//���ּ���5
	bool Num_6_;		//���ּ���6
	bool Num_7_;		//���ּ���7
	bool Num_8_;		//���ּ���8
	bool Num_9_;		//���ּ���9

	bool Mul;			// ����
	bool Add;			// +��
	bool Separator;		// ;��
	bool Sub;			// -��
	bool Div;			// /��

	bool F1;			//F1
	bool F2;			//F2
	bool F3;			//F3
	bool F4;			//F4
	bool F5;			//F5
	bool F6;			//F6
	bool F7;			//F7
	bool F8;			//F8
	bool F9;			//F9
	bool F10;			//F10
	bool F11;			//F11
	bool F12;			//F12
	bool F13;			//F13
	bool F14;			//F14
	bool F15;			//F15
	bool F16;			//F16
	bool F17;			//F17
	bool F18;			//F18
	bool F19;			//F19
	bool F20;			//F20
	bool F21;			//F21
	bool F22;			//F22
	bool F23;			//F23
	bool F24;			//F24

	bool LShift;		//��shift
	bool RShift;		//��shift
	bool LCtrl;			//��Ctrl
	bool RCtrl;			//��Ctrl
	bool LAlt;			//��Alt
	bool RAlt;			//��Alt

	bool BriwseRBreak;		//��������˼�
	bool BriwseRForward;	//�����ǰ����
	bool BriwseRRefresh;	//�����ˢ�¼�
	bool BriwseRStop;		//�����ֹͣ��
	bool BriwseRSearch;		//�����������
	bool BriwseRFavorites;	//������ղؼ�
	bool BriwseRHome;		//�������ʼ����ҳ��
	bool BriwseRMute;		//�����������

	bool VolumeMute;		//������
	bool VolumeDown;		//������С��
	bool VolumeUp;			//�������Ӽ�

	bool MedaNextTrack;		//��һ��Ŀ��
	bool MedaPrevTrack;		//��һ��Ŀ��
	bool MedaStop;			//ֹͣý���
	bool MedaPlayPause;		//������ͣý���
	bool LaunchMail;		//�����ʼ���
	bool LaunchMediaSelect;	//ѡ��ý���
	bool LaunchApp1;		//����Ӧ�ó���1��
	bool LaunchApp2;		//����Ӧ�ó���2��

	bool Oem1;			//	;:
	bool OemPlus;		//	+
	bool OemComma;		//	,
	bool OemMinus;		//	-
	bool OemPeriod;		//	.
	bool Oem2;			//	/?
	bool Oem3;			//	~
	bool Oem4;			//	[{
	bool Oem5;			//	\|
	bool Oem6;			//	]}
	bool Oem7;			//	'"
	bool Oem8;			//	;
	bool Oem102;		//	"<>" �� "\\|"	������׼���̻������102

	bool Processkey;	//IME Process��Կ
	bool Packet;		//���ڽ� Unicode �ַ������������ݡ�
	//�� VK_PACKET �������ڷǼ������뷽���� 32 λ�����ֵ�ĵ��֡�
	//�й���ϸ��Ϣ������ġ���ע�����Լ�KEYBDINPUTSendInputWM_KEYDOWNWM_KEYUP
	bool Attn;			//Attn��
	bool ExSel;			//ExSel��Կ
	bool ErEOF;			//����EOF��Կ
	bool Play;			//���ż�
	bool Zoom;			//���ż�
	bool NoName;		//Ԥ��
	bool AP1;			//AP1 ��
	bool OemClear;		//�����
}KeyBoard;

void keyBoardAsyncKeyState(KeyBoard* key1);

#endif