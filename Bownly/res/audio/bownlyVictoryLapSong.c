#include "../../../hUGETracker/hUGEDriver.h"
#include <stddef.h>

static const unsigned char order_cnt = 2;

static const unsigned char P0[] = {
    DN(Cs5,1,0xC0B),
    DN(Cs5,1,0xC01),
    DN(Cs5,1,0xC0B),
    DN(Cs5,1,0xC01),
    DN(Ds5,1,0xC0B),
    DN(Ds5,1,0xC01),
    DN(Cs5,1,0xC0B),
    DN(Cs5,1,0xC01),
    DN(F_5,1,0xC0B),
    DN(Fs5,1,0xC0B),
    DN(Fs5,1,0xC01),
    DN(Gs5,1,0xC0B),
    DN(Gs5,1,0xC01),
    DN(Gs5,1,0xC0B),
    DN(As5,1,0xC0B),
    DN(Gs5,1,0xC0B),
    DN(Cs6,1,0xC0B),
    DN(Cs6,1,0xC01),
    DN(As5,1,0xC0B),
    DN(As5,1,0xC01),
    DN(Gs5,1,0xC0B),
    DN(Gs5,1,0xC01),
    DN(As5,1,0xC0B),
    DN(As5,1,0xC01),
    DN(F_5,1,0xC0B),
    DN(Cs5,1,0xC0B),
    DN(Cs5,1,0xC01),
    DN(As4,1,0xC0B),
    DN(As4,1,0xC01),
    DN(Gs4,1,0xC0B),
    DN(As4,1,0xC0B),
    DN(Gs4,1,0xC0B),
    DN(Cs5,1,0xC0B),
    DN(Cs5,1,0xC01),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Gs4,1,0xC0B),
    DN(As4,1,0xC0B),
    DN(Gs4,1,0xC0B),
    DN(Cs4,1,0xC0B),
    DN(Cs4,1,0xC01),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
};
static const unsigned char P1[] = {
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
};
static const unsigned char P2[] = {
    DN(Fs4,15,0xC0B),
    DN(Fs4,15,0xC01),
    DN(Fs5,15,0xC0B),
    DN(Fs5,15,0xC01),
    DN(Fs4,15,0xC0B),
    DN(Fs4,15,0xC01),
    DN(Fs5,15,0xC0B),
    DN(Fs5,15,0xC01),
    DN(Cs5,15,0xC0B),
    DN(Cs5,15,0xC01),
    DN(Cs6,15,0xC0B),
    DN(Cs6,15,0xC01),
    DN(Cs5,15,0xC0B),
    DN(Cs5,15,0xC01),
    DN(Cs6,15,0xC0B),
    DN(Cs6,15,0xC01),
    DN(Fs4,15,0xC0B),
    DN(Fs4,15,0xC01),
    DN(Fs5,15,0xC0B),
    DN(Fs5,15,0xC01),
    DN(Fs4,15,0xC0B),
    DN(Fs4,15,0xC01),
    DN(Fs5,15,0xC0B),
    DN(Fs5,15,0xC01),
    DN(B_4,15,0xC0B),
    DN(B_4,15,0xC01),
    DN(B_5,15,0xC0B),
    DN(B_5,15,0xC01),
    DN(B_4,15,0xC0B),
    DN(B_4,15,0xC01),
    DN(B_5,15,0xC0B),
    DN(B_5,15,0xC01),
    DN(Fs4,15,0xC0B),
    DN(Fs4,15,0xC01),
    DN(Fs5,15,0xC0B),
    DN(Fs5,15,0xC01),
    DN(Fs4,15,0xC0B),
    DN(Fs4,15,0xC01),
    DN(Fs5,15,0xC0B),
    DN(Fs5,15,0xC01),
    DN(Cs5,15,0xC0B),
    DN(Cs5,15,0xC01),
    DN(Cs6,15,0xC0B),
    DN(Cs6,15,0xC01),
    DN(Cs5,15,0xC0B),
    DN(Cs5,15,0xC01),
    DN(Cs6,15,0xC0B),
    DN(Cs6,15,0xC01),
    DN(Fs4,15,0xC0B),
    DN(Fs4,15,0xC01),
    DN(Fs5,15,0xC0B),
    DN(Fs5,15,0xC01),
    DN(Fs4,15,0xC0B),
    DN(Fs4,15,0xC01),
    DN(Fs5,15,0xC0B),
    DN(Fs5,15,0xC01),
    DN(Fs5,15,0xC0B),
    DN(Fs5,15,0xC01),
    DN(Fs4,15,0xC0B),
    DN(Fs4,15,0xC01),
    DN(Fs5,15,0xC0B),
    DN(Fs5,15,0xC01),
    DN(Fs4,15,0xC0B),
    DN(Fs4,15,0xC01),
};
static const unsigned char P3[] = {
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
};

