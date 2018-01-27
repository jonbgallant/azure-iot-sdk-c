// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef PROVISIONING_SC_DEVICE_REGISTRATION_STATE_H
#define PROVISIONING_SC_DEVICE_REGISTRATION_STATE_H

#include "azure_c_shared_utility/macro_utils.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef struct DEVICE_REGISTRATION_STATE_TAG* DEVICE_REGISTRATION_STATE_HANDLE;

#define REGISTRATION_STATUS_VALUES \
        REGISTRATION_STATUS_ERROR, \
        REGISTRATION_STATUS_UNASSIGNED, \
        REGISTRATION_STATUS_ASSIGNING, \
        REGISTRATION_STATUS_ASSIGNED, \
        REGISTRATION_STATUS_FAILED, \
        REGISTRATION_STATUS_DISABLED \

//Note: REGISTRATION_STATUS_ERROR is invalid, indicating error
DEFINE_ENUM(REGISTRATION_STATUS, REGISTRATION_STATUS_VALUES);

/* Accessor Functions */
MOCKABLE_FUNCTION(, const char*, deviceRegistrationState_getRegistrationId, DEVICE_REGISTRATION_STATE_HANDLE, handle);
MOCKABLE_FUNCTION(, const char*, deviceRegistrationState_getCreatedDateTime, DEVICE_REGISTRATION_STATE_HANDLE, handle);
MOCKABLE_FUNCTION(, const char*, deviceRegistrationState_getDeviceId, DEVICE_REGISTRATION_STATE_HANDLE, handle);
MOCKABLE_FUNCTION(, REGISTRATION_STATUS, deviceRegistrationState_getRegistrationStatus, DEVICE_REGISTRATION_STATE_HANDLE, handle);
MOCKABLE_FUNCTION(, const char*, deviceRegistrationState_getUpdatedDateTime, DEVICE_REGISTRATION_STATE_HANDLE, handle);
MOCKABLE_FUNCTION(, int, deviceRegistrationState_getErrorCode, DEVICE_REGISTRATION_STATE_HANDLE, handle);
MOCKABLE_FUNCTION(, const char*, deviceRegistrationState_getErrorMessage, DEVICE_REGISTRATION_STATE_HANDLE, handle);
MOCKABLE_FUNCTION(, const char*, deviceRegistrationState_getEtag, DEVICE_REGISTRATION_STATE_HANDLE, handle);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* PROVISIONING_SC_DEVICE_REGISTRATION_STATE_H */