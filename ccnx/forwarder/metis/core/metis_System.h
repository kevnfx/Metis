/*
 * Copyright (c) 2013-2015, Xerox Corporation (Xerox)and Palo Alto Research Center (PARC)
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Patent rights are not granted under this agreement. Patent rights are
 *       available under FRAND terms.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL XEROX or PARC BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/**
 * @author Marc Mosko, Palo Alto Research Center (Xerox PARC)
 * @copyright 2013-2015, Xerox Corporation (Xerox)and Palo Alto Research Center (PARC).  All rights reserved.
 */


/**
 * @header metis_System.h
 * @abstract System-level properties
 * @discussion
 *     <#Discussion#>
 *
 * @author Marc Mosko
 * @copyright 2013-2015, Xerox Corporation (Xerox)and Palo Alto Research Center (PARC).  All rights reserved.
 */

#ifndef Metis_metis_System_h
#define Metis_metis_System_h

#include <ccnx/forwarder/metis/core/metis_Forwarder.h>
#include <ccnx/api/control/cpi_InterfaceSet.h>

/**
 * @function metisSystem_Interfaces
 * @abstract The system network interfaces
 * @discussion
 *   <#Discussion#>
 *
 * @param <#param1#>
 * @return <#return#>
 */
CPIInterfaceSet *metisSystem_Interfaces(MetisForwarder *metis);

/**
 * Returns the MTU of the named interface
 *
 * <#Paragraphs Of Explanation#>
 *
 * @param [in] metis An allocated forwarder
 * @param [in] interfaceName The system interface name, e.g. "eth0"
 *
 * @return 0 Interface does not exist
 * @return positive the MTU the kernel reports
 *
 * Example:
 * @code
 * {
 *     <#example#>
 * }
 * @endcode
 */
unsigned metisSystem_InterfaceMtu(MetisForwarder *metis, const char *interfaceName);

/**
 * Returns the LINK address of the specified interface
 *
 * <#Paragraphs Of Explanation#>
 *
 * @param [in] metis An allocated forwarder
 * @param [in] interfaceName The system interface name, e.g. "eth0"
 *
 * @retval non-null The MAC address of the interface
 * @retval null The interface does not exist
 *
 * Example:
 * @code
 * {
 *     CPIAddress *linkAddress = metisSystem_GetMacAddressByName(metis, "en0");
 * }
 * @endcode
 */
CPIAddress *metisSystem_GetMacAddressByName(MetisForwarder *metis, const char *interfaceName);
#endif
