/******************************************************************************
 * # License
 * <b>Copyright 2022 Silicon Laboratories Inc. www.silabs.com</b>
 ******************************************************************************
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 *****************************************************************************/
#include "zigpc_application_monitoring.h"

// Includes from Unify Components
#include "uic_version.h"
#include "unify_application_monitoring.h"

sl_status_t zigpc_application_monitoring_init()
{
  // Configure our application name / version.
  unify_application_monitoring_set_application_name(ZIGPC_APPLICATION_NAME);
  unify_application_monitoring_set_application_version(UIC_VERSION);
  return unify_application_monitoring_init();
}