﻿/**
 *  @brief      Declares the TPM_OwnerClear command.
 *  @details    The module receives the input parameters, marshals these parameters
 *              to a byte array, sends the command to the TPM and unmarshals the response
 *              back to the out parameters.
 *  @file       TPM_OwnerClear.h
 *
 *  Copyright 2014 - 2022 Infineon Technologies AG ( www.infineon.com )
 *
 *  Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
 *  1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#pragma once

#include "TPM_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 *  @brief      This function handles the TPM_OwnerClear command
 *  @details    The function receives the input parameters marshals these parameters
 *              to a byte array sends the command to the TPM and unmarshals the response
 *              back to the out parameters
 *
 *  @param      PunAuthHandle           The authorization session handle used for owner authentication.
 *  @param      PpNonceEven             Even nonce previously generated by TPM to cover inputs.
 *  @param      PbContinueAuthSession   The continue use flag for the authorization session handle.
 *  @param      PpOwnerAuth             The authorization session digest for inputs and owner authentication.
 *                                      HMAC key: ownerAuth.
 *
 *  @retval     RC_SUCCESS              The operation completed successfully.
 *  @retval     RC_E_BAD_PARAMETER      An invalid parameter was passed to the function.
 *  @retval     RC_E_BUFFER_TOO_SMALL   In case an internal buffer is too small for HASH calculation.
 *  @retval     RC_E_INTERNAL           In case an error occurred while preparing the HASH buffer.
 *  @retval     ...                     Error codes from called functions.
 */
_Check_return_
unsigned int
TSS_TPM_OwnerClear(
    _In_    TSS_TPM_AUTHHANDLE      PunAuthHandle,
    _Inout_ TSS_TPM_NONCE*          PpNonceEven,
    _In_    TSS_BYTE                PbContinueAuthSession,
    _In_    const TSS_TPM_AUTHDATA* PpOwnerAuth);

#ifdef __cplusplus
}
#endif