static const unsigned char* const order1[] = {P0};
static const unsigned char* const order2[] = {P1};
static const unsigned char* const order3[] = {P2};
static const unsigned char* const order4[] = {P3};

static const hUGEDutyInstr_t duty_instruments[] = {
    {8,64,240,0,128},
    {8,128,240,0,128},
    {8,192,240,0,128},
    {8,0,240,0,128},
    {8,128,240,0,128},
    {8,128,240,0,128},
    {8,128,240,0,128},
    {8,128,240,0,128},
    {8,128,240,0,128},
    {8,128,240,0,128},
    {8,128,240,0,128},
    {8,128,240,0,128},
    {8,128,240,0,128},
    {8,128,240,0,128},
    {8,128,240,0,128},
};
static const hUGEWaveInstr_t wave_instruments[] = {
    {0,32,0,0,128},
    {0,32,1,0,128},
    {0,32,2,0,128},
    {0,32,3,0,128},
    {0,32,4,0,128},
    {0,32,5,0,128},
    {0,32,6,0,128},
    {0,32,0,0,128},
    {0,32,1,0,128},
    {0,32,2,0,128},
    {0,32,3,0,128},
    {0,32,4,0,128},
    {0,32,5,0,128},
    {0,32,6,0,128},
    {0,32,7,0,128},
};
static const hUGENoiseInstr_t noise_instruments[] = {
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
};

static const unsigned char waves[] = {
    165,215,201,225,188,154,118,49,12,186,222,96,27,202,3,147,
    240,225,210,195,180,165,150,135,120,105,90,75,60,45,30,15,
    253,236,219,202,185,168,151,134,121,104,87,70,53,36,19,2,
    222,254,220,186,154,169,135,119,136,135,101,86,84,50,16,18,
    171,205,239,237,203,160,18,62,220,186,188,222,254,220,50,16,
    255,238,221,204,187,170,153,136,119,102,85,68,51,34,17,0,
    255,255,255,255,255,255,255,255,0,0,0,0,0,0,0,0,
    121,188,222,239,255,238,220,185,117,67,33,16,0,17,35,69,
    187,231,152,170,125,212,205,118,173,233,26,192,212,114,80,89,
    72,202,220,171,22,97,150,44,80,222,186,135,88,57,40,50,
    90,0,65,214,193,106,71,20,147,236,10,182,94,121,218,49,
    237,14,128,84,149,37,188,179,235,158,118,108,188,182,147,21,
    119,157,32,121,30,200,16,106,206,216,13,162,222,170,215,226,
    122,203,83,153,53,232,211,98,92,218,16,83,105,152,124,202,
    236,201,147,199,150,235,94,50,204,129,165,51,45,36,224,232,
    2,154,50,208,173,1,167,38,58,226,87,231,212,176,101,11,
};

const hUGESong_t bownlyVictoryLapSong = {7, &order_cnt, order1, order2, order3,order4, duty_instruments, wave_instruments, noise_instruments, NULL, waves};