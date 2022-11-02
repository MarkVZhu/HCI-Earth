#pragma once

#include <conio.h>
#include "msp_cmn.h"
#include "msp_errors.h"
#include "SpeechRecoginzer.h"

/*
* ������д(iFly Auto Transform)�����ܹ�ʵʱ�ؽ�����ת���ɶ�Ӧ�����֡�
*/

#define FRAME_LEN	640
#define BUFFER_SIZE	4096

// ʶ��״̬����
enum {
	EVT_START = 0,
	EVT_STOP,
	EVT_QUIT,
	EVT_TOTAL
};

class FXunFeiSpeech
{
public:

	FXunFeiSpeech();

	FXunFeiSpeech(FString);

	void SetStart();
	void SetStop();
	void SetQuit();
	void speech_mic(const char* session_beging_params);
	const char* get_result() const;
};

static FXunFeiSpeech * xunfeispeech = new FXunFeiSpeech(FString("static xunfeispeech be created !"));