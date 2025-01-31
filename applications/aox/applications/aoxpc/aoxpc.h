/******************************************************************************
 * # License
 * <b>Copyright 2021 Silicon Laboratories Inc. www.silabs.com</b>
 ******************************************************************************
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 *****************************************************************************/

/**
 * @defgroup aoxpc_core AoX Protocol Controller core.
 * @brief AoX Protocol Controller core.
 */

#ifndef AOXPC_H
#define AOXPC_H

#include "sl_status.h"

/**
 * @brief Fixture for setting up the AoX Protocol Controller core.
 *
 * @return SL_STATUS_OK on success
 */
sl_status_t aoxpc_fixt_setup(void);

#endif // AOXPC_H
