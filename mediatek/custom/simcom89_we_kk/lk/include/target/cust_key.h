#ifndef __CUST_KEY_H__
#define __CUST_KEY_H__

#include<cust_kpd.h>

#define MT65XX_META_KEY		42	/* KEY_2 */
#define MT65XX_PMIC_RST_KEY	12	/* Invalid Key */
#define MT_CAMERA_KEY 		10
#if defined(ACER_C17)
#define MT65XX_BOOT_MENU_KEY       MT65XX_PMIC_RST_KEY   /* KEY_VOLUMEUP */
#else
#define MT65XX_BOOT_MENU_KEY       0   /* KEY_VOLUMEUP */
#endif
#define MT65XX_MENU_SELECT_KEY     MT65XX_BOOT_MENU_KEY   
#define MT65XX_MENU_OK_KEY         1    /* KEY_VOLUMEDOWN */

#endif /* __CUST_KEY_H__ */
