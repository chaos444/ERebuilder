
#ifndef _EFORMAT_H_
#define _EFORMAT_H_

#pragma pack(4)

#define IMAGE_E_SIGNATURE 0x00004A57
//����������������Ϣ
typedef struct _E_SECTION_INFO_HEADER
{
	DWORD OffsetOfData;				//��ǰ���εĵ�ַ+OffsetOfData = ���ε����ݵ�ַ
	DWORD NextSectionRva;			//��һ�����ε�RVA,�����ǰ�����һ�����������ֵ��-1
	BYTE  UnknownByte;				//δ֪����,ռ��4�ֽ�(4�ֽڶ���)
}E_SECTION_INFO_HEADER,*PE_SECTION_INFO_HEADER;

//�������ض�λ��Ϣ
typedef struct _E_SECTION_RELOC_HEADER
{
	DWORD NumberOfReloc;			//�ض�λ�ĸ���
	DWORD RelocArray[1];			//�ض�λ���ݵ�����,��1��ʼ,����0
}E_SECTION_RELOC_HEADER,*PE_SECTION_RELOC_HEADER;

/*
	E_SECTION_RELOC_ADDR RelocAddr;
	�������ض�λ��ϸ��Ϣ
	DWORD RelocBlock = RelocArray[i];

	//��ȡ�ض�λ��ʶ��Ϣ
	DWORD IndexOfRelocAdr = RelocBlock & 0x7;

	//����ض�λƫ��
	RelocBlock >>= 3;

	//��Ҫ�ض�λ�ĵ�ַ
	DWORD* RelocPtr = (DWORD*)SectionDataOffset + RelocBlock;

	//�����ض�λ
	*RelocPtr += ((DWORD*)RelocAddr)[IndexOfRelocAdr];
*/
#define E_RELOC_HELP 0 
#define E_RELOC_CONST 1
#define E_RELOC_VAR	2
#define E_RELOC_CODE 3

//�������ض�λ��ʶ��Ϣ
typedef struct _E_SECTION_RELOC_ADDR
{
	DWORD PointOfHelp;
	DWORD PointOfConst;
	DWORD PointOfVar;
	DWORD PointOfCode;
}E_SECTION_RELOC_ADDR,*PE_SECTION_RELOC_ADDR;


//������������Ϣ
typedef struct _E_SECTION_HEADER
{
	E_SECTION_INFO_HEADER Info;	//����������Ϣ,������һ�����κ��������ݵ�ƫ��
	CHAR Name[24];						//���ε�����
	DWORD SizeOfRva;					//��ǰ����RVA�Ĵ�С
	DWORD SizeOfRaw;					//��ǰ���ε�RAW��С
	DWORD DataRva;						//��ǰ���ݵ�RVA(��E_HEADER��λ����ʼ��ƫ��)
	E_SECTION_RELOC_HEADER RelocInfo;	//�ض�λ�����Ϣ
}E_SECTION_HEADER,*PE_SECTION_HEADER;

typedef struct _E_HEADER
{
	CHAR Signature[0x24];		//������ͷ�����
	DWORD RvaOfDataStart;		//���������ݵĿ�ʼ��ַ(���������Ե������Ϣ��֧�ֿ���Ϣ)
	DWORD UnknownDWORD1;		//����δ֪,��Զ����1
	DWORD UnknownDWORD2;		//����δ֪,��Զ����3
	BOOL IsDllModule;			//TRUE = DLL,FALSE = EXE
	DWORD UnknownDWORD3;		//����δ֪,������
	DWORD NumberOfDllImport;	//�����Ե��������(DLL API����)
	DWORD RvaOfEntry;			//�����Դ����OEP
	DWORD RvaOfConst;			//���������ݸ��Ӷ� ������-1
	DWORD RvaOfForm;			//�����Դ������ݶ�
	DWORD RvaOfHelp;			//������֧�ֿ�ӿ�
	DWORD RvaOfCode;			//�����ԵĴ����
	DWORD RvaOfVar;				//�����Եı�����
	DWORD RvaOfFirstSection;	//���������ο�ʼ
}E_HEADER,*PE_HEADER;

/*
����E_HEADER����ľ���Import��ƫ��
��������ṹ
�ܹ���NumberOfDllImport * sizeof(DWORD)��Dll��Rva��NameRva

DWORD ImportIndex(DllName) 0 
DWORD ImportIndex(DllName) 1
DWORD ImportIndex(DllAPI) 0
DWORD ImportIndex(DllAPI) 1
*/

//�����֮�����֧�ֿ�,��0x0DΪ�ָ���
/*
	֧�ֿ�LibName
	֧�ֿ�GUID
	֧�ֿ�汾(Major)
	֧�ֿ�汾(Minor)
	֧�ֿ�������
*/
/*
004031C2  73 70 65 63 0D 41 35 31 32 35 34 38 45 37 36 39  spec.A512548E769
004031D2  35 34 42 36 45 39 32 43 32 31 30 35 35 35 31 37  54B6E92C21055517
004031E2  36 31 35 42 30 0D 33 0D 30 0D CC D8 CA E2 B9 A6  615B0.3.0.���⹦
004031F2  C4 DC D6 A7 B3 D6 BF E2 00 00 DC 00 00 00 40 09  ��֧�ֿ�..?..@.
*/

//�����Ե��ñ�
//�����ָ��help�ε���������,�����麯��
typedef struct _E_LIB_CALL
{
	DWORD MReportError;
	DWORD MCallDllCmd;
	DWORD MCallLibCmd;
	DWORD MCallKrnlLibCmd;
	DWORD MReadProperty;
	DWORD MWriteProperty;
	DWORD MMalloc;
	DWORD MRealloc;
	DWORD MFree;
	DWORD MExitProcess;
	DWORD MMessageLoop;
	DWORD MLoadBeginWin;
	DWORD MOtherHelp;
}E_LIB_CALL,*PE_LIB_CALL;


#pragma pack()

#endif