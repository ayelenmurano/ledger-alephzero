/*******************************************************************************
*  (c) 2019 - 2024 Zondax AG
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stddef.h>
#include "stdbool.h"
#include "parser_impl.h"
#include "substrate_functions_V18.h"
#include "substrate_functions.h"

parser_error_t _readMethod_V18(parser_context_t *c, uint8_t moduleIdx, uint8_t callIdx, pd_Method_V18_t *method);

const char * _getMethod_ModuleName_V18(uint8_t moduleIdx);

const char * _getMethod_Name_V18(uint8_t moduleIdx, uint8_t callIdx);
const char * _getMethod_Name_V18_ParserFull(uint16_t callPrivIdx);

const char * _getMethod_ItemName_V18(uint8_t moduleIdx, uint8_t callIdx, uint8_t itemIdx);

uint8_t _getMethod_NumItems_V18(uint8_t moduleIdx, uint8_t callIdx);

parser_error_t _getMethod_ItemValue_V18(
    pd_Method_V18_t *m, uint8_t moduleIdx, uint8_t callIdx, uint8_t itemIdx,
    char *outValue, uint16_t outValueLen,
    uint8_t pageIdx, uint8_t *pageCount);

bool _getMethod_ItemIsExpert_V18(uint8_t moduleIdx, uint8_t callIdx, uint8_t itemIdx);
bool _getMethod_IsNestingSupported_V18(uint8_t moduleIdx, uint8_t callIdx);

#ifdef __cplusplus
}
#endif
