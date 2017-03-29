/* ****************************************************************
 *
 * Copyright 2017 Samsung Electronics All Rights Reserved.
 *
 *
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************/

/**
 * This file contains the declaration of functions related to
 * SHPlatform
 */

#ifndef SMARTHOME_API_COMMON_SHPLATFORM_H_
#define SMARTHOME_API_COMMON_SHPLATFORM_H_

namespace OIC
{
    namespace Service
    {
        namespace SH
        {
            class SHPlatformConfig;

            class SHPlatform
            {
            public:
                /**
                 * API to set configuration information using stack initialize.
                 *
                 * @param[in] config  configuration informations to be set.
                 */
                static void setConfig(const SHPlatformConfig &config);

            private:
                SHPlatform();
                ~SHPlatform();
            };
        }
    }
}
#endif /* SMARTHOME_API_COMMON_SHPLATFORM_H_ */