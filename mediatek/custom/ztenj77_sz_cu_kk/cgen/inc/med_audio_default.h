/*******************************************************************************
 *
 * Filename:
 * ---------
 * med_audio_default.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 * This file is the header of audio customization related function or definition.
 *
 * Author:
 * -------
 * Chipeng Chang
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$

 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef MED_AUDIO_CUSTOM_H
#define MED_AUDIO_CUSTOM_H
// normal mode parameters ------------------------
#define NORMAL_SPEECH_OUTPUT_FIR_COEFF \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0
// headset mode parameters ------------------------
#define HEADSET_SPEECH_OUTPUT_FIR_COEFF \
    32767,	  0,	 0, 	0,  0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0
// handfree mode parameters ------------------------
#define HANDFREE_SPEECH_OUTPUT_FIR_COEFF \
     -636,  -132,  -919,  -146, -1046,\
     -487,  -699, -1375,    91, -2294,\
      575, -3000,  2005, -7386, 20675,\
    20675, -7386,  2005, -3000,   575,\
    -2294,    91, -1375,  -699,  -487,\
    -1046,  -146,  -919,  -132,  -636,\
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0
// VoIP_BT  mode parameters ------------------------
#define VOIPBT_SPEECH_OUTPUT_FIR_COEFF \
    32767,	  0,	 0, 	0,  0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0
// VoIP_NORMAL mode parameters ------------------------
#define VOIPNORMAL_SPEECH_OUTPUT_FIR_COEFF \
    32767,	  0,	 0, 	0,  0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0
// VoIP_Handfree mode parameters ------------------------
#define VOIPHANDFREE_SPEECH_OUTPUT_FIR_COEFF \
    32767,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0
// AUX1 mode parameters ------------------------
#define AUX1_SPEECH_OUTPUT_FIR_COEFF \
    32767,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0
// AUX2 mode parameters ------------------------
#define AUX2_SPEECH_OUTPUT_FIR_COEFF \
    32767,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0
#define SPEECH_OUTPUT_MED_FIR_COEFF \
    NORMAL_SPEECH_OUTPUT_FIR_COEFF,\
    HEADSET_SPEECH_OUTPUT_FIR_COEFF ,\
    HANDFREE_SPEECH_OUTPUT_FIR_COEFF ,\
    VOIPBT_SPEECH_OUTPUT_FIR_COEFF,\
    VOIPNORMAL_SPEECH_OUTPUT_FIR_COEFF,\
    VOIPHANDFREE_SPEECH_OUTPUT_FIR_COEFF,\
    AUX1_SPEECH_OUTPUT_FIR_COEFF,\
    AUX2_SPEECH_OUTPUT_FIR_COEFF
#define SPEECH_INPUT_MED_FIR_COEFF\
     2545, -2422,  3956, -2142,  2644,\
     -469,  -296,  2845, -3485,  6287,\
    -5921,  8838, -9920, 14848,-13340,\
    17582,-17719, 14205,-20271, 19540,\
   -20030, 32767, 32767,-20030, 19540,\
   -20271, 14205,-17719, 17582,-13340,\
    14848, -9920,  8838, -5921,  6287,\
    -3485,  2845,  -296,  -469,  2644,\
    -2142,  3956, -2422,  2545,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0
#define FIR_output_index \
    0,0,0,0,0,0,0,0
#define FIR_input_index \
    0,0,0,0,0,0,0,0
#define MED_SPEECH_NORMAL_MODE_PARA \
     0,     0,     0,     0,     0,     0,     0,     0,\ 
     0,     0,     0,     0,     0,     0,     0,     0 
#define MED_SPEECH_EARPHONE_MODE_PARA \
     0,     0,     0,     0,     0,     0,     0,     0,\ 
     0,     0,     0,     0,     0,     0,     0,     0 
#define MED_SPEECH_BT_EARPHONE_MODE_PARA \
     0,     0,     0,     0,     0,     0,     0,     0,\ 
     0,     0,     0,     0,     0,     0,     0,     0 
#define MED_SPEECH_LOUDSPK_MODE_PARA \
     0,     0,     0,     0,     0,     0,     0,     0,\ 
     0,     0,     0,     0,     0,     0,     0,     0 
#define MED_SPEECH_CARKIT_MODE_PARA \
     0,     0,     0,     0,     0,     0,     0,     0,\ 
     0,     0,     0,     0,     0,     0,     0,     0 
#define MED_SPEECH_BT_CORDLESS_MODE_PARA \
    0,      0,      0,      0,      0,      0,      0,      0, \
    0,      0,      0,      0,      0,      0,      0,      0
#define MED_SPEECH_AUX1_MODE_PARA \
    0,      0,      0,      0,      0,      0,      0,      0, \
    0,      0,      0,      0,      0,      0,      0,      0
#define MED_SPEECH_AUX2_MODE_PARA \
    0,      0,      0,      0,      0,      0,      0,      0, \
    0,      0,      0,      0,      0,      0,      0,      0
#endif
