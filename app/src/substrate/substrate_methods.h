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
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wextern-c-compat"

extern "C" {
#endif

#include <stdint.h>
#include <stddef.h>

#define GET_PD_CALL(CALL, VERSION) (PD_CALL_ ## CALL ## _V ## VERSION)

#include "substrate_types_V18.h"
#include "substrate_methods_V18.h"

typedef union {
pd_Method_V18_t V18;
} pd_Method_t;

typedef union {
pd_MethodNested_V18_t V18;
} pd_MethodNested_t;

#ifdef __cplusplus
}
#endif
