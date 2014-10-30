#ifndef __AUDIO_TYPE_H__
#define __AUDIO_TYPE_H__

#include <stdint.h>
#include <sys/types.h>

#include <utils/Errors.h>
#include <utils/Vector.h>
#include <utils/String16.h>
#include <utils/String8.h>
#include <hardware_legacy/AudioSystemLegacy.h>

#include "AudioAssert.h"

using android::status_t;

#ifndef int8_t
typedef signed char         int8_t;
#endif

#ifndef uint8_t
typedef unsigned char       uint8_t;
#endif

#ifndef int16_t
typedef signed short        int16_t;
#endif

#ifndef uint16_t
typedef unsigned short      uint16_t;
#endif

#ifndef int32_t
typedef signed int          int32_t;
#endif

#ifndef uint32_t
typedef unsigned int        uint32_t;
#endif

/*
#ifndef ssize_t
typedef signed int          ssize_t;
#endif
*/

#ifndef int32
typedef signed int          int32;
#endif

/*
#ifndef size_t
typedef long int      size_t;
#endif
*/

#ifndef uint32
typedef unsigned int        uint32;
#endif


// when call I2S start , need parameters for I2STYPE
typedef enum
{
    MATV,                         //I2S Input For ATV
    FMRX,                         //I2S Input For FMRX
    FMRX_32K,                 //I2S Input For FMRX_32K
    FMRX_48K,                 //I2S Input For FMRX_48K
    I2S0OUTPUT,             //   I2S0 output
    I2S1OUTPUT,             //   I2S1 output
    HOA_SAMPLERATE,   //   use for HQA support
    NUM_OF_I2S
} I2STYPE;

#define AUDIO_LOCK_TIMEOUT_VALUE_MS (5000)  //The same with ANR

#if 1 //HP switch
//#define HIFIDAC_SWITCH
//#define SWITCH_BEFORE_HPAMP
//#define HIFI_SWITCH_BY_AUDENH

//#define EXTDAC_PMIC_MUTE
//#define RINGTONE_USE_PMIC
#endif

// TODO(Harvey): move it to somewhere else
/**
 * Playback handler types
 */
enum playback_handler_t
{
    PLAYBACK_HANDLER_BASE = -1,
    PLAYBACK_HANDLER_NORMAL,
    PLAYBACK_HANDLER_VOICE,
    PLAYBACK_HANDLER_FM,
    PLAYBACK_HANDLER_MATV,
};

/**
 * Capture handler types
 */
enum capture_handler_t
{
    CAPTURE_HANDLER_BASE = -1,
    CAPTURE_HANDLER_NORMAL,
    CAPTURE_HANDLER_VOICE,
};


struct stream_attribute_t
{
    audio_format_t       audio_format;
    audio_channel_mask_t audio_channel_mask;
    audio_output_flags_t audio_output_flags;

    audio_devices_t      output_devices;

    audio_devices_t      input_device;
    audio_source_t       input_source;

    uint32_t             num_channels;
    uint32_t             sample_rate;

    uint32_t             buffer_size;
    uint32_t             latency;
    uint32_t             interrupt_samples;

    audio_in_acoustics_t acoustics_mask;

    bool                 digital_mic_flag;

    audio_mode_t        audio_mode;

    uint32_t mStreamOutNumber;  // AudioALSAStreamOut pass to AudioALSAStreamManager

};


enum sgen_mode_t
{
    SGEN_MODE_I00_I01           = 0,
    SGEN_MODE_I02               = 1,
    SGEN_MODE_I03_I04           = 2,
    SGEN_MODE_I05_I06           = 3,
    SGEN_MODE_I07_I08           = 4,
    SGEN_MODE_I09_I14           = 5,
    SGEN_MODE_I11_I12           = 6,
    SGEN_MODE_O00_O01           = 7,
    SGEN_MODE_O02               = 8,
    SGEN_MODE_O03_O04           = 9,
    SGEN_MODE_O05_O06           = 10,
    SGEN_MODE_O07_O08_O17_O18   = 11,
    SGEN_MODE_O09_O10           = 12,
    SGEN_MODE_O11               = 13,
    SGEN_MODE_O12               = 14,
    SGEN_MODE_DISABLE           = 15
};


#endif
