/*
 * Definitions for tpa2051d3 speaker amp chip.
 */
#ifndef TFA9887_H
#define TFA9887_H

#include <linux/ioctl.h>

#define TFA9887_I2C_NAME "tfa9887"
#define TFA9887L_I2C_NAME "tfa9887l"
struct tfa9887_platform_data {
	uint32_t gpio_tfa9887_spk_en;

};

extern int tfa9887l_step;
extern int tfa9887l_step_en;

void set_tfa9887_spkamp(int en, int dsp_mode);
void set_tfa9887l_spkamp(int en, int dsp_mode);
int tfa9887_l_write(char *txData, int length);
int tfa9887_l_read(char *rxData, int length);
#endif

